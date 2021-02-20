/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTimeEdit *time_current;
    QCheckBox *checkBox;
    QProgressBar *progressBar;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTabWidget *tabWidget;
    QWidget *Timers;
    QListWidget *listWidget_timer;
    QWidget *Clocks;
    QListWidget *listWidget_clocks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(665, 360);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 290, 75, 23));
        time_current = new QTimeEdit(centralwidget);
        time_current->setObjectName(QString::fromUtf8("time_current"));
        time_current->setGeometry(QRect(80, 190, 118, 22));
        time_current->setCurrentSectionIndex(0);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(220, 170, 70, 17));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(90, 40, 118, 23));
        progressBar->setValue(0);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 70, 121, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 131, 21));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(110, 240, 69, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 240, 47, 13));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 110, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 140, 75, 23));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(370, 40, 301, 241));
        Timers = new QWidget();
        Timers->setObjectName(QString::fromUtf8("Timers"));
        listWidget_timer = new QListWidget(Timers);
        listWidget_timer->setObjectName(QString::fromUtf8("listWidget_timer"));
        listWidget_timer->setGeometry(QRect(10, 10, 271, 192));
        tabWidget->addTab(Timers, QString());
        Clocks = new QWidget();
        Clocks->setObjectName(QString::fromUtf8("Clocks"));
        listWidget_clocks = new QListWidget(Clocks);
        listWidget_clocks->setObjectName(QString::fromUtf8("listWidget_clocks"));
        listWidget_clocks->setGeometry(QRect(10, 10, 271, 192));
        tabWidget->addTab(Clocks, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 665, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        listWidget_timer->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        time_current->setDisplayFormat(QCoreApplication::translate("MainWindow", "H:mm:ss", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", " dnd mode", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number of timers: 0", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Fastest timer \342\204\2260", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "AYAYA", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "tuturu", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Sound:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Activate", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Timers), QCoreApplication::translate("MainWindow", "Timers", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Clocks), QCoreApplication::translate("MainWindow", "Alarm Clocks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
