#include "graphwidget.h"

GraphWidget::GraphWidget(QWidget *parent) :
    QWidget(parent)
{
    this->resize(MAIN_WIDTH,MAIN_HEIGHT);

    //初始化image对象并填充背景色
    image = QImage(MAIN_WIDTH,MAIN_HEIGHT, QImage::Format_RGB32);
    QColor backColor = qRgb(255,255,255);
    image.fill(backColor);

    //test
    //Paint();

}

void GraphWidget::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawImage(0,0,image);
}

void GraphWidget::Paint(){
    QPainter painter(&image);

    //反锯齿
    painter.setRenderHint(QPainter::Antialiasing, true);

    int delta = 40;
    int pointX = delta;
    int pointY = MAIN_HEIGHT-delta;
    int lenX = MAIN_WIDTH - pointX - delta;
    int lenY = MAIN_HEIGHT - 2*delta;

    //绘制表框以及横纵坐标
    painter.drawLine(pointX,pointY,lenX+pointX,pointY);
    painter.drawLine(pointX,pointY,pointX,pointY-lenY);

    //计算坐标轴间距（此时点数组已经设置）
    double kx = (double)lenX/(dotSize-1);
    int max=0, i;
    for(i=0;i<dotSize;i++){
        if(max < dot[i]){
            max = dot[i];
        }
    }
    double ky = (double)lenY/max;

    QPen pen,penPoint;
    pen.setColor(Qt::black);
    pen.setWidth(2);
    penPoint.setColor(Qt::red);
    penPoint.setWidth(6);

    //绘制点和线
    for(i = 0;i<dotSize-1;i++){
        painter.setPen(pen);
        painter.drawLine(pointX+kx*i,pointY-dot[i]*ky,pointX+kx*(i+1),pointY-dot[i+1]*ky);
        painter.setPen(penPoint);
        painter.drawPoint(pointX+kx*i,pointY-dot[i]*ky);
    }
    painter.drawPoint(pointX+kx*(dotSize-1), pointY-dot[dotSize-1]*ky);

    //绘制刻度线
    QPen penDegree;
    penDegree.setColor(Qt::black);
    penDegree.setWidth(2);
    painter.setPen(penDegree);

    for(int i=0;i<dotSize; i++){
        painter.drawLine(pointX+(i+1)*kx, pointY, pointX+(i+1)*kx, pointY-4);
        painter.drawText(pointX+i*kx, pointY+12, QString::number(i));
    }

    for(int i=0; i<max; i++){
        painter.drawLine(pointX,pointY-(i+1)*lenY/max, pointX-4,pointY-(i+1)*lenY/max);
        painter.drawText(pointX-delta,pointY-i*lenY/max, QString::number(i));
    }
    painter.drawText(pointX-delta, pointY-lenY, QString::number(max));
}

void GraphWidget::setDot(int record[], int size){
    dotSize = size;
    int i;
    for(i=0;i<size;i++){
        dot[i] = record[i];
    }
}
