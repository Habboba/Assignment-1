#include "loginwindow.h"
#include "./ui_loginwindow.h"
# include "welcomewindow.h"
#include "registerwindow.h"
#include "user.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_login_clicked()
{
    QString user = ui-> lineEdit_username -> text();
    QString pass = ui-> lineEdit_password -> text();
    for(int i=0; i<count; i++){
    if(user != n[i] && pass != p[i])
    {
        ui->label_error->setVisible(true);
    }
    else{
        hide();
        WelcomeWindow* welcome = new WelcomeWindow(this, user, a[i]);
        welcome-> show();

    }
   }

}


void LoginWindow::on_pushButton_register_clicked()
{
        hide();
        RegisterWindow* regis = new RegisterWindow(this);
        regis->show();
}

