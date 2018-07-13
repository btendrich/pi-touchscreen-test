#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkInterface>
#include <QDir>
#include <QSettings>

#include <QGraphicsScene>
#include <QDebug>

#include "timercontroller.h"
#include "overheadcontroller.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void timerTabUpdateTimerTimeField(QString value);
    void timerTabTimerServerConnected();
    void timerTabTimerServerDisconnected();

    void overheadTabUpdateLabel(QString label);
    void overheadTabUpdateImage(QImage *image);

private slots:
    void on_refreshConfigButton_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_restartButton_clicked();

    void on_timerTabStartButton_clicked();

    void on_timerTabStopButton_clicked();

    void on_timerTabResetButton_clicked();

    void on_overheadTabCaptureNewButton_clicked();

    void on_overheadTabPrintLastButton_clicked();

    void on_overheadTabDeleteLastButton_clicked();

    void on_overheadTabDarkerButton_clicked();

    void on_overheadTabLighterButton_clicked();

private:
    Ui::MainWindow *ui;

    QWidget *timerTabWidgetHolder;

    void displayConfigInTextField();
    void processConfig();

    TimerController timerController;
    OverheadController overheadController;
};

#endif // MAINWINDOW_H
