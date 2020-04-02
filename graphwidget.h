#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QPaintEvent>
#include <QtGui>
#include <QWidget>
#include <QVector>
#include <Brainfuck.h>

#define MAIN_WIDTH 1280
#define MAIN_HEIGHT 720

class GraphWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GraphWidget(QWidget *parent = 0);
    void Paint();
    void setDot(int arr[], int size);
signals:
    
public slots:
    
private:
    QImage image;
    int dot[MAX_SIZE];
    int dotSize;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // GRAPHWIDGET_H
