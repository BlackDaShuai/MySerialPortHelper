#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPlainTextEdit>
#include "qcustomplot.h"
#include <QDateTime>
#include <QTimer>
#include <QFont>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);

    int countTimeOut = 0;
    ~Widget();



public:
    QSerialPort *Serial = new QSerialPort();
//    QFont lastFont;
//    QPalette pletRed;
//    QPalette pletBlack;

//    bool isHexadecimal(const QString &str);已改为正则

//    void oneLineColorful(QString text, QPlainTextEdit* plainTextEdit,int fontSize, QColor fontColor, QColor backColor);
private slots:


    void on_clear_clicked();

    void on_cbPortName_clicked();

    void on_open_clicked();

    void showSerialData();

    void on_send_clicked();

    void on_clearSend_clicked();

    void on_receiveEdit_textChanged();

    void on_btnDraw_stateChanged(int arg1);

    QString upDateTime(bool arg);

    void on_sbFontSize_valueChanged(int arg1);

    void customInit();

    void customTimeOut();

    void updateXYMinMaxToCus();

//    void horzScrollBarChanged(int value);
//    void vertScrollBarChanged(int value);
//    void xAxisChanged(QCPRange range);
//    void yAxisChanged(QCPRange range);

private:
    Ui::Widget *ui;



    int MaxX = 100;
    int MinX = 0;
    int MaxY = 100;
    int MinY = -100;
    QTimer *timeStart = new QTimer();
    //绘图数据更新间隔
    int tIv = 30;
    int *timeInterval = &tIv;
    int yVal = 0;
//testData
};
#endif // WIDGET_H
