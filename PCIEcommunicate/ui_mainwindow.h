/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *read;
    QTextEdit *Numread;
    QPushButton *write;
    QTextEdit *Numwrite;
    QTextEdit *Addwrite;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *Addread;
    QLabel *label_4;
    QTextEdit *AddDMAwrite;
    QTextEdit *NumDMAwrite;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *DMAwrite;
    QTextEdit *AddDMAread;
    QPushButton *DMAread;
    QTextEdit *NumDMAread;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *CountTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(416, 627);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 75, 23));
        read = new QPushButton(centralWidget);
        read->setObjectName(QStringLiteral("read"));
        read->setGeometry(QRect(30, 80, 75, 23));
        Numread = new QTextEdit(centralWidget);
        Numread->setObjectName(QStringLiteral("Numread"));
        Numread->setGeometry(QRect(140, 80, 201, 31));
        write = new QPushButton(centralWidget);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(30, 200, 75, 23));
        Numwrite = new QTextEdit(centralWidget);
        Numwrite->setObjectName(QStringLiteral("Numwrite"));
        Numwrite->setGeometry(QRect(140, 210, 201, 31));
        Addwrite = new QTextEdit(centralWidget);
        Addwrite->setObjectName(QStringLiteral("Addwrite"));
        Addwrite->setGeometry(QRect(140, 270, 201, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 190, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 60, 54, 12));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 250, 54, 12));
        Addread = new QTextEdit(centralWidget);
        Addread->setObjectName(QStringLiteral("Addread"));
        Addread->setGeometry(QRect(140, 140, 201, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 120, 54, 12));
        AddDMAwrite = new QTextEdit(centralWidget);
        AddDMAwrite->setObjectName(QStringLiteral("AddDMAwrite"));
        AddDMAwrite->setEnabled(false);
        AddDMAwrite->setGeometry(QRect(140, 390, 201, 31));
        NumDMAwrite = new QTextEdit(centralWidget);
        NumDMAwrite->setObjectName(QStringLiteral("NumDMAwrite"));
        NumDMAwrite->setEnabled(false);
        NumDMAwrite->setGeometry(QRect(140, 330, 201, 31));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 310, 54, 12));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 370, 54, 12));
        DMAwrite = new QPushButton(centralWidget);
        DMAwrite->setObjectName(QStringLiteral("DMAwrite"));
        DMAwrite->setEnabled(false);
        DMAwrite->setGeometry(QRect(30, 330, 75, 23));
        AddDMAread = new QTextEdit(centralWidget);
        AddDMAread->setObjectName(QStringLiteral("AddDMAread"));
        AddDMAread->setEnabled(true);
        AddDMAread->setGeometry(QRect(140, 460, 131, 31));
        DMAread = new QPushButton(centralWidget);
        DMAread->setObjectName(QStringLiteral("DMAread"));
        DMAread->setEnabled(true);
        DMAread->setGeometry(QRect(30, 460, 75, 23));
        NumDMAread = new QTextEdit(centralWidget);
        NumDMAread->setObjectName(QStringLiteral("NumDMAread"));
        NumDMAread->setEnabled(false);
        NumDMAread->setGeometry(QRect(140, 520, 201, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 500, 54, 12));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 440, 54, 12));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(280, 440, 54, 12));
        CountTextEdit = new QTextEdit(centralWidget);
        CountTextEdit->setObjectName(QStringLiteral("CountTextEdit"));
        CountTextEdit->setEnabled(true);
        CountTextEdit->setGeometry(QRect(280, 460, 61, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 416, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "connect", 0));
        read->setText(QApplication::translate("MainWindow", "read", 0));
        write->setText(QApplication::translate("MainWindow", "write", 0));
        label->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\346\225\260\345\255\227", 0));
        label_2->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\225\260\345\255\227", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\345\234\260\345\235\200", 0));
        label_4->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\345\234\260\345\235\200", 0));
        label_5->setText(QApplication::translate("MainWindow", "DMA\345\206\231\346\225\260\346\215\256", 0));
        label_6->setText(QApplication::translate("MainWindow", "DMA\345\206\231\345\234\260\345\235\200", 0));
        DMAwrite->setText(QApplication::translate("MainWindow", "DMAwrite", 0));
        DMAread->setText(QApplication::translate("MainWindow", "DMAread", 0));
        label_7->setText(QApplication::translate("MainWindow", "DMA\350\257\273\346\225\260\346\215\256", 0));
        label_8->setText(QApplication::translate("MainWindow", "DMA\350\257\273\345\234\260\345\235\200", 0));
        label_9->setText(QApplication::translate("MainWindow", "Count", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
