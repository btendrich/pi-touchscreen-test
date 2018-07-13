#!/usr/bin/env ruby
require 'socket'
require 'logger'

$port = 4026

$timerStartTime = Time.now
$timerPreviousValue = 0
$timerRunning = true
$showZero = false

$logger = Logger.new(STDOUT)

server = TCPServer.new $port

$logger.info "Starting up server on port #{$port}"

loop do
  Thread.start(server.accept) do |client|
    sock_domain, remote_port, remote_hostname, remote_ip = client.peeraddr
    $logger.info "#{remote_ip}: New connection"
    client.puts "HELO TimerServer 0.1"
    helo = client.gets.chomp.split(' ')
        
    if helo[0] != "HELO"
      $logger.fatal "#{remote_ip}: Received #{helo[0]} from remote client instead of HELO... Closing connection..."
      client.close
    else
      client.puts "OK"
      $logger.debug "#{remote_ip}: Successfully negotiated with client"
    end
    
    client.puts "UPDATE XX:XX:XX"
    
    queue = Queue.new

    updateThread = Thread.new {
      previous = "XX:XX:XX"
      current = ""
      
      while true
        
        if $timerRunning
          time_diff = Time.now - $timerStartTime + $timerPreviousValue
          current = Time.at(time_diff.to_i.abs).utc.strftime "%H:%M:%S"      
        else
          current = "00:00:00" if $timerStartTime == 0 and $timerPreviousValue == 0
        end
        
        if previous != current
          client.puts "UPDATE #{current}"
          previous = current
        end        

        sleep (0.05)
      end
    }
        
    while( buffer = client.gets.chomp )
      args = buffer.split
      case args[0]
      when "START"
        $logger.info "#{remote_ip}: START timer"
        if $timerRunning
          client.puts "ERROR"
        else
          $timerStartTime = Time.now
          client.puts "OK"
        end
        $timerRunning = true
        $showZero = false
      when "STOP"
        $logger.info "#{remote_ip}: STOP timer"
        if $timerRunning
          $timerPreviousValue = Time.now - $timerStartTime
          client.puts "OK"
        else
          client.puts "ERROR"
        end
        $timerRunning = false
        $showZero = false
      when "RESET"
        $logger.info "#{remote_ip}: RESET timer"
        $timerPreviousValue = 0
        if $timerRunning
          $timerStartTime = Time.now
        else
          $timerStartTime = 0
        end
        $showZero = true
        client.puts "OK"
      else
        $logger.error "#{remote_ip}: Unknown command '#{args[0]}'"
        client.puts "ERROR"
      end
      
    end

    $logger.info "#{remote_ip}: Disconnected..."
    client.close

  end
end

