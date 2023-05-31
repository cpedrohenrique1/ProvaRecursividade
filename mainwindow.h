#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recursivo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_executarTriangular_clicked();

    void on_pushButton_executarPrimo_clicked();

private:
    Ui::MainWindow *ui;
    Recursivo recursivo;
};
#endif // MAINWINDOW_H
