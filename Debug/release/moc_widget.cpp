/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../QTosciloscope/widget.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    const uint offsetsAndSize[34];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 6), // "Widget"
QT_MOC_LITERAL(7, 16), // "on_clear_clicked"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 21), // "on_cbPortName_clicked"
QT_MOC_LITERAL(47, 15), // "on_open_clicked"
QT_MOC_LITERAL(63, 14), // "showSerialData"
QT_MOC_LITERAL(78, 15), // "on_send_clicked"
QT_MOC_LITERAL(94, 20), // "on_clearSend_clicked"
QT_MOC_LITERAL(115, 26), // "on_receiveEdit_textChanged"
QT_MOC_LITERAL(142, 23), // "on_btnDraw_stateChanged"
QT_MOC_LITERAL(166, 4), // "arg1"
QT_MOC_LITERAL(171, 10), // "upDateTime"
QT_MOC_LITERAL(182, 3), // "arg"
QT_MOC_LITERAL(186, 26), // "on_sbFontSize_valueChanged"
QT_MOC_LITERAL(213, 10), // "customInit"
QT_MOC_LITERAL(224, 13), // "customTimeOut"
QT_MOC_LITERAL(238, 19) // "updateXYMinMaxToCus"

    },
    "Widget\0on_clear_clicked\0\0on_cbPortName_clicked\0"
    "on_open_clicked\0showSerialData\0"
    "on_send_clicked\0on_clearSend_clicked\0"
    "on_receiveEdit_textChanged\0"
    "on_btnDraw_stateChanged\0arg1\0upDateTime\0"
    "arg\0on_sbFontSize_valueChanged\0"
    "customInit\0customTimeOut\0updateXYMinMaxToCus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    1,   99,    2, 0x08,    8 /* Private */,
      11,    1,  102,    2, 0x08,   10 /* Private */,
      13,    1,  105,    2, 0x08,   12 /* Private */,
      14,    0,  108,    2, 0x08,   14 /* Private */,
      15,    0,  109,    2, 0x08,   15 /* Private */,
      16,    0,  110,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::QString, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_clear_clicked(); break;
        case 1: _t->on_cbPortName_clicked(); break;
        case 2: _t->on_open_clicked(); break;
        case 3: _t->showSerialData(); break;
        case 4: _t->on_send_clicked(); break;
        case 5: _t->on_clearSend_clicked(); break;
        case 6: _t->on_receiveEdit_textChanged(); break;
        case 7: _t->on_btnDraw_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: { QString _r = _t->upDateTime((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_sbFontSize_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->customInit(); break;
        case 11: _t->customTimeOut(); break;
        case 12: _t->updateXYMinMaxToCus(); break;
        default: ;
        }
    }
}

const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSize,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
