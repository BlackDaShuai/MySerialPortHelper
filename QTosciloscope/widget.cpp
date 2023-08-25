#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QRegularExpression>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(Serial,&QSerialPort::readyRead,this,&Widget::showSerialData);
}

Widget::~Widget()
{
    delete ui;
}

QRegularExpression hexRegex("[A-Fa-f0-9]{2}");

void Widget::on_clear_clicked()
{
    ui->receiveEdit->clear();
}


bool isHexadecimal(const QString &str) {

    return hexRegex.match(str).hasMatch();
}

/*Todo:
 ********* 将串口的名字写在端口号后面
 */
void Widget::on_cbPortName_clicked()
{
    QString lastPortName = ui->cbPortName->currentText();
//    ui->receiveEdit->appendPlainText(lastName);
    ui->cbPortName->clear();
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        ui->cbPortName->addItem(info.portName());
    }
    if(ui->cbPortName->findText(lastPortName))
    {
        ui->cbPortName->setCurrentText(lastPortName);

    }
    ui->receiveEdit->appendPlainText("检测端口完毕");

}

void Widget::on_open_clicked()
{

   // if(ui->open->text() == QString("打开串口"))//此时串口没打开
    if(Serial->isOpen()!=true)
    {
        //端口、波特率
        Serial->setPortName(ui->cbPortName->currentText());
        Serial->setBaudRate(ui->cbBaudRate->currentText().toInt());

        //停止位
        switch (ui->cbStopBits->currentIndex())
        {
            case 0: Serial->setStopBits(QSerialPort::OneStop);break;
            case 1: Serial->setStopBits((QSerialPort::OneAndHalfStop));break;
            case 2: Serial->setStopBits(QSerialPort::TwoStop);break;
            default:break;
        }
//        if(ui->cbStopBits->currentText().toFloat()== 1.5)
//            Serial->setStopBits((QSerialPort::OneAndHalfStop));
//            ui->receiveEdit->setPlainText(QString::number(Serial->stopBits()));

        //校验位
        switch (ui->cbParity->currentIndex())
        {
            //顺序为无，奇，偶
            case 0: Serial->setParity(QSerialPort::NoParity);break;
            case 1: Serial->setParity(QSerialPort::OddParity);break;
            case 2: Serial->setParity(QSerialPort::EvenParity);break;
            default:break;
        }

        //数据位
        switch (ui->cbParity->currentIndex())
        {
        //顺序为8，7，6,5
            case 0: Serial->setDataBits(QSerialPort::Data8);break;
            case 1: Serial->setDataBits(QSerialPort::Data7);break;
            case 2: Serial->setDataBits(QSerialPort::Data6);break;
            case 3: Serial->setDataBits(QSerialPort::Data5);break;
            default:break;
        }

        Serial->setFlowControl(QSerialPort::NoFlowControl);


        if(Serial->open(QIODevice::ReadWrite)==false)
        {
            QMessageBox::warning(this, "提示", "串口打开失败！", QMessageBox::Ok);
            return;
        }

        //打开成功，失能combobox
        ui->cbBaudRate->setEnabled(false);
        ui->cbDataBits->setEnabled(false);
        ui->cbParity->setEnabled(false);
        ui->cbPortName->setEnabled(false);
        ui->cbStopBits->setEnabled(false);
        //调整串口控制按钮的文字提示
        ui->open->setText(QString("关闭串口"));
        ui->receiveEdit->appendPlainText("串口已连接！");
    }else/* if(ui->open->text() == QString("关闭串口"))*/
    {
        Serial->close();
        ui->cbBaudRate->setEnabled(true);
        ui->cbDataBits->setEnabled(true);
        ui->cbParity->setEnabled(true);
        ui->cbPortName->setEnabled(true);
        ui->cbStopBits->setEnabled(true);
        ui->open->setText(QString("打开串口"));
    }


}

void Widget::showSerialData()
{
    QByteArray data = Serial->readAll();

    if(ui->chk0x16Show->isChecked())
        data = data.toHex();


    ui->receiveEdit->insertPlainText(QString(data));
}

void Widget::on_send_clicked()
{
    //判断是否连接上
    if(Serial->isOpen()!=true)
    {
        QMessageBox::information(this, "提示", "串口未打开！", QMessageBox::Ok);
        return;
    }

    QByteArray sendData = ui->sendEdit->toPlainText().toUtf8();

    int count = sendData.size();

    if(ui->chk0x16Send->isChecked())
    {
        QString strData = ui->sendEdit->toPlainText();
        if(hexRegex.match(strData).hasMatch()){

        }else
        {
            QMessageBox::information(this, "提示", "请输入16进制数",QMessageBox::Ok);
            return;
        }

        sendData = sendData.fromHex(sendData);


    }

    //发送新行
    if(ui->chkNewLine->isChecked())
        sendData.insert(count,"\r\n");


    Serial->write(sendData);

    if(ui->chkClearAfterSend->isChecked())
        ui->sendEdit->clear();

    ui->sendEdit->setFocus();
}


void Widget::on_clearSend_clicked()
{
    ui->sendEdit->clear();
}

