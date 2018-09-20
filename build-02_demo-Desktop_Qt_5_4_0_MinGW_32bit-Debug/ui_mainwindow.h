/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1000, 650);
        MainWindow->setMinimumSize(QSize(1000, 650));
        MainWindow->setMaximumSize(QSize(1000, 650));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 15, 120, 22));
        comboBox->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(320, 15, 120, 22));
        comboBox_2->setMinimumSize(QSize(0, 22));
        comboBox_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        comboBox_2->setMaxVisibleItems(10);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 11, 81, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 15, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 11, 54, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(780, 15, 75, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(560, 11, 70, 31));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(640, 15, 120, 22));
        comboBox_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\256\213\344\275\223\";"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 23));
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
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\261\207\346\265\267", 0)
         << QApplication::translate("MainWindow", "\350\245\277\344\270\200\351\227\250", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\242\205\351\246\231\345\233\255", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\346\261\240", 0)
         << QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\260\224\350\261\241\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\216\242\346\265\213\346\245\274", 0)
         << QApplication::translate("MainWindow", "\351\207\221\345\267\245\346\245\274", 0)
         << QApplication::translate("MainWindow", "\350\265\204\347\216\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\344\271\222\344\271\223\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\276\275\346\257\233\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\211\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\345\233\233\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\224\260\345\276\204\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\277\220\345\212\250\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\255\246\347\224\237\351\243\237\345\240\202", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\255\246\347\224\237\351\243\237\345\240\202", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\261\207\346\265\267", 0)
         << QApplication::translate("MainWindow", "\350\245\277\344\270\200\351\227\250", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\242\205\351\246\231\345\233\255", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\346\261\240", 0)
         << QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\260\224\350\261\241\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\216\242\346\265\213\346\245\274", 0)
         << QApplication::translate("MainWindow", "\351\207\221\345\267\245\346\245\274", 0)
         << QApplication::translate("MainWindow", "\350\265\204\347\216\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\344\271\222\344\271\223\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\276\275\346\257\233\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\211\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\345\233\233\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\224\260\345\276\204\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\277\220\345\212\250\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\255\246\347\224\237\351\243\237\345\240\202", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\255\246\347\224\237\351\243\237\345\240\202", 0)
        );
        label->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\350\265\267\345\247\213\347\202\271\357\274\232", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("MainWindow", "\347\233\256\347\232\204\345\234\260\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\231\257\347\202\271\346\237\245\350\257\242", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\257\267\351\200\211\346\213\251\346\231\257\347\202\271\357\274\232", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\351\227\250", 0)
         << QApplication::translate("MainWindow", "\346\261\207\346\265\267", 0)
         << QApplication::translate("MainWindow", "\345\233\276\344\271\246\351\246\206", 0)
         << QApplication::translate("MainWindow", "\344\275\223\350\202\262\351\246\206", 0)
         << QApplication::translate("MainWindow", "\346\242\205\351\246\231\345\233\255", 0)
         << QApplication::translate("MainWindow", "\346\270\270\346\263\263\346\261\240", 0)
         << QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\260\224\350\261\241\346\245\274", 0)
         << QApplication::translate("MainWindow", "\346\216\242\346\265\213\346\245\274", 0)
         << QApplication::translate("MainWindow", "\351\207\221\345\267\245\346\245\274", 0)
         << QApplication::translate("MainWindow", "\350\265\204\347\216\257\346\245\274", 0)
         << QApplication::translate("MainWindow", "\344\271\222\344\271\223\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\276\275\346\257\233\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\350\241\214\346\224\277\345\212\236\345\205\254\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\211\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\345\233\233\346\225\231\345\255\246\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\345\256\236\351\252\214\346\245\274", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\224\260\345\276\204\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\350\277\220\345\212\250\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\270\200\347\257\256\347\220\203\345\234\272", 0)
         << QApplication::translate("MainWindow", "\347\254\254\344\272\214\347\257\256\347\220\203\345\234\272", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
