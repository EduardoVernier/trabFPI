/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *openButton;
    QPushButton *saveButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *originalGV;
    QGraphicsView *modifiedGV;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *hFlip;
    QPushButton *vFlip;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *grayscaleButton;
    QPushButton *negativeButton;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *nShades;
    QPushButton *quatizeButton;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QSlider *brightnessSlider;
    QLabel *label_5;
    QSlider *contrastSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(968, 627);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 941, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        openButton = new QPushButton(layoutWidget);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout->addWidget(openButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout->addWidget(saveButton);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 40, 761, 381));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        originalGV = new QGraphicsView(layoutWidget1);
        originalGV->setObjectName(QStringLiteral("originalGV"));

        horizontalLayout_2->addWidget(originalGV);

        modifiedGV = new QGraphicsView(layoutWidget1);
        modifiedGV->setObjectName(QStringLiteral("modifiedGV"));

        horizontalLayout_2->addWidget(modifiedGV);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(790, 40, 161, 94));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hFlip = new QPushButton(groupBox);
        hFlip->setObjectName(QStringLiteral("hFlip"));

        verticalLayout_4->addWidget(hFlip);

        vFlip = new QPushButton(groupBox);
        vFlip->setObjectName(QStringLiteral("vFlip"));

        verticalLayout_4->addWidget(vFlip);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(790, 131, 161, 91));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        grayscaleButton = new QPushButton(groupBox_2);
        grayscaleButton->setObjectName(QStringLiteral("grayscaleButton"));

        verticalLayout_5->addWidget(grayscaleButton);

        negativeButton = new QPushButton(groupBox_2);
        negativeButton->setObjectName(QStringLiteral("negativeButton"));

        verticalLayout_5->addWidget(negativeButton);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(790, 219, 161, 61));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        nShades = new QSpinBox(groupBox_3);
        nShades->setObjectName(QStringLiteral("nShades"));
        nShades->setMaximum(255);

        horizontalLayout_4->addWidget(nShades);

        quatizeButton = new QPushButton(groupBox_3);
        quatizeButton->setObjectName(QStringLiteral("quatizeButton"));

        horizontalLayout_4->addWidget(quatizeButton);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(790, 278, 161, 101));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_6->addWidget(label_4);

        brightnessSlider = new QSlider(groupBox_4);
        brightnessSlider->setObjectName(QStringLiteral("brightnessSlider"));
        brightnessSlider->setMinimum(-255);
        brightnessSlider->setMaximum(255);
        brightnessSlider->setTracking(true);
        brightnessSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(brightnessSlider);

        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_6->addWidget(label_5);

        contrastSlider = new QSlider(groupBox_4);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setMinimum(-4);
        contrastSlider->setMaximum(4);
        contrastSlider->setTracking(true);
        contrastSlider->setOrientation(Qt::Horizontal);

        verticalLayout_6->addWidget(contrastSlider);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 968, 20));
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
        lineEdit->setText(QApplication::translate("MainWindow", "/home/eduardo/Pictures/", 0));
        openButton->setText(QApplication::translate("MainWindow", "Open", 0));
        saveButton->setText(QApplication::translate("MainWindow", "Save as", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Flips", 0));
        hFlip->setText(QApplication::translate("MainWindow", "Horizonal Flip", 0));
        vFlip->setText(QApplication::translate("MainWindow", "Vertical Flip", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Convert to", 0));
        grayscaleButton->setText(QApplication::translate("MainWindow", "Grayscale", 0));
        negativeButton->setText(QApplication::translate("MainWindow", "Negative", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Quantize", 0));
        quatizeButton->setText(QApplication::translate("MainWindow", "Go", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Adjustments", 0));
        label_4->setText(QApplication::translate("MainWindow", "Brightness:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Contrast", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H