#include "MyChatServer.h"
#include "ui_MyChatServer.h"

MyChatServer::MyChatServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyChatServer)
{
    ui->setupUi(this);
}

MyChatServer::~MyChatServer()
{
    delete ui;
}
