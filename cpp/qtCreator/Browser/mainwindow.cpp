#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWebEngineWidgets/QWebEngineView>
#include <QDebug>
#include <QVarLengthArray>

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

void MainWindow::on_commandBar_returnPressed()
{
//    ui->web->load(QUrl().fromUserInput(ui->commandBar->text()));

}
