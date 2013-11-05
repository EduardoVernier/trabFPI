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
    QPushButton *laplassianButton;
    QLabel *label;

    void setupUi(QWidget *Filters)
    {
        if (Filters->objectName().isEmpty())
            Filters->setObjectName(QStringLiteral("Filters"));
        Filters->resize(160, 240);
        layoutWidget = new QWidget(Filters);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 141, 54));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gaussianButton = new QPushButton(layoutWidget);
        gaussianButton->setObjectName(QStringLiteral("gaussianButton"));

        verticalLayout->addWidget(gaussianButton);

        laplassianButton = new QPushButton(layoutWidget);
        laplassianButton->setObjectName(QStringLiteral("laplassianButton"));

        verticalLayout->addWidget(laplassianButton);

        label = new QLabel(Filters);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 57, 15));

        retranslateUi(Filters);

        QMetaObject::connectSlotsByName(Filters);
    } // setupUi

    void retranslateUi(QWidget *Filters)
    {
        Filters->setWindowTitle(QApplication::translate("Filters", "Form", 0));
        gaussianButton->setText(QApplication::translate("Filters", "Gaussian", 0));
        laplassianButton->setText(QApplication::translate("Filters", "Laplassian", 0));
        label->setText(QApplication::translate("Filters", "Filters", 0));
    } // retranslateUi

};

namespace Ui {
    class Filters: public Ui_Filters {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERS_H
