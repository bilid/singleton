#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    singleton *p=singleton::GetInstance();
    //   ui->comboBox->addItems(p->returnLIST());
}

MainWindow::~MainWindow()
{
    delete ui;
}
