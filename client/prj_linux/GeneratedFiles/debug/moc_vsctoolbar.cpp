/****************************************************************************
** Meta object code from reading C++ file 'vsctoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/main/vsctoolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vsctoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCToolBar_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCToolBar_t qt_meta_stringdata_VSCToolBar = {
    {
QT_MOC_LITERAL(0, 0, 10), // "VSCToolBar"
QT_MOC_LITERAL(1, 11, 15), // "showcurrentTime"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "showAlarm"
QT_MOC_LITERAL(4, 38, 8), // "NewAlarm"
QT_MOC_LITERAL(5, 47, 19), // "showProcessingTimer"
QT_MOC_LITERAL(6, 67, 14), // "showProcessing"
QT_MOC_LITERAL(7, 82, 7) // "bEnable"

    },
    "VSCToolBar\0showcurrentTime\0\0showAlarm\0"
    "NewAlarm\0showProcessingTimer\0"
    "showProcessing\0bEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void VSCToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCToolBar *_t = static_cast<VSCToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showcurrentTime(); break;
        case 1: _t->showAlarm(); break;
        case 2: _t->NewAlarm(); break;
        case 3: _t->showProcessingTimer(); break;
        case 4: _t->showProcessing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VSCToolBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCToolBar.data,
      qt_meta_data_VSCToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCToolBar.stringdata0))
        return static_cast<void*>(const_cast< VSCToolBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
