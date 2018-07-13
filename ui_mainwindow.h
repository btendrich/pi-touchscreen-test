/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QLabel *homeTabName;
    QWidget *timerTab;
    QPushButton *timerTabStartButton;
    QPushButton *timerTabStopButton;
    QPushButton *timerTabResetButton;
    QPlainTextEdit *timerTabTimeField;
    QWidget *overheadTab;
    QGraphicsView *overheadTabPictureView;
    QPlainTextEdit *overheadTabInfoTextField;
    QPushButton *overheadTabCaptureNewButton;
    QPushButton *overheadTabLighterButton;
    QPushButton *overheadTabDeleteLastButton;
    QPushButton *overheadTabPrintLastButton;
    QPushButton *overheadTabDarkerButton;
    QWidget *camerasTab;
    QWidget *videoTab;
    QWidget *audioTab;
    QLabel *label;
    QWidget *statusTab;
    QLabel *ipAddressLabel;
    QPlainTextEdit *ipAddressField;
    QPlainTextEdit *hardwareAddressField;
    QPlainTextEdit *nameField;
    QLabel *nameLabel;
    QLabel *hardwareAddressLabel;
    QLabel *configServerLabel;
    QPlainTextEdit *timerControllerField;
    QTextBrowser *configTextField;
    QPushButton *restartButton;
    QPlainTextEdit *statusTabCameraControllerField;
    QPlainTextEdit *field6Field;
    QPlainTextEdit *field7Field;
    QPlainTextEdit *field8Field;
    QPlainTextEdit *field9Field;
    QLabel *field5Label;
    QLabel *field6Label;
    QLabel *field7Label;
    QLabel *field8Label;
    QLabel *field9Label;
    QPushButton *refreshConfigButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 480));
        MainWindow->setMaximumSize(QSize(800, 480));
        QFont font;
        font.setFamily(QStringLiteral("Andale Mono"));
        font.setPointSize(13);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(10, 10, 781, 461));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        homeTabName = new QLabel(homeTab);
        homeTabName->setObjectName(QStringLiteral("homeTabName"));
        homeTabName->setGeometry(QRect(10, 50, 761, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Andale Mono"));
        font1.setPointSize(48);
        homeTabName->setFont(font1);
        homeTabName->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(homeTab, QString());
        timerTab = new QWidget();
        timerTab->setObjectName(QStringLiteral("timerTab"));
        timerTabStartButton = new QPushButton(timerTab);
        timerTabStartButton->setObjectName(QStringLiteral("timerTabStartButton"));
        timerTabStartButton->setGeometry(QRect(4, 230, 241, 191));
        QFont font2;
        font2.setFamily(QStringLiteral("Andale Mono"));
        font2.setPointSize(36);
        timerTabStartButton->setFont(font2);
        timerTabStopButton = new QPushButton(timerTab);
        timerTabStopButton->setObjectName(QStringLiteral("timerTabStopButton"));
        timerTabStopButton->setGeometry(QRect(265, 230, 245, 191));
        timerTabStopButton->setFont(font2);
        timerTabResetButton = new QPushButton(timerTab);
        timerTabResetButton->setObjectName(QStringLiteral("timerTabResetButton"));
        timerTabResetButton->setGeometry(QRect(530, 230, 241, 191));
        timerTabResetButton->setFont(font2);
        timerTabTimeField = new QPlainTextEdit(timerTab);
        timerTabTimeField->setObjectName(QStringLiteral("timerTabTimeField"));
        timerTabTimeField->setEnabled(false);
        timerTabTimeField->setGeometry(QRect(6, 27, 763, 181));
        QFont font3;
        font3.setPointSize(112);
        timerTabTimeField->setFont(font3);
        timerTabTimeField->setStyleSheet(QStringLiteral("background-color: white"));
        timerTabTimeField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timerTabTimeField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tabWidget->addTab(timerTab, QString());
        overheadTab = new QWidget();
        overheadTab->setObjectName(QStringLiteral("overheadTab"));
        overheadTabPictureView = new QGraphicsView(overheadTab);
        overheadTabPictureView->setObjectName(QStringLiteral("overheadTabPictureView"));
        overheadTabPictureView->setGeometry(QRect(252, 5, 520, 388));
        overheadTabPictureView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        overheadTabPictureView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        overheadTabInfoTextField = new QPlainTextEdit(overheadTab);
        overheadTabInfoTextField->setObjectName(QStringLiteral("overheadTabInfoTextField"));
        overheadTabInfoTextField->setEnabled(false);
        overheadTabInfoTextField->setGeometry(QRect(252, 398, 520, 30));
        overheadTabInfoTextField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        overheadTabInfoTextField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        overheadTabCaptureNewButton = new QPushButton(overheadTab);
        overheadTabCaptureNewButton->setObjectName(QStringLiteral("overheadTabCaptureNewButton"));
        overheadTabCaptureNewButton->setGeometry(QRect(5, 5, 242, 80));
        QFont font4;
        font4.setPointSize(15);
        overheadTabCaptureNewButton->setFont(font4);
        overheadTabLighterButton = new QPushButton(overheadTab);
        overheadTabLighterButton->setObjectName(QStringLiteral("overheadTabLighterButton"));
        overheadTabLighterButton->setGeometry(QRect(5, 342, 242, 80));
        overheadTabLighterButton->setFont(font4);
        overheadTabDeleteLastButton = new QPushButton(overheadTab);
        overheadTabDeleteLastButton->setObjectName(QStringLiteral("overheadTabDeleteLastButton"));
        overheadTabDeleteLastButton->setGeometry(QRect(5, 171, 242, 80));
        overheadTabDeleteLastButton->setFont(font4);
        overheadTabPrintLastButton = new QPushButton(overheadTab);
        overheadTabPrintLastButton->setObjectName(QStringLiteral("overheadTabPrintLastButton"));
        overheadTabPrintLastButton->setGeometry(QRect(5, 91, 242, 80));
        overheadTabPrintLastButton->setFont(font4);
        overheadTabDarkerButton = new QPushButton(overheadTab);
        overheadTabDarkerButton->setObjectName(QStringLiteral("overheadTabDarkerButton"));
        overheadTabDarkerButton->setGeometry(QRect(5, 256, 242, 80));
        overheadTabDarkerButton->setFont(font4);
        tabWidget->addTab(overheadTab, QString());
        camerasTab = new QWidget();
        camerasTab->setObjectName(QStringLiteral("camerasTab"));
        tabWidget->addTab(camerasTab, QString());
        videoTab = new QWidget();
        videoTab->setObjectName(QStringLiteral("videoTab"));
        tabWidget->addTab(videoTab, QString());
        audioTab = new QWidget();
        audioTab->setObjectName(QStringLiteral("audioTab"));
        label = new QLabel(audioTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 120, 751, 131));
        QFont font5;
        font5.setPointSize(48);
        label->setFont(font5);
        label->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(audioTab, QString());
        statusTab = new QWidget();
        statusTab->setObjectName(QStringLiteral("statusTab"));
        statusTab->setEnabled(true);
        ipAddressLabel = new QLabel(statusTab);
        ipAddressLabel->setObjectName(QStringLiteral("ipAddressLabel"));
        ipAddressLabel->setGeometry(QRect(10, 10, 191, 30));
        QFont font6;
        font6.setFamily(QStringLiteral("Andale Mono"));
        ipAddressLabel->setFont(font6);
        ipAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ipAddressField = new QPlainTextEdit(statusTab);
        ipAddressField->setObjectName(QStringLiteral("ipAddressField"));
        ipAddressField->setEnabled(false);
        ipAddressField->setGeometry(QRect(210, 7, 201, 30));
        ipAddressField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        ipAddressField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hardwareAddressField = new QPlainTextEdit(statusTab);
        hardwareAddressField->setObjectName(QStringLiteral("hardwareAddressField"));
        hardwareAddressField->setEnabled(false);
        hardwareAddressField->setGeometry(QRect(210, 50, 201, 30));
        hardwareAddressField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hardwareAddressField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameField = new QPlainTextEdit(statusTab);
        nameField->setObjectName(QStringLiteral("nameField"));
        nameField->setEnabled(false);
        nameField->setGeometry(QRect(210, 90, 201, 30));
        nameField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        nameLabel = new QLabel(statusTab);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(10, 90, 191, 30));
        nameLabel->setFont(font6);
        nameLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hardwareAddressLabel = new QLabel(statusTab);
        hardwareAddressLabel->setObjectName(QStringLiteral("hardwareAddressLabel"));
        hardwareAddressLabel->setGeometry(QRect(10, 50, 191, 30));
        hardwareAddressLabel->setFont(font6);
        hardwareAddressLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        configServerLabel = new QLabel(statusTab);
        configServerLabel->setObjectName(QStringLiteral("configServerLabel"));
        configServerLabel->setGeometry(QRect(10, 130, 191, 30));
        configServerLabel->setFont(font6);
        configServerLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        timerControllerField = new QPlainTextEdit(statusTab);
        timerControllerField->setObjectName(QStringLiteral("timerControllerField"));
        timerControllerField->setEnabled(false);
        timerControllerField->setGeometry(QRect(210, 130, 201, 30));
        timerControllerField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timerControllerField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        configTextField = new QTextBrowser(statusTab);
        configTextField->setObjectName(QStringLiteral("configTextField"));
        configTextField->setEnabled(true);
        configTextField->setGeometry(QRect(420, 10, 351, 411));
        configTextField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        configTextField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        restartButton = new QPushButton(statusTab);
        restartButton->setObjectName(QStringLiteral("restartButton"));
        restartButton->setGeometry(QRect(10, 370, 196, 51));
        statusTabCameraControllerField = new QPlainTextEdit(statusTab);
        statusTabCameraControllerField->setObjectName(QStringLiteral("statusTabCameraControllerField"));
        statusTabCameraControllerField->setEnabled(false);
        statusTabCameraControllerField->setGeometry(QRect(210, 170, 201, 30));
        statusTabCameraControllerField->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        statusTabCameraControllerField->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field6Field = new QPlainTextEdit(statusTab);
        field6Field->setObjectName(QStringLiteral("field6Field"));
        field6Field->setEnabled(false);
        field6Field->setGeometry(QRect(210, 210, 201, 30));
        field6Field->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field6Field->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field7Field = new QPlainTextEdit(statusTab);
        field7Field->setObjectName(QStringLiteral("field7Field"));
        field7Field->setEnabled(false);
        field7Field->setGeometry(QRect(210, 250, 201, 30));
        field7Field->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field7Field->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field8Field = new QPlainTextEdit(statusTab);
        field8Field->setObjectName(QStringLiteral("field8Field"));
        field8Field->setEnabled(false);
        field8Field->setGeometry(QRect(210, 290, 201, 30));
        field8Field->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field8Field->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field9Field = new QPlainTextEdit(statusTab);
        field9Field->setObjectName(QStringLiteral("field9Field"));
        field9Field->setEnabled(false);
        field9Field->setGeometry(QRect(210, 330, 201, 30));
        field9Field->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field9Field->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        field5Label = new QLabel(statusTab);
        field5Label->setObjectName(QStringLiteral("field5Label"));
        field5Label->setGeometry(QRect(10, 170, 191, 30));
        field5Label->setFont(font6);
        field5Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        field6Label = new QLabel(statusTab);
        field6Label->setObjectName(QStringLiteral("field6Label"));
        field6Label->setGeometry(QRect(10, 210, 191, 30));
        field6Label->setFont(font6);
        field6Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        field7Label = new QLabel(statusTab);
        field7Label->setObjectName(QStringLiteral("field7Label"));
        field7Label->setGeometry(QRect(10, 250, 191, 30));
        field7Label->setFont(font6);
        field7Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        field8Label = new QLabel(statusTab);
        field8Label->setObjectName(QStringLiteral("field8Label"));
        field8Label->setGeometry(QRect(10, 290, 191, 30));
        field8Label->setFont(font6);
        field8Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        field9Label = new QLabel(statusTab);
        field9Label->setObjectName(QStringLiteral("field9Label"));
        field9Label->setGeometry(QRect(10, 330, 191, 30));
        field9Label->setFont(font6);
        field9Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        refreshConfigButton = new QPushButton(statusTab);
        refreshConfigButton->setObjectName(QStringLiteral("refreshConfigButton"));
        refreshConfigButton->setGeometry(QRect(210, 370, 196, 51));
        tabWidget->addTab(statusTab, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        homeTabName->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        timerTabStartButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        timerTabStopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        timerTabResetButton->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        timerTabTimeField->setPlainText(QApplication::translate("MainWindow", "00:00:00", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(timerTab), QApplication::translate("MainWindow", "Timer", Q_NULLPTR));
        overheadTabInfoTextField->setPlainText(QApplication::translate("MainWindow", "255.255.255.255", Q_NULLPTR));
        overheadTabCaptureNewButton->setText(QApplication::translate("MainWindow", "Capture New", Q_NULLPTR));
        overheadTabLighterButton->setText(QApplication::translate("MainWindow", "Manual Exposure", Q_NULLPTR));
        overheadTabDeleteLastButton->setText(QApplication::translate("MainWindow", "Delete Last", Q_NULLPTR));
        overheadTabPrintLastButton->setText(QApplication::translate("MainWindow", "Print Last", Q_NULLPTR));
        overheadTabDarkerButton->setText(QApplication::translate("MainWindow", "Auto Exposure", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(overheadTab), QApplication::translate("MainWindow", "Overhead Pictures", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(camerasTab), QApplication::translate("MainWindow", "Cameras", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(videoTab), QApplication::translate("MainWindow", "Video", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Good Morning Wex!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(audioTab), QApplication::translate("MainWindow", "Audio", Q_NULLPTR));
        ipAddressLabel->setText(QApplication::translate("MainWindow", "IP Address:", Q_NULLPTR));
        ipAddressField->setPlainText(QApplication::translate("MainWindow", "255.255.255.255", Q_NULLPTR));
        hardwareAddressField->setPlainText(QApplication::translate("MainWindow", "FF:FF:FF:FF:FF:FF", Q_NULLPTR));
        nameField->setPlainText(QApplication::translate("MainWindow", "01234567890123456", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("MainWindow", "Name:", Q_NULLPTR));
        hardwareAddressLabel->setText(QApplication::translate("MainWindow", "Hardware Address:", Q_NULLPTR));
        configServerLabel->setText(QApplication::translate("MainWindow", "Timer Controller:", Q_NULLPTR));
        timerControllerField->setPlainText(QApplication::translate("MainWindow", "255.255.255.255", Q_NULLPTR));
        restartButton->setText(QApplication::translate("MainWindow", "Restart", Q_NULLPTR));
        statusTabCameraControllerField->setPlainText(QString());
        field6Field->setPlainText(QString());
        field7Field->setPlainText(QString());
        field8Field->setPlainText(QString());
        field9Field->setPlainText(QString());
        field5Label->setText(QApplication::translate("MainWindow", "Camera Controller:", Q_NULLPTR));
        field6Label->setText(QApplication::translate("MainWindow", "Stuff:", Q_NULLPTR));
        field7Label->setText(QApplication::translate("MainWindow", "Stuff:", Q_NULLPTR));
        field8Label->setText(QApplication::translate("MainWindow", "Stuff:", Q_NULLPTR));
        field9Label->setText(QApplication::translate("MainWindow", "Stuff:", Q_NULLPTR));
        refreshConfigButton->setText(QApplication::translate("MainWindow", "Refresh Config", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(statusTab), QApplication::translate("MainWindow", "Status", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
