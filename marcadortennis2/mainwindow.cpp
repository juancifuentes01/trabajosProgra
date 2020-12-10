#include "mainwindow.h"
#include "ui_mainwindow.h"

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

    if(cont1<30)
    {
    for (int i=0;i<=1 ;i+=15 )
    {
        ui->lcdNumber->display(cont1+=15);
    }
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    if(cont1>=30){

     for (int i=0;i<=1 ;i+=15 )
       {
        ui->lcdNumber->display(cont1+=10);
       }

    }

    if (cont1==40)
    {
        cont1=0;
        cont2++;
        ui->lcdNumber_2->display(cont2);
    }
    if (cont2==6)
    {
        cont2=0;
        cont3++;
        ui->lcdNumber_3->display(cont3);
    }

}

void MainWindow::on_pushButton_5_clicked()
{
    if(cont4<30)
    {
    for (int i=0;i<=1 ;i+=15 )
    {
        ui->lcdNumber_4->display(cont4+=15);
    }
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    if(cont4>=30){

     for (int i=0;i<=1 ;i+=15 )
       {
        ui->lcdNumber_4->display(cont4+=10);
       }

    }

    if (cont4==40)
    {
        cont4=0;
        cont5++;
        ui->lcdNumber_5->display(cont5);
    }
    if (cont5==6)
    {
        cont5=0;
        cont6++;
        ui->lcdNumber_6->display(cont6);
    }

}
