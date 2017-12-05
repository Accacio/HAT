/********************************************************************************
** Form generated from reading UI file 'hat.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAT_H
#define UI_HAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HAT
{
public:
    QWidget *centralWidget;
    QPushButton *Yes;
    QPushButton *No;
    QPushButton *pegatabela;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HAT)
    {
        if (HAT->objectName().isEmpty())
            HAT->setObjectName(QStringLiteral("HAT"));
        HAT->resize(400, 300);
        centralWidget = new QWidget(HAT);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Yes = new QPushButton(centralWidget);
        Yes->setObjectName(QStringLiteral("Yes"));
        Yes->setGeometry(QRect(90, 180, 99, 27));
        No = new QPushButton(centralWidget);
        No->setObjectName(QStringLiteral("No"));
        No->setGeometry(QRect(230, 180, 99, 27));
        pegatabela = new QPushButton(centralWidget);
        pegatabela->setObjectName(QStringLiteral("pegatabela"));
        pegatabela->setGeometry(QRect(230, 10, 151, 41));
        HAT->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HAT);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        HAT->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HAT);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HAT->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HAT);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HAT->setStatusBar(statusBar);

        retranslateUi(HAT);

        QMetaObject::connectSlotsByName(HAT);
    } // setupUi

    void retranslateUi(QMainWindow *HAT)
    {
        HAT->setWindowTitle(QApplication::translate("HAT", "HAT", 0));
        Yes->setText(QApplication::translate("HAT", "Yes", 0));
        No->setText(QApplication::translate("HAT", "No", 0));
        pegatabela->setText(QApplication::translate("HAT", "pegatabela", 0));
    } // retranslateUi

};

namespace Ui {
    class HAT: public Ui_HAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAT_H
