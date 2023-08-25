#include "mycombobox.h"

MyComboBox::MyComboBox(QWidget *parent)
    : QComboBox{parent}
{

}

MyComboBox::~MyComboBox()
{

}

void MyComboBox::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit clicked(true);
    }
    QComboBox::mousePressEvent(event);
}

//void MyComboBox::mousePressEvent
