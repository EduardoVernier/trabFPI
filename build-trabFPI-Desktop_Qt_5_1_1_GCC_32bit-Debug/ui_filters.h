/********************************************************************************
** Form generated from reading UI file 'filters.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERS_H
#define UI_FILTERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Filters
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *gaussianButton;
    QPushButton *LaplacianButton;
    QPushButton *hPButton;
    QPushButton *pHxButton;
    QPushButton *pHyHxButton;
    QPushButton *SobelHxButton;
    QPushButton *SobelHyButton;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QDoubleSpinBox *doubleSpinBox_7;
    QDoubleSpinBox *doubleSpinBox_8;
    QDoubleSpinBox *doubleSpinBox_9;
    QPushButton *pushButton;
    QCheckBox *embossCB;

    void setupUi(QWidget *Filters)
    {
        if (Filters->objectName().isEmpty())
            Filters->setObjectName(QStringLiteral("Filters"));
        Filters->resize(193, 378);
        layoutWidget = new QWidget(Filters);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(26, 26, 151, 199));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gaussianButton = new QPushButton(layoutWidget);
        gaussianButton->setObjectName(QStringLiteral("gaussianButton"));

        verticalLayout->addWidget(gaussianButton);

        LaplacianButton = new QPushButton(layoutWidget);
        LaplacianButton->setObjectName(QStringLiteral("LaplacianButton"));

        verticalLayout->addWidget(LaplacianButton);

        hPButton = new QPushButton(layoutWidget);
        hPButton->setObjectName(QStringLiteral("hPButton"));

        verticalLayout->addWidget(hPButton);

        pHxButton = new QPushButton(layoutWidget);
        pHxButton->setObjectName(QStringLiteral("pHxButton"));

        verticalLayout->addWidget(pHxButton);

        pHyHxButton = new QPushButton(layoutWidget);
        pHyHxButton->setObjectName(QStringLiteral("pHyHxButton"));

        verticalLayout->addWidget(pHyHxButton);

        SobelHxButton = new QPushButton(layoutWidget);
        SobelHxButton->setObjectName(QStringLiteral("SobelHxButton"));

        verticalLayout->addWidget(SobelHxButton);

        SobelHyButton = new QPushButton(layoutWidget);
        SobelHyButton->setObjectName(QStringLiteral("SobelHyButton"));

        verticalLayout->addWidget(SobelHyButton);

        label = new QLabel(Filters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 57, 15));
        label_2 = new QLabel(Filters);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 230, 57, 15));
        doubleSpinBox = new QDoubleSpinBox(Filters);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(10, 250, 61, 24));
        doubleSpinBox->setMinimum(-255);
        doubleSpinBox->setMaximum(255);
        doubleSpinBox->setSingleStep(0.2);
        doubleSpinBox_2 = new QDoubleSpinBox(Filters);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(70, 250, 61, 24));
        doubleSpinBox_2->setMinimum(-255);
        doubleSpinBox_2->setMaximum(255);
        doubleSpinBox_2->setSingleStep(0.2);
        doubleSpinBox_3 = new QDoubleSpinBox(Filters);
        doubleSpinBox_3->setObjectName(QStringLiteral("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(130, 250, 61, 24));
        doubleSpinBox_3->setMinimum(-255);
        doubleSpinBox_3->setMaximum(255);
        doubleSpinBox_3->setSingleStep(0.2);
        doubleSpinBox_4 = new QDoubleSpinBox(Filters);
        doubleSpinBox_4->setObjectName(QStringLiteral("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(10, 280, 61, 24));
        doubleSpinBox_4->setMinimum(-255);
        doubleSpinBox_4->setMaximum(255);
        doubleSpinBox_4->setSingleStep(0.2);
        doubleSpinBox_5 = new QDoubleSpinBox(Filters);
        doubleSpinBox_5->setObjectName(QStringLiteral("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(70, 280, 61, 24));
        doubleSpinBox_5->setMinimum(-255);
        doubleSpinBox_5->setMaximum(255);
        doubleSpinBox_5->setSingleStep(0.2);
        doubleSpinBox_6 = new QDoubleSpinBox(Filters);
        doubleSpinBox_6->setObjectName(QStringLiteral("doubleSpinBox_6"));
        doubleSpinBox_6->setGeometry(QRect(130, 280, 61, 24));
        doubleSpinBox_6->setMinimum(-255);
        doubleSpinBox_6->setMaximum(255);
        doubleSpinBox_6->setSingleStep(0.2);
        doubleSpinBox_7 = new QDoubleSpinBox(Filters);
        doubleSpinBox_7->setObjectName(QStringLiteral("doubleSpinBox_7"));
        doubleSpinBox_7->setGeometry(QRect(10, 310, 61, 24));
        doubleSpinBox_7->setMinimum(-255);
        doubleSpinBox_7->setMaximum(255);
        doubleSpinBox_7->setSingleStep(0.2);
        doubleSpinBox_8 = new QDoubleSpinBox(Filters);
        doubleSpinBox_8->setObjectName(QStringLiteral("doubleSpinBox_8"));
        doubleSpinBox_8->setGeometry(QRect(70, 310, 61, 24));
        doubleSpinBox_8->setMinimum(-255);
        doubleSpinBox_8->setMaximum(255);
        doubleSpinBox_8->setSingleStep(0.2);
        doubleSpinBox_9 = new QDoubleSpinBox(Filters);
        doubleSpinBox_9->setObjectName(QStringLiteral("doubleSpinBox_9"));
        doubleSpinBox_9->setGeometry(QRect(130, 310, 61, 24));
        doubleSpinBox_9->setMinimum(-255);
        doubleSpinBox_9->setMaximum(255);
        doubleSpinBox_9->setSingleStep(0.2);
        pushButton = new QPushButton(Filters);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(116, 340, 71, 23));
        embossCB = new QCheckBox(Filters);
        embossCB->setObjectName(QStringLiteral("embossCB"));
        embossCB->setGeometry(QRect(10, 340, 85, 21));
        embossCB->setCheckable(false);

        retranslateUi(Filters);

        QMetaObject::connectSlotsByName(Filters);
    } // setupUi

    void retranslateUi(QWidget *Filters)
    {
        Filters->setWindowTitle(QApplication::translate("Filters", "Form", 0));
        gaussianButton->setText(QApplication::translate("Filters", "Gaussian", 0));
        LaplacianButton->setText(QApplication::translate("Filters", "Laplacian", 0));
        hPButton->setText(QApplication::translate("Filters", "High-pass Filter", 0));
        pHxButton->setText(QApplication::translate("Filters", "Prewitt Hx", 0));
        pHyHxButton->setText(QApplication::translate("Filters", "Prewitt Hy Hx", 0));
        SobelHxButton->setText(QApplication::translate("Filters", "Sobel Hx", 0));
        SobelHyButton->setText(QApplication::translate("Filters", "Sobel Hy", 0));
        label->setText(QApplication::translate("Filters", "Filters", 0));
        label_2->setText(QApplication::translate("Filters", "Custom", 0));
        pushButton->setText(QApplication::translate("Filters", "Apply", 0));
        embossCB->setText(QApplication::translate("Filters", "Emboss", 0));
    } // retranslateUi

};

namespace Ui {
    class Filters: public Ui_Filters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERS_H
