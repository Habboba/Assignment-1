#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include <QPixmap>
#include <QString>
#include "loginwindow.h"
WelcomeWindow::WelcomeWindow(QWidget *parent, QString name, int agee) //constructor
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)

{
    ui->setupUi(this);
    QPixmap pix (":/img/welcome cinema.jpg");  //arg for location
    ui ->label_imagewelcome->setPixmap(pix.scaled(350,200,Qt::KeepAspectRatio)); //pass the label to add the pic, first for width, 2nd height
     QString str = QString :: number ( agee );
    ui-> label_Hellouser->setText("Hello "+ name + " " + str );


}

WelcomeWindow::~WelcomeWindow()
{

    delete ui;
}

void WelcomeWindow::on_pushButton_logout_clicked()
{
    hide();
    LoginWindow *login = new LoginWindow (this);
    login->show();
}

