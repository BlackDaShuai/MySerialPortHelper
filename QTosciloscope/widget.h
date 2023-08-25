#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QSerialPort>
#include <QSerialPortInfo>



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    QSerialPort *Serial = new QSerialPort();

    bool isHexadecimal(const QString &str);
private slots:


    void on_clear_clicked();

    void on_cbPortName_clicked();

    void on_open_clicked();

    void showSerialData();

    void on_send_clicked();

    void on_clearSend_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
