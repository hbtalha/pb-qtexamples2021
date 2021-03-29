#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    setWindowTitle(tr("PB QtDemo 2021-03-28"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

