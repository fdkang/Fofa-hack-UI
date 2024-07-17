#include "mylineedit.h"

myLineEdit::myLineEdit(QWidget *parent)
    : QLineEdit(parent)
{
}

void myLineEdit::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return){
        emit Run();
    }
    QLineEdit::keyReleaseEvent(event);
}
