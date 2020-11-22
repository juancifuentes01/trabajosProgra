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

}

void MainWindow::on_pushButton_2_clicked()
{

    for(int i=0;i<=1;i++)
    {
      ui->lcdNumber->display(cont1+=1);

    }
}

void MainWindow::on_pushButton_3_clicked()
{
    for(int i=0;i<=2;i++)
    {
      ui->lcdNumber->display(cont1+=1);

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    cont2++;

    ui->lcdNumber_2->display(cont2);


}

void MainWindow::on_pushButton_5_clicked()
{

    for(int i=0;i<=1;i++)
    {
      ui->lcdNumber_2->display(cont2+=1);

    }
}

void MainWindow::on_pushButton_6_clicked()
{
    for(int i=0;i<=2;i++)
    {
      ui->lcdNumber_2->display(cont2+=1);

    }

}

void MainWindow::on_pushButton_7_clicked()
{
    using namespace std;
     if(cont1>cont2)
     {
         ui->label_2->setText("EL EQUIPO 1 ES EL GANADOR");

     }
     if(cont2>cont1)
     {
         ui->label_2->setText("EL EQUIPO 2 ES EL GANADOR");

     }



}
