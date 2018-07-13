#ifndef OVERHEADCONTROLLER_H
#define OVERHEADCONTROLLER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QTimer>
#include <QtNetwork/QNetworkReply>
#include <QXmlStreamReader>
#include <QImage>

class OverheadController : public QObject
{
    Q_OBJECT
public:
    explicit OverheadController(QObject *parent = 0);
    void setConnectionParameters(QString host, int port);
    void startRequestLoop();
    void stopRequestLoop();
    void captureNewImage();
    void printLatestImage();
    void deleteLatestImage();
    void selectAutoExposure();
    void selectManualExposure();

signals:
    void updateImage(QImage *image);
    void updateImageLabel(QString label);

public slots:
    void latestCaptureRequestReplyFinished(QNetworkReply* reply);
    void latestCaptureRequestTimerTimeout();
    void updateImageRequestReplyFinished(QNetworkReply* reply);
    void utilityRequestManagerReplyFinished(QNetworkReply* reply);

private:
    QNetworkAccessManager *latestCaptureRequestManager;
    QNetworkAccessManager *updateImageRequestManager;
    QNetworkAccessManager *utilityRequestManager;

    QTimer *latestCaptureRequestTimer;
    QString host;
    int port;

    QString latestCaptureID;
    QString latestCaptureName;
    QString latestCaptureTime;

};

#endif // OVERHEADCONTROLLER_H
