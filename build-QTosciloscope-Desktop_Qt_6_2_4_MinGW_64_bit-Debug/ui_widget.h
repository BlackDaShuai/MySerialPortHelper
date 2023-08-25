/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mycombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *receiveEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPlainTextEdit *sendEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    MyComboBox *cbPortName;
    QLabel *label_2;
    QComboBox *cbBaudRate;
    QLabel *label_3;
    QComboBox *cbStopBits;
    QLabel *label_4;
    QComboBox *cbDataBits;
    QLabel *label_5;
    QComboBox *cbParity;
    QPushButton *open;
    QPushButton *clear;
    QCheckBox *chk0x16Show;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QPushButton *send;
    QPushButton *clearSend;
    QCheckBox *chkClearAfterSend;
    QCheckBox *chk0x16Send;
    QCheckBox *chkNewLine;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(651, 542);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/recf/buz.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        receiveEdit = new QPlainTextEdit(groupBox_2);
        receiveEdit->setObjectName(QString::fromUtf8("receiveEdit"));
        receiveEdit->setReadOnly(true);
        receiveEdit->setMaximumBlockCount(100000);

        gridLayout_2->addWidget(receiveEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        sendEdit = new QPlainTextEdit(groupBox_3);
        sendEdit->setObjectName(QString::fromUtf8("sendEdit"));

        gridLayout->addWidget(sendEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 1);

        horizontalLayout->addLayout(verticalLayout);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        cbPortName = new MyComboBox(groupBox);
        cbPortName->addItem(QString());
        cbPortName->setObjectName(QString::fromUtf8("cbPortName"));

        gridLayout_3->addWidget(cbPortName, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        cbBaudRate = new QComboBox(groupBox);
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->setObjectName(QString::fromUtf8("cbBaudRate"));

        gridLayout_3->addWidget(cbBaudRate, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        cbStopBits = new QComboBox(groupBox);
        cbStopBits->addItem(QString());
        cbStopBits->addItem(QString());
        cbStopBits->addItem(QString());
        cbStopBits->setObjectName(QString::fromUtf8("cbStopBits"));

        gridLayout_3->addWidget(cbStopBits, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 3, 0, 1, 1);

        cbDataBits = new QComboBox(groupBox);
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->addItem(QString());
        cbDataBits->setObjectName(QString::fromUtf8("cbDataBits"));

        gridLayout_3->addWidget(cbDataBits, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 4, 0, 1, 1);

        cbParity = new QComboBox(groupBox);
        cbParity->addItem(QString());
        cbParity->addItem(QString());
        cbParity->addItem(QString());
        cbParity->setObjectName(QString::fromUtf8("cbParity"));

        gridLayout_3->addWidget(cbParity, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        open = new QPushButton(groupBox);
        open->setObjectName(QString::fromUtf8("open"));

        verticalLayout_2->addWidget(open);

        clear = new QPushButton(groupBox);
        clear->setObjectName(QString::fromUtf8("clear"));

        verticalLayout_2->addWidget(clear);

        chk0x16Show = new QCheckBox(groupBox);
        chk0x16Show->setObjectName(QString::fromUtf8("chk0x16Show"));

        verticalLayout_2->addWidget(chk0x16Show);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        send = new QPushButton(groupBox);
        send->setObjectName(QString::fromUtf8("send"));

        verticalLayout_3->addWidget(send);

        clearSend = new QPushButton(groupBox);
        clearSend->setObjectName(QString::fromUtf8("clearSend"));

        verticalLayout_3->addWidget(clearSend);

        chkClearAfterSend = new QCheckBox(groupBox);
        chkClearAfterSend->setObjectName(QString::fromUtf8("chkClearAfterSend"));

        verticalLayout_3->addWidget(chkClearAfterSend);

        chk0x16Send = new QCheckBox(groupBox);
        chk0x16Send->setObjectName(QString::fromUtf8("chk0x16Send"));

        verticalLayout_3->addWidget(chk0x16Send);

        chkNewLine = new QCheckBox(groupBox);
        chkNewLine->setObjectName(QString::fromUtf8("chkNewLine"));
        chkNewLine->setChecked(true);

        verticalLayout_3->addWidget(chkNewLine);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 1);

        horizontalLayout->addWidget(groupBox);

        QWidget::setTabOrder(sendEdit, receiveEdit);
        QWidget::setTabOrder(receiveEdit, cbPortName);
        QWidget::setTabOrder(cbPortName, cbBaudRate);
        QWidget::setTabOrder(cbBaudRate, cbStopBits);
        QWidget::setTabOrder(cbStopBits, cbDataBits);
        QWidget::setTabOrder(cbDataBits, cbParity);
        QWidget::setTabOrder(cbParity, open);
        QWidget::setTabOrder(open, chk0x16Show);
        QWidget::setTabOrder(chk0x16Show, send);
        QWidget::setTabOrder(send, clear);
        QWidget::setTabOrder(clear, clearSend);
        QWidget::setTabOrder(clearSend, chkClearAfterSend);
        QWidget::setTabOrder(chkClearAfterSend, chk0x16Send);
        QWidget::setTabOrder(chk0x16Send, chkNewLine);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\216\245\346\224\266\345\214\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\345\214\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243", nullptr));
        cbPortName->setItemText(0, QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251", nullptr));

        cbPortName->setCurrentText(QCoreApplication::translate("Widget", "\350\257\267\351\200\211\346\213\251", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        cbBaudRate->setItemText(0, QCoreApplication::translate("Widget", "1200", nullptr));
        cbBaudRate->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        cbBaudRate->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        cbBaudRate->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        cbBaudRate->setItemText(4, QCoreApplication::translate("Widget", "14400", nullptr));
        cbBaudRate->setItemText(5, QCoreApplication::translate("Widget", "19200", nullptr));
        cbBaudRate->setItemText(6, QCoreApplication::translate("Widget", "38400", nullptr));
        cbBaudRate->setItemText(7, QCoreApplication::translate("Widget", "57600", nullptr));
        cbBaudRate->setItemText(8, QCoreApplication::translate("Widget", "115200", nullptr));

        cbBaudRate->setCurrentText(QCoreApplication::translate("Widget", "115200", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\344\275\215", nullptr));
        cbStopBits->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        cbStopBits->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        cbStopBits->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\344\275\215", nullptr));
        cbDataBits->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        cbDataBits->setItemText(1, QCoreApplication::translate("Widget", "7", nullptr));
        cbDataBits->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        cbDataBits->setItemText(3, QCoreApplication::translate("Widget", "5", nullptr));

        cbDataBits->setCurrentText(QCoreApplication::translate("Widget", "8", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        cbParity->setItemText(0, QCoreApplication::translate("Widget", "\346\227\240", nullptr));
        cbParity->setItemText(1, QCoreApplication::translate("Widget", "\345\245\207", nullptr));
        cbParity->setItemText(2, QCoreApplication::translate("Widget", "\345\201\266", nullptr));

        cbParity->setCurrentText(QCoreApplication::translate("Widget", "\346\227\240", nullptr));
        open->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        chk0x16Show->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        clearSend->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        chkClearAfterSend->setText(QCoreApplication::translate("Widget", "\346\257\217\346\254\241\345\217\221\345\256\214\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        chk0x16Send->setText(QCoreApplication::translate("Widget", "16\350\277\233\345\210\266\345\217\221\351\200\201", nullptr));
        chkNewLine->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
