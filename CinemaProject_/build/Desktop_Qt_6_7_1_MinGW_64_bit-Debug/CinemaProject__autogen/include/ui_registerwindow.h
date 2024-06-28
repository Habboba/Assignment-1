/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label_repassword;
    QLabel *label_pass;
    QLabel *label_user;
    QLineEdit *lineEdit_user;
    QLineEdit *lineEdit_pass;
    QLineEdit *lineEdit_repass;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLabel *label_year;
    QComboBox *comboBox_month;
    QLineEdit *lineEdit_day;
    QLineEdit *lineEdit_year;
    QLabel *label_day;
    QLabel *label_month;
    QGroupBox *groupBox_gender;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QGroupBox *groupBox_accounttype;
    QRadioButton *radioButton_user;
    QRadioButton *radioButton_admin;
    QGroupBox *groupBox_fav;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_action;
    QCheckBox *checkBox_favcomedy;
    QCheckBox *checkBox_romance;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_drama;
    QCheckBox *checkBox_horror;
    QCheckBox *checkBox_other;
    QPushButton *pushButton_register;
    QLabel *label_Alreadyexistuser;
    QLabel *label_Alreadyexistpass;
    QLabel *label_Ageerror;
    QLabel *label_registererror;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(586, 570);
        QFont font;
        font.setFamilies({QString::fromUtf8("Gabriola")});
        font.setPointSize(11);
        font.setWeight(QFont::Thin);
        RegisterWindow->setFont(font);
        gridLayoutWidget = new QWidget(RegisterWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(19, 19, 321, 121));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_repassword = new QLabel(gridLayoutWidget);
        label_repassword->setObjectName("label_repassword");

        gridLayout_2->addWidget(label_repassword, 2, 0, 1, 1);

        label_pass = new QLabel(gridLayoutWidget);
        label_pass->setObjectName("label_pass");

        gridLayout_2->addWidget(label_pass, 1, 0, 1, 1);

        label_user = new QLabel(gridLayoutWidget);
        label_user->setObjectName("label_user");

        gridLayout_2->addWidget(label_user, 0, 0, 1, 1);

        lineEdit_user = new QLineEdit(gridLayoutWidget);
        lineEdit_user->setObjectName("lineEdit_user");

        gridLayout_2->addWidget(lineEdit_user, 0, 1, 1, 1);

        lineEdit_pass = new QLineEdit(gridLayoutWidget);
        lineEdit_pass->setObjectName("lineEdit_pass");
        lineEdit_pass->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_pass, 1, 1, 1, 1);

        lineEdit_repass = new QLineEdit(gridLayoutWidget);
        lineEdit_repass->setObjectName("lineEdit_repass");
        lineEdit_repass->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_repass, 2, 1, 1, 1);

        groupBox = new QGroupBox(RegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 150, 351, 101));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(0, 20, 399, 82));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_year = new QLabel(gridLayoutWidget_2);
        label_year->setObjectName("label_year");

        gridLayout->addWidget(label_year, 0, 2, 1, 1);

        comboBox_month = new QComboBox(gridLayoutWidget_2);
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->addItem(QString());
        comboBox_month->setObjectName("comboBox_month");

        gridLayout->addWidget(comboBox_month, 3, 0, 1, 1);

        lineEdit_day = new QLineEdit(gridLayoutWidget_2);
        lineEdit_day->setObjectName("lineEdit_day");

        gridLayout->addWidget(lineEdit_day, 3, 1, 1, 1);

        lineEdit_year = new QLineEdit(gridLayoutWidget_2);
        lineEdit_year->setObjectName("lineEdit_year");

        gridLayout->addWidget(lineEdit_year, 3, 2, 1, 1);

        label_day = new QLabel(gridLayoutWidget_2);
        label_day->setObjectName("label_day");

        gridLayout->addWidget(label_day, 0, 1, 1, 1);

        label_month = new QLabel(gridLayoutWidget_2);
        label_month->setObjectName("label_month");

        gridLayout->addWidget(label_month, 0, 0, 1, 1);

        groupBox_gender = new QGroupBox(RegisterWindow);
        groupBox_gender->setObjectName("groupBox_gender");
        groupBox_gender->setGeometry(QRect(10, 260, 120, 80));
        radioButton_male = new QRadioButton(groupBox_gender);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(10, 20, 110, 24));
        radioButton_female = new QRadioButton(groupBox_gender);
        radioButton_female->setObjectName("radioButton_female");
        radioButton_female->setGeometry(QRect(10, 50, 110, 24));
        groupBox_accounttype = new QGroupBox(RegisterWindow);
        groupBox_accounttype->setObjectName("groupBox_accounttype");
        groupBox_accounttype->setGeometry(QRect(250, 260, 120, 80));
        radioButton_user = new QRadioButton(groupBox_accounttype);
        radioButton_user->setObjectName("radioButton_user");
        radioButton_user->setGeometry(QRect(10, 20, 110, 24));
        radioButton_admin = new QRadioButton(groupBox_accounttype);
        radioButton_admin->setObjectName("radioButton_admin");
        radioButton_admin->setGeometry(QRect(10, 50, 110, 24));
        groupBox_fav = new QGroupBox(RegisterWindow);
        groupBox_fav->setObjectName("groupBox_fav");
        groupBox_fav->setGeometry(QRect(10, 360, 261, 161));
        layoutWidget = new QWidget(groupBox_fav);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 241, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        checkBox_action = new QCheckBox(layoutWidget);
        checkBox_action->setObjectName("checkBox_action");

        verticalLayout_2->addWidget(checkBox_action);

        checkBox_favcomedy = new QCheckBox(layoutWidget);
        checkBox_favcomedy->setObjectName("checkBox_favcomedy");

        verticalLayout_2->addWidget(checkBox_favcomedy);

        checkBox_romance = new QCheckBox(layoutWidget);
        checkBox_romance->setObjectName("checkBox_romance");

        verticalLayout_2->addWidget(checkBox_romance);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox_drama = new QCheckBox(layoutWidget);
        checkBox_drama->setObjectName("checkBox_drama");

        verticalLayout->addWidget(checkBox_drama);

        checkBox_horror = new QCheckBox(layoutWidget);
        checkBox_horror->setObjectName("checkBox_horror");

        verticalLayout->addWidget(checkBox_horror);

        checkBox_other = new QCheckBox(layoutWidget);
        checkBox_other->setObjectName("checkBox_other");

        verticalLayout->addWidget(checkBox_other);


        horizontalLayout->addLayout(verticalLayout);

        pushButton_register = new QPushButton(RegisterWindow);
        pushButton_register->setObjectName("pushButton_register");
        pushButton_register->setGeometry(QRect(20, 530, 93, 29));
        label_Alreadyexistuser = new QLabel(RegisterWindow);
        label_Alreadyexistuser->setObjectName("label_Alreadyexistuser");
        label_Alreadyexistuser->setGeometry(QRect(380, 30, 121, 20));
        label_Alreadyexistuser->setFont(font);
        label_Alreadyexistpass = new QLabel(RegisterWindow);
        label_Alreadyexistpass->setObjectName("label_Alreadyexistpass");
        label_Alreadyexistpass->setGeometry(QRect(380, 90, 121, 20));
        label_Ageerror = new QLabel(RegisterWindow);
        label_Ageerror->setObjectName("label_Ageerror");
        label_Ageerror->setGeometry(QRect(380, 190, 201, 20));
        label_registererror = new QLabel(RegisterWindow);
        label_registererror->setObjectName("label_registererror");
        label_registererror->setGeometry(QRect(250, 530, 211, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label_repassword->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        label_pass->setText(QCoreApplication::translate("RegisterWindow", "Password", nullptr));
        label_user->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Date of Birth", nullptr));
        label_year->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        comboBox_month->setItemText(0, QString());
        comboBox_month->setItemText(1, QCoreApplication::translate("RegisterWindow", "January", nullptr));
        comboBox_month->setItemText(2, QCoreApplication::translate("RegisterWindow", "February", nullptr));
        comboBox_month->setItemText(3, QCoreApplication::translate("RegisterWindow", "March", nullptr));
        comboBox_month->setItemText(4, QCoreApplication::translate("RegisterWindow", "April", nullptr));
        comboBox_month->setItemText(5, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBox_month->setItemText(6, QCoreApplication::translate("RegisterWindow", "June", nullptr));
        comboBox_month->setItemText(7, QCoreApplication::translate("RegisterWindow", "July", nullptr));
        comboBox_month->setItemText(8, QCoreApplication::translate("RegisterWindow", "August", nullptr));
        comboBox_month->setItemText(9, QCoreApplication::translate("RegisterWindow", "September", nullptr));
        comboBox_month->setItemText(10, QCoreApplication::translate("RegisterWindow", "October", nullptr));
        comboBox_month->setItemText(11, QCoreApplication::translate("RegisterWindow", "November", nullptr));
        comboBox_month->setItemText(12, QCoreApplication::translate("RegisterWindow", "December", nullptr));
        comboBox_month->setItemText(13, QString());

        label_day->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_month->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        groupBox_gender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButton_male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        radioButton_female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        groupBox_accounttype->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type", nullptr));
        radioButton_user->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButton_admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_fav->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBox_action->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        checkBox_favcomedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_horror->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        checkBox_other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        pushButton_register->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        label_Alreadyexistuser->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0051;\">* Already Existing</span></p></body></html>", nullptr));
        label_Alreadyexistpass->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0051;\">* Not Matching</span></p></body></html>", nullptr));
        label_Ageerror->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0051;\">* Age is less than 12</span></p></body></html>", nullptr));
        label_registererror->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" font-weight:700; color:#ff0051;\">* All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
