/****************************************************************************
** Meta object code from reading C++ file 'qprintpreviewdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogs/qprintpreviewdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprintpreviewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPrintPreviewDialog_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPrintPreviewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPrintPreviewDialog_t qt_meta_stringdata_QPrintPreviewDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QPrintPreviewDialog"
QT_MOC_LITERAL(1, 20, 14), // "paintRequested"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "QPrinter*"
QT_MOC_LITERAL(4, 46, 7), // "printer"
QT_MOC_LITERAL(5, 54, 6), // "_q_fit"
QT_MOC_LITERAL(6, 61, 8), // "QAction*"
QT_MOC_LITERAL(7, 70, 6), // "action"
QT_MOC_LITERAL(8, 77, 9), // "_q_zoomIn"
QT_MOC_LITERAL(9, 87, 10), // "_q_zoomOut"
QT_MOC_LITERAL(10, 98, 11), // "_q_navigate"
QT_MOC_LITERAL(11, 110, 10), // "_q_setMode"
QT_MOC_LITERAL(12, 121, 16), // "_q_pageNumEdited"
QT_MOC_LITERAL(13, 138, 8), // "_q_print"
QT_MOC_LITERAL(14, 147, 12), // "_q_pageSetup"
QT_MOC_LITERAL(15, 160, 17), // "_q_previewChanged"
QT_MOC_LITERAL(16, 178, 20) // "_q_zoomFactorChanged"

    },
    "QPrintPreviewDialog\0paintRequested\0\0"
    "QPrinter*\0printer\0_q_fit\0QAction*\0"
    "action\0_q_zoomIn\0_q_zoomOut\0_q_navigate\0"
    "_q_setMode\0_q_pageNumEdited\0_q_print\0"
    "_q_pageSetup\0_q_previewChanged\0"
    "_q_zoomFactorChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPrintPreviewDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   72,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    0,   83,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QPrintPreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPrintPreviewDialog *_t = static_cast<QPrintPreviewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintRequested((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_fit((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_zoomIn(); break;
        case 3: _t->d_func()->_q_zoomOut(); break;
        case 4: _t->d_func()->_q_navigate((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_setMode((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_pageNumEdited(); break;
        case 7: _t->d_func()->_q_print(); break;
        case 8: _t->d_func()->_q_pageSetup(); break;
        case 9: _t->d_func()->_q_previewChanged(); break;
        case 10: _t->d_func()->_q_zoomFactorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPrintPreviewDialog::*_t)(QPrinter * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPrintPreviewDialog::paintRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QPrintPreviewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QPrintPreviewDialog.data,
      qt_meta_data_QPrintPreviewDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPrintPreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPrintPreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPrintPreviewDialog.stringdata0))
        return static_cast<void*>(const_cast< QPrintPreviewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QPrintPreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QPrintPreviewDialog::paintRequested(QPrinter * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
