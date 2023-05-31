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


void MainWindow::on_pushButton_executarTriangular_clicked()
{
    if (recursivo.Triangular(ui->lineEdit_inputTriangular->text().toInt()))
        ui->textEdit_output->setText("Eh triangular");
    else
        ui->textEdit_output->setText("nao eh triangular");
}

void MainWindow::on_pushButton_executarPrimo_clicked()
{
    if (recursivo.Primo(ui->lineEdit_inputPrimo->text().toInt()))
        ui->textEdit_output->setText("Eh primo");
    else
        ui->textEdit_output->setText("nao eh primo");
}
