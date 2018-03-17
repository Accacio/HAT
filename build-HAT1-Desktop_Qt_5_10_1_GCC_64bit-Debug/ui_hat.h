/********************************************************************************
** Form generated from reading UI file 'hat.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
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
    QPushButton *pegatabel;
    QPushButton *Starttest;
    QProgressBar *progressBar;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HAT)
    {
        if (HAT->objectName().isEmpty())
            HAT->setObjectName(QStringLiteral("HAT"));
        HAT->resize(300, 300);
        HAT->setMinimumSize(QSize(300, 300));
        HAT->setMaximumSize(QSize(300, 300));
        HAT->setMouseTracking(false);
        HAT->setAutoFillBackground(false);
        centralWidget = new QWidget(HAT);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Yes = new QPushButton(centralWidget);
        Yes->setObjectName(QStringLiteral("Yes"));
        Yes->setGeometry(QRect(80, 110, 61, 51));
        Yes->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/icons/Yes.png"), QSize(), QIcon::Normal, QIcon::Off);
        Yes->setIcon(icon);
        Yes->setIconSize(QSize(50, 50));
        No = new QPushButton(centralWidget);
        No->setObjectName(QStringLiteral("No"));
        No->setGeometry(QRect(150, 110, 61, 51));
        No->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/icons/No.png"), QSize(), QIcon::Normal, QIcon::Off);
        No->setIcon(icon1);
        No->setIconSize(QSize(50, 50));
        pegatabel = new QPushButton(centralWidget);
        pegatabel->setObjectName(QStringLiteral("pegatabel"));
        pegatabel->setGeometry(QRect(70, 30, 151, 41));
        pegatabel->setCursor(QCursor(Qt::ClosedHandCursor));
        Starttest = new QPushButton(centralWidget);
        Starttest->setObjectName(QStringLiteral("Starttest"));
        Starttest->setGeometry(QRect(100, 120, 85, 27));
        Starttest->setCursor(QCursor(Qt::PointingHandCursor));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(90, 170, 118, 23));
        progressBar->setValue(24);
        progressBar->setTextVisible(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 80, 131, 17));
        HAT->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HAT);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 25));
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
        HAT->setWindowTitle(QApplication::translate("HAT", "HAT", nullptr));
#ifndef QT_NO_TOOLTIP
        Yes->setToolTip(QApplication::translate("HAT", "Yes", nullptr));
#endif // QT_NO_TOOLTIP
        Yes->setText(QString());
#ifndef QT_NO_TOOLTIP
        No->setToolTip(QApplication::translate("HAT", "No", nullptr));
#endif // QT_NO_TOOLTIP
        No->setText(QString());
#ifndef QT_NO_TOOLTIP
        pegatabel->setToolTip(QApplication::translate("HAT", "Get data ", nullptr));
#endif // QT_NO_TOOLTIP
        pegatabel->setText(QApplication::translate("HAT", "Get Table", nullptr));
        Starttest->setText(QApplication::translate("HAT", "Star Test", nullptr));
#ifndef QT_NO_TOOLTIP
        progressBar->setToolTip(QApplication::translate("HAT", "Progress", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("HAT", "Have you heard it?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HAT: public Ui_HAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAT_H
