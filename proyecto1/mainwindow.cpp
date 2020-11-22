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


void MainWindow::on_prueba_clicked()
{
    cont1++;
    ui->lcdNumber->display(cont1);
}

void MainWindow::on_pushButton_clicked()
{
    cont2++;
    ui->lcdNumber_2->display(cont2);
}


void MainWindow::on_pushButton_2_clicked()
{
   using namespace std;
    if(cont1>cont2)
    {
       ui->label_2->setText("equipo 1 es el ganador");
    }
    if(cont2>cont1)
    {
        ui->label_2->setText("equipo 2 es el ganador");
    }
    if(cont1==cont2)
    {
      ui->label_2->setText("Empate");
    }


}
