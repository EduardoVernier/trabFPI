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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QPushButton *hFlip;
    QPushButton *vFlip;
    QPushButton *cwRotateButton;
    QPushButton *ccwRotateButton;
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
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QPushButton *calcHistButton;
    QPushButton *eqHistButton;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *openButton;
    QPushButton *saveButton;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    QPushButton *zInButton;
    QSpacerItem *verticalSpacer;
    QPushButton *zOutButtton;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGraphicsView *originalGV;
    QGraphicsView *modifiedGV;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_9;
    QPushButton *filterButton;
    QCheckBox *fitCheck;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1241, 714);
        MainWindow->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(1060, 32, 161, 151));
        groupBox->setStyleSheet(QStringLiteral("border-color: rgb(0, 0, 0);"));
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

        cwRotateButton = new QPushButton(groupBox);
        cwRotateButton->setObjectName(QStringLiteral("cwRotateButton"));

        verticalLayout_4->addWidget(cwRotateButton);

        ccwRotateButton = new QPushButton(groupBox);
        ccwRotateButton->setObjectName(QStringLiteral("ccwRotateButton"));

        verticalLayout_4->addWidget(ccwRotateButton);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(1060, 175, 161, 90));
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
        groupBox_3->setGeometry(QRect(1060, 263, 161, 60));
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
        groupBox_4->setGeometry(QRect(1060, 322, 161, 100));
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

        groupBox_5 = new QGroupBox(centralWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(1060, 416, 161, 90));
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        calcHistButton = new QPushButton(groupBox_5);
        calcHistButton->setObjectName(QStringLiteral("calcHistButton"));

        verticalLayout_7->addWidget(calcHistButton);

        eqHistButton = new QPushButton(groupBox_5);
        eqHistButton->setObjectName(QStringLiteral("eqHistButton"));

        verticalLayout_7->addWidget(eqHistButton);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(16, 0, 911, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(1070, 0, 168, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        openButton = new QPushButton(layoutWidget);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_3->addWidget(openButton);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_3->addWidget(saveButton);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(1060, 501, 161, 121));
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        zInButton = new QPushButton(groupBox_6);
        zInButton->setObjectName(QStringLiteral("zInButton"));

        verticalLayout_8->addWidget(zInButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        zOutButtton = new QPushButton(groupBox_6);
        zOutButtton->setObjectName(QStringLiteral("zOutButtton"));

        verticalLayout_8->addWidget(zOutButtton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinBox = new QSpinBox(groupBox_6);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        spinBox_2 = new QSpinBox(groupBox_6);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        horizontalLayout->addWidget(spinBox_2);


        verticalLayout_8->addLayout(horizontalLayout);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(18, 25, 1031, 641));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        originalGV = new QGraphicsView(layoutWidget1);
        originalGV->setObjectName(QStringLiteral("originalGV"));

        horizontalLayout_2->addWidget(originalGV);

        modifiedGV = new QGraphicsView(layoutWidget1);
        modifiedGV->setObjectName(QStringLiteral("modifiedGV"));

        horizontalLayout_2->addWidget(modifiedGV);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_7 = new QGroupBox(centralWidget);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(1060, 617, 161, 61));
        verticalLayout_9 = new QVBoxLayout(groupBox_7);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        filterButton = new QPushButton(groupBox_7);
        filterButton->setObjectName(QStringLiteral("filterButton"));

        verticalLayout_9->addWidget(filterButton);

        fitCheck = new QCheckBox(centralWidget);
        fitCheck->setObjectName(QStringLiteral("fitCheck"));
        fitCheck->setGeometry(QRect(935, 3, 121, 16));
        fitCheck->setChecked(true);
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_5->raise();
        lineEdit->raise();
        layoutWidget->raise();
        groupBox_6->raise();
        groupBox_7->raise();
        fitCheck->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1241, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Flips/Rotate", 0));
        hFlip->setText(QApplication::translate("MainWindow", "Horizonal Flip", 0));
        vFlip->setText(QApplication::translate("MainWindow", "Vertical Flip", 0));
        cwRotateButton->setText(QApplication::translate("MainWindow", "Rotate Clockwise", 0));
        ccwRotateButton->setText(QApplication::translate("MainWindow", "Counterclockwise", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Convert to", 0));
        grayscaleButton->setText(QApplication::translate("MainWindow", "Grayscale", 0));
        negativeButton->setText(QApplication::translate("MainWindow", "Negative", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Quantize", 0));
        quatizeButton->setText(QApplication::translate("MainWindow", "Go", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Adjustments", 0));
        label_4->setText(QApplication::translate("MainWindow", "Brightness:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Contrast", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Histogram", 0));
        calcHistButton->setText(QApplication::translate("MainWindow", "Calculate", 0));
        eqHistButton->setText(QApplication::translate("MainWindow", "Equalize", 0));
        lineEdit->setText(QString());
        openButton->setText(QApplication::translate("MainWindow", "Open", 0));
        saveButton->setText(QApplication::translate("MainWindow", "Save as", 0));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Zoom", 0));
        zInButton->setText(QApplication::translate("MainWindow", "Zoom In", 0));
        zOutButtton->setText(QApplication::translate("MainWindow", "Zoom Out", 0));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Filters", 0));
        filterButton->setText(QApplication::translate("MainWindow", "Choose filter", 0));
        fitCheck->setText(QApplication::translate("MainWindow", "Fit into frame", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
