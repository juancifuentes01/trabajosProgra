#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    cont1++;
    ui->lcdNumber->display(cont1);
    if (cont1==21)
    {
        cont1=0;
        cont2++;
        ui->lcdNumber_3->display(cont2);
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    cont3++;
    ui->lcdNumber_2->display(cont3);
    if (cont3==21)
    {
        cont3=0;
        cont4++;
        ui->lcdNumber_4->display(cont4);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    using namespace std;
     if(cont2==2)
     {
        ui->label->setText("equipo 1 es el ganador");
     }
     if(cont4==2)
     {
        ui->label->setText("equipo 2 es el ganador");
     }



}
