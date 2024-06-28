/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label_imagewelcome;
    QPushButton *pushButton_logout;
    QLabel *label_welcome;
    QLabel *label_Hellouser;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(400, 300);
        label_imagewelcome = new QLabel(WelcomeWindow);
        label_imagewelcome->setObjectName("label_imagewelcome");
        label_imagewelcome->setGeometry(QRect(30, 60, 341, 181));
        pushButton_logout = new QPushButton(WelcomeWindow);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(40, 260, 93, 29));
        label_welcome = new QLabel(WelcomeWindow);
        label_welcome->setObjectName("label_welcome");
        label_welcome->setGeometry(QRect(30, 20, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Edwardian Script ITC")});
        font.setPointSize(23);
        font.setBold(false);
        label_welcome->setFont(font);
        label_welcome->setCursor(QCursor(Qt::ArrowCursor));
        label_Hellouser = new QLabel(WelcomeWindow);
        label_Hellouser->setObjectName("label_Hellouser");
        label_Hellouser->setGeometry(QRect(200, 20, 171, 41));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label_imagewelcome->setText(QString());
        pushButton_logout->setText(QCoreApplication::translate("WelcomeWindow", "Logout", nullptr));
        label_welcome->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#aa557f;\">Welcome...</span></p></body></html>", nullptr));
        label_Hellouser->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
