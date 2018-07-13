#include "overheadcontroller.h"

OverheadController::OverheadController(QObject *parent) : QObject(parent)
{
    latestCaptureRequestTimer = new QTimer(this);
    connect(latestCaptureRequestTimer, SIGNAL(timeout()), this, SLOT(latestCaptureRequestTimerTimeout()));

    latestCaptureRequestManager = new QNetworkAccessManager(this);
    connect(latestCaptureRequestManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(latestCaptureRequestReplyFinished(QNetworkReply*)));

    updateImageRequestManager = new QNetworkAccessManager(this);
    connect(updateImageRequestManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateImageRequestReplyFinished(QNetworkReply*)));

    utilityRequestManager = new QNetworkAccessManager(this);
    connect(utilityRequestManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(utilityRequestManagerReplyFinished(QNetworkReply*)));
}

void OverheadController::latestCaptureRequestReplyFinished(QNetworkReply *reply)
{
    QByteArray result = reply->readAll();
    QXmlStreamReader reader( result );

    QString id;
    QString name;
    QString time;

    if (reader.readNextStartElement()) {
            if (reader.name() == "root"){
                while(reader.readNextStartElement()){
                    if(reader.name() == "capture"){
                        while(reader.readNextStartElement()){
                            if(reader.name() == "id"){
                                id = reader.readElementText();
                            } else if( reader.name() == "name") {
                                name = reader.readElementText();
                            } else if( reader.name() == "time") {
                                time = reader.readElementText();
                            } else
                                reader.skipCurrentElement();
                        }
                    }
                    else
                        reader.skipCurrentElement();
                }
            }
            else
                reader.raiseError(QObject::tr("Incorrect file"));
    }

    if( !id.isEmpty() ) {

        if( latestCaptureID != id ) {
            qDebug() << "Updated capture! Received a reply with capture information: id(" << id << ") and name: " << name;
            latestCaptureID = id;
            latestCaptureName = name;
            latestCaptureTime = time;
            emit updateImageLabel( time );

            QUrl url = QUrl( QString("http://") + host + QString(":") + QString::number(port) + QString("/captures/"+id+"/image") );
            updateImageRequestManager->get( QNetworkRequest( url ) );

        }

    }

}

void OverheadController::setConnectionParameters(QString host, int port)
{
    qDebug() << "OverheadController::setConectionParameters(" << host << ":" << port << ") called";
    this->host = host;
    this->port = port;
}

void OverheadController::startRequestLoop()
{
    latestCaptureRequestTimer->start(1000);
}

void OverheadController::stopRequestLoop()
{
    latestCaptureRequestTimer->stop();
}

void OverheadController::latestCaptureRequestTimerTimeout()
{
    QUrl url = QUrl( QString("http://") + host + QString(":") + QString::number(port) + QString("/captures/latest") );
    latestCaptureRequestManager->get( QNetworkRequest( url ) );
}

void OverheadController::updateImageRequestReplyFinished(QNetworkReply* reply)
{
    QImage *image = new QImage;
    image->loadFromData(reply->readAll(), "JPG");
    qDebug() << "Got image reply! Image is: " << image->width() << "x" << image->height() ;
    emit updateImage(image);
}

void OverheadController::captureNewImage()
{
    QUrl url = QUrl( QString("http://") + host + QString(":") + QString::number(port) + QString("/CAPTURE_NOW") );
    utilityRequestManager->get( QNetworkRequest( url ) );
}

void OverheadController::printLatestImage()
{
    QUrl url = QUrl( QString("http://") + host + QString(":") + QString::number(port) + QString("/print/" + latestCaptureID) );
    utilityRequestManager->get( QNetworkRequest( url ) );
}


void OverheadController::deleteLatestImage()
{
    QUrl url = QUrl( QString("http://") + host + QString(":") + QString::number(port) + QString("/delete/" + latestCaptureID) );
    utilityRequestManager->get( QNetworkRequest( url ) );
}


void OverheadController::selectAutoExposure()
{

}


void OverheadController::selectManualExposure()
{

}

void OverheadController::utilityRequestManagerReplyFinished(QNetworkReply* reply)
{
    qDebug() << "OverheadController::utilityRequestManagerReplyFinished called. Data is:" << reply->readAll();
}

