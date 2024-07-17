#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/style/resource/style/style.qss");
    if(file.open(QFile::ReadOnly)){
        a.setStyleSheet(file.readAll());
    }
    Widget w;
    w.show();
    return a.exec();
}
