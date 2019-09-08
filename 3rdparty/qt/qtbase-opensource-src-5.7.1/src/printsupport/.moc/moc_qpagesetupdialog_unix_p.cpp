/****************************************************************************
** Meta object code from reading C++ file 'qpagesetupdialog_unix_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogs/qpagesetupdialog_unix_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpagesetupdialog_unix_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPageSetupWidget_t {
    QByteArrayData data[11];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPageSetupWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPageSetupWidget_t qt_meta_stringdata_QPageSetupWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QPageSetupWidget"
QT_MOC_LITERAL(1, 17, 15), // "pageSizeChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "pageOrientationChanged"
QT_MOC_LITERAL(4, 57, 20), // "pagesPerSheetChanged"
QT_MOC_LITERAL(5, 78, 11), // "unitChanged"
QT_MOC_LITERAL(6, 90, 16), // "topMarginChanged"
QT_MOC_LITERAL(7, 107, 8), // "newValue"
QT_MOC_LITERAL(8, 116, 19), // "bottomMarginChanged"
QT_MOC_LITERAL(9, 136, 17), // "leftMarginChanged"
QT_MOC_LITERAL(10, 154, 18) // "rightMarginChanged"

    },
    "QPageSetupWidget\0pageSizeChanged\0\0"
    "pageOrientationChanged\0pagesPerSheetChanged\0"
    "unitChanged\0topMarginChanged\0newValue\0"
    "bottomMarginChanged\0leftMarginChanged\0"
    "rightMarginChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPageSetupWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void QPageSetupWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPageSetupWidget *_t = static_cast<QPageSetupWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pageSizeChanged(); break;
        case 1: _t->pageOrientationChanged(); break;
        case 2: _t->pagesPerSheetChanged(); break;
        case 3: _t->unitChanged(); break;
        case 4: _t->topMarginChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->bottomMarginChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->leftMarginChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->rightMarginChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QPageSetupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QPageSetupWidget.data,
      qt_meta_data_QPageSetupWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPageSetupWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPageSetupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPageSetupWidget.stringdata0))
        return static_cast<void*>(const_cast< QPageSetupWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QPageSetupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
