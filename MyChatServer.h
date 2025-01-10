#ifndef MYCHATSERVER_H
#define MYCHATSERVER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MyChatServer;
}
QT_END_NAMESPACE

class MyChatServer : public QMainWindow
{
    Q_OBJECT

public:
    MyChatServer(QWidget *parent = nullptr);
    ~MyChatServer();

private:
    Ui::MyChatServer *ui;
};
#endif // MYCHATSERVER_H
