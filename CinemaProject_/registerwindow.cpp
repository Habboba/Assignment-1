#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "user.h"
#include <QGroupBox>
#include "welcomewindow.h"
RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->label_Alreadyexistpass->setVisible(false);
    ui->label_Alreadyexistuser->setVisible(false);
    ui->label_Ageerror->setVisible(false);
    ui->label_registererror->setVisible(false);

}

RegisterWindow::~RegisterWindow()
{
    delete ui;
}

void RegisterWindow::on_pushButton_register_clicked()
{
    ui->label_Alreadyexistpass->setVisible(false);
    ui->label_Alreadyexistuser->setVisible(false);
    ui->label_Ageerror->setVisible(false);
    ui->label_registererror->setVisible(false);
    QString username = ui->lineEdit_user->text();
    QString password = ui->lineEdit_pass->text();
    QString repassword = ui->lineEdit_repass->text();
    QString year = ui->lineEdit_year->text();
    int yr = year.toInt();
    int ag = 2024-yr;
    QString day = ui->lineEdit_day->text();
    QString month = ui->comboBox_month-> currentText();
    bool male = ui->radioButton_male->isChecked();
    bool female = ui->radioButton_female->isChecked();
    bool user = ui->radioButton_user->isChecked();
    bool admin = ui->radioButton_admin->isChecked();
    bool action = ui->checkBox_action->isChecked();
    bool drama = ui->checkBox_drama->isChecked();
    bool comedy = ui->checkBox_favcomedy->isChecked();
    bool horror = ui->checkBox_horror->isChecked();
    bool romance = ui->checkBox_romance->isChecked();
    bool other = ui->checkBox_other->isChecked();

     for(int i =0; i<count ; i++){
     if(username == n[i] ){
            ui->label_Alreadyexistuser->setVisible(true);
     }
     }
    if (repassword !=password ){
        ui->label_Alreadyexistpass->setVisible(true);
    }
    if(ag <12){
        ui->label_Ageerror->setVisible(true);
    }
    if (!male &&!female){
        ui->label_registererror-> setVisible(true);
    }
    if (!user &&!admin){
        ui->label_registererror-> setVisible(true);
    }
    if (!action && !drama && !comedy && !horror&& !romance && !other){
        ui->label_registererror-> setVisible(true);
    }
    if (day.isEmpty()|| month .isEmpty()|| year.isEmpty()){
        ui->label_registererror-> setVisible(true);
    }
    if (!ui->label_Alreadyexistpass->isVisible() &&
        !ui->label_Alreadyexistuser->isVisible()&&
        !ui->label_Ageerror->isVisible()&&
        !ui->label_registererror->isVisible()){
     n[count]=username;
     p[count]=password;
     a[count]=ag;
    count++;
    hide();
    WelcomeWindow* welcome = new WelcomeWindow(this, username, ag);
    welcome->show();
    }
}



