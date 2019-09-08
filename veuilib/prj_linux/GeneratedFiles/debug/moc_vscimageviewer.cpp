/****************************************************************************
** Meta object code from reading C++ file 'vscimageviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/emap/vscimageviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vscimageviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VSCImageViewer_t {
    QByteArrayData data[13];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VSCImageViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VSCImageViewer_t qt_meta_stringdata_VSCImageViewer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "VSCImageViewer"
QT_MOC_LITERAL(1, 15, 15), // "sendDoubleClick"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "imageChanged"
QT_MOC_LITERAL(4, 45, 13), // "slotFitNormal"
QT_MOC_LITERAL(5, 59, 12), // "slotFitWidth"
QT_MOC_LITERAL(6, 72, 10), // "slotFitAll"
QT_MOC_LITERAL(7, 83, 10), // "slotZoomIn"
QT_MOC_LITERAL(8, 94, 11), // "slotZoomOut"
QT_MOC_LITERAL(9, 106, 17), // "slotSetInfoString"
QT_MOC_LITERAL(10, 124, 12), // "slotShowInfo"
QT_MOC_LITERAL(11, 137, 16), // "slotShowControls"
QT_MOC_LITERAL(12, 154, 11) // "onAnimation"

    },
    "VSCImageViewer\0sendDoubleClick\0\0"
    "imageChanged\0slotFitNormal\0slotFitWidth\0"
    "slotFitAll\0slotZoomIn\0slotZoomOut\0"
    "slotSetInfoString\0slotShowInfo\0"
    "slotShowControls\0onAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VSCImageViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void VSCImageViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VSCImageViewer *_t = static_cast<VSCImageViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDoubleClick(); break;
        case 1: _t->imageChanged(); break;
        case 2: _t->slotFitNormal(); break;
        case 3: _t->slotFitWidth(); break;
        case 4: _t->slotFitAll(); break;
        case 5: _t->slotZoomIn(); break;
        case 6: _t->slotZoomOut(); break;
        case 7: _t->slotSetInfoString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->slotShowInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotShowControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VSCImageViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCImageViewer::sendDoubleClick)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VSCImageViewer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VSCImageViewer::imageChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject VSCImageViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VSCImageViewer.data,
      qt_meta_data_VSCImageViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VSCImageViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VSCImageViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VSCImageViewer.stringdata0))
        return static_cast<void*>(const_cast< VSCImageViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int VSCImageViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void VSCImageViewer::sendDoubleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void VSCImageViewer::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
