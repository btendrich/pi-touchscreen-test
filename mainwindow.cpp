#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    processConfig();

    ui->tabWidget->setCurrentIndex( ui->tabWidget->indexOf( ui->homeTab ) );

    connect(&timerController, SIGNAL(connectedToServer()),this, SLOT(timerTabTimerServerConnected()));
    connect(&timerController, SIGNAL(disconnectedFromServer()),this, SLOT(timerTabTimerServerDisconnected()));
    connect(&timerController, SIGNAL(timerUpdate(QString)),this, SLOT(timerTabUpdateTimerTimeField(QString)));

    connect(&overheadController, SIGNAL(updateImageLabel(QString)),this,SLOT(overheadTabUpdateLabel(QString)));
    connect(&overheadController, SIGNAL(updateImage(QImage*)),this, SLOT(overheadTabUpdateImage(QImage*)));

    timerTabTimerServerDisconnected();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_refreshConfigButton_clicked()
{
    // here would be us going out and getting a new config file from the server...

    timerTabWidgetHolder = ui->timerTab;
    ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->timerTab ) );

    processConfig();
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    // stop the overhead camera updates, then start them if this happens to be the overhead tabs
    overheadController.stopRequestLoop();

    QSettings settings( QDir::homePath() + "/settings.ini", QSettings::IniFormat);
    if( ui->tabWidget->currentWidget() == ui->statusTab ) { // this is the status tab
        qDebug() << "Changed to the status tab";

        // lets populate the status fields on this tab

        // start with the local ip address:
        foreach (const QHostAddress &address, QNetworkInterface::allAddresses()) {
            if (address.protocol() == QAbstractSocket::IPv4Protocol && address != QHostAddress(QHostAddress::LocalHost))
                ui->ipAddressField->setPlainText( address.toString() );
        }

        // show the local hardware address
        foreach(QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
        {
            // Return only the first non-loopback MAC Address
            if (!(netInterface.flags() & QNetworkInterface::IsLoopBack))
                ui->hardwareAddressField->setPlainText( netInterface.hardwareAddress() );
        }

        // load the current config into the text browser
        displayConfigInTextField();

    } else if( ui->tabWidget->currentWidget() == ui->overheadTab ) { // this is the overhead pictures tab
        qDebug() << "Changed to the overhead tab";
        overheadController.startRequestLoop();
    }


}

void MainWindow::displayConfigInTextField(){

    QFile file( QDir::homePath() + "/settings.ini" );

    QString line;
    ui->configTextField->clear();
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line = stream.readLine();
            ui->configTextField->setText(ui->configTextField->toPlainText()+line+"\n");
        }
    }
    file.close();
}

void MainWindow::processConfig() {
    QSettings settings( QDir::homePath() + "/settings.ini", QSettings::IniFormat);


    //enable/disable the status tab  ** enabled by default **
    settings.beginGroup("Status");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->statusTab ) );
    }
    settings.endGroup();

    //enable/disable the overhead camera tab
    settings.beginGroup("Overhead");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->overheadTab ) );
    }
    ui->timerControllerField->setPlainText( settings.value("Host").toString());
    ui->statusTabCameraControllerField->setPlainText( settings.value("Host").toString() + ":" + settings.value("Port").toString() );
    overheadController.stopRequestLoop();
    overheadController.setConnectionParameters( settings.value("Host").toString(), settings.value("Port").toInt() );
    settings.endGroup();

    //enable/disable the cameras tab
    settings.beginGroup("Cameras");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->camerasTab ) );
    }
    settings.endGroup();

    //enable/disable the video tab
    settings.beginGroup("Video");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->videoTab ) );
    }
    settings.endGroup();

    //enable/disable the audio tab
    settings.beginGroup("Audio");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->audioTab ) );
    }
    settings.endGroup();

    // set panel name on home tab
    ui->homeTabName->setText( settings.value("Name").toString() );

    // load the timer server/port into the timercontroller object
    settings.beginGroup("Timer");
    if( !settings.value("Enabled", true).toBool() ) {
        ui->tabWidget->removeTab( ui->tabWidget->indexOf( ui->timerTab ) );
    }
    ui->timerControllerField->setPlainText( settings.value("Host").toString() + ":" + settings.value("Port").toString() );
    timerController.stopConnection();
    timerController.setConnectionParameters( settings.value("Host").toString(), settings.value("Port").toInt() );
    timerController.startConnection();
    settings.endGroup();


}

void MainWindow::on_restartButton_clicked()
{
    QCoreApplication::quit();
}

void MainWindow::on_timerTabStartButton_clicked()
{
    ui->timerTabStartButton->setEnabled( false );
    timerController.sendStartCommand();
    ui->timerTabStartButton->setEnabled( true );
}

void MainWindow::on_timerTabStopButton_clicked()
{
    ui->timerTabStopButton->setEnabled( false );
    timerController.sendStopCommand();
    ui->timerTabStopButton->setEnabled( true );
}

void MainWindow::on_timerTabResetButton_clicked()
{
    ui->timerTabResetButton->setEnabled( false );
    timerController.sendResetCommand();
    ui->timerTabResetButton->setEnabled( true );
}

void MainWindow::timerTabUpdateTimerTimeField(QString value)
{
    ui->timerTabTimeField->setPlainText( value );
}

void MainWindow::timerTabTimerServerConnected()
{
    ui->timerTabStartButton->setEnabled( true );
    ui->timerTabStopButton->setEnabled( true );
    ui->timerTabResetButton->setEnabled( true );
    ui->timerControllerField->setStyleSheet( "background-color: #ccffcc" );
    ui->timerTabTimeField->setStyleSheet( " background-color: white; color: green; ");
    ui->timerTabTimeField->setPlainText("XX:XX:XX");
}

void MainWindow::timerTabTimerServerDisconnected()
{
    ui->timerTabStartButton->setEnabled( false );
    ui->timerTabStopButton->setEnabled( false );
    ui->timerTabResetButton->setEnabled( false );
    ui->timerControllerField->setStyleSheet( "background-color: #ffcccc" );
    ui->timerTabTimeField->setStyleSheet( " background-color: white; color: red; ");
    ui->timerTabTimeField->setPlainText("XX:XX:XX");
}

void MainWindow::on_overheadTabCaptureNewButton_clicked()
{
    overheadController.captureNewImage();
}

void MainWindow::on_overheadTabPrintLastButton_clicked()
{
    overheadController.printLatestImage();
}

void MainWindow::on_overheadTabDeleteLastButton_clicked()
{
    overheadController.deleteLatestImage();
}

void MainWindow::on_overheadTabDarkerButton_clicked()
{
    ui->overheadTabInfoTextField->setPlainText(" darker button clicked ");
}

void MainWindow::on_overheadTabLighterButton_clicked()
{
    ui->overheadTabInfoTextField->setPlainText(" lighter button clicked ");
}

void MainWindow::overheadTabUpdateLabel(QString label)
{
    ui->overheadTabInfoTextField->setPlainText( label );
}

void MainWindow::overheadTabUpdateImage(QImage *image)
{
    qDebug() << "update image called";
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setSceneRect( ui->overheadTabPictureView->rect() );
    ui->overheadTabPictureView->setScene( scene );

    QPixmap pixmap = QPixmap::fromImage( *image );
//    QPixmap pixmap("/Users/btendrich/cat.jpg");

    qDebug() << "Original pixmap height is" << pixmap.height();

    QPixmap scaled = pixmap.scaledToHeight( scene->height() );

    if( scaled.width() > scene->width()-1 )
    {
        scaled = pixmap.scaledToWidth( scene->width() );
    }

    scene->addPixmap( scaled );

    //QPixmap pixmap = QPixmap::fromImage(*image);
}
