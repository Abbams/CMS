#include "startwindow.h"
#include "ui_startwindow.h"

startWindow::startWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::startWindow)
{
    ui->setupUi(this);
}

startWindow::~startWindow()
{
    delete ui;
}

