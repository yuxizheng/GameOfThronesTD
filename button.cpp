#include "button.h"
#include <QPixmap>

Button::Button(QString pix):QPushButton(0){
    QPixmap pixmap(pix);
    this->setFixedSize(48,48);
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pixmap);
    this->setIconSize(QSize(pixmap.width(),pixmap.height()));
}
