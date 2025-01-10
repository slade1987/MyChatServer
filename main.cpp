#include "MyChatServer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyChatServer w;
    w.show();
    return a.exec();
}
