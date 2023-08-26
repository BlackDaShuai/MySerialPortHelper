#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QFont>
//#include <QTextCharFormat>

QFont font;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置默认波特率
    ui->cbBaudRate->setCurrentText("115200");
    //设置默认分割条位置
    QList<int> sizes;
    sizes << 30000 << 50000;
    ui->splitter->setSizes(sizes);

    //保存当前字体，用于后续临时修改颜色
//    QPalette pletRed;
//    pletRed.setColor(QPalette::Text,Qt::red);
//    QPalette pletBlack;
//    pletBlack.setColor(QPalette::Text,Qt::black);


    //字体的spinbox初始大小
    ui->sbFontSize->setValue(9);

    //串口接收区刷新
    connect(Serial,&QSerialPort::readyRead,this,&Widget::showSerialData);
}



Widget::~Widget()
{
    delete ui;
}

QRegularExpression hexRegex("[A-Fa-f0-9]{2}");




//QTextCharFormat style;
////字体色
//style.setForeground(QBrush(Qt::black));
////fmt.setUnderlineColor("red");

////背景色
//style.setBackground(QBrush(Qt::white));
////字体大小
//style.setFontPointSize(9);

//void oneLineColorful(QString text, QPlainTextEdit* plainTextEdit,int fontSize, QColor fontColor, QColor backColor)
//{
//    QTextCharFormat fmt;
//    //字体色
//    fmt.setForeground(QBrush(fontColor));
//    //fmt.setUnderlineColor("red");

//    //背景色
//    fmt.setBackground(QBrush(backColor));
//    //字体大小
//    fmt.setFontPointSize(fontSize);
//    //文本框使用以上设定
//    plainTextEdit->mergeCurrentCharFormat(fmt);
//    //文本框添加文本
//    plainTextEdit->appendPlainText(text);

//    plainTextEdit->mergeCurrentCharFormat();
//}


//时间获取函数，bool为0时为串口时间戳请求，bool为1时为charts时间轴请求
QString Widget::upDateTime(bool arg)
{
    QTime current_time =QTime::currentTime();
    if(arg)
    {

        return "111111111111";
    }else
    {
        QString timeNow = current_time.toString();
//        QString msNow = QString::number(current_time.msec());此方法会导致位数不统一
        QString msNow = QString("").asprintf("%03d###",current_time.msec());//强制三位数，空位补0
        return "###"+timeNow+" "+msNow;
    }

//    ui->receiveEdit->insertPlainText(current_time.toString());
//    ui->receiveEdit->insertPlainText(current_time.msec());
}


void Widget::on_clear_clicked()
{
    ui->receiveEdit->clear();
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
            QMessageBox::warning(this, "提示", "串口打开失败或已被占用！", QMessageBox::Ok);
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
        ui->lbConnected->setText("当前已连接");
    }else/* if(ui->open->text() == QString("关闭串口"))*/
    {
        ui->receiveEdit->appendPlainText("串口已关闭！");
        ui->lbConnected->setText("当前未连接");
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

    if(ui->chkTimeShow->isChecked())//打印时间戳
    {
        ui->receiveEdit->insertPlainText("\r\n");

        ui->receiveEdit->insertPlainText(upDateTime(0));

        ui->receiveEdit->insertPlainText("\r\n");


    }



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


void Widget::on_receiveEdit_textChanged()
{
    ui->receiveEdit->moveCursor(QTextCursor::End);
}





void Widget::on_btnDraw_stateChanged(int arg1)
{
    //0未选中，2完全选中
    switch(arg1)
    {
    case 0:ui->groupBox_7->setVisible(0);break;
    case 2:ui->groupBox_7->setVisible(1);break;
    default:break;
    }

}




void Widget::on_sbFontSize_valueChanged(int arg1)
{
    //字体
    QFont font;
    font.setPointSize(arg1);
    ui->receiveEdit->setFont(font);
    ui->sendEdit->setFont(font);
}

