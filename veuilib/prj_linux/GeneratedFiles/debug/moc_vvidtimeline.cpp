/****************************************************************************
** Meta object code from reading C++ file 'vvidtimeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/cmnui/vvidtimeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vvidtimeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TimeLineGrid_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeLineGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeLineGrid_t qt_meta_stringdata_TimeLineGrid = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TimeLineGrid"
QT_MOC_LITERAL(1, 13, 12), // "rangeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "startTime"
QT_MOC_LITERAL(4, 37, 7) // "endTime"

    },
    "TimeLineGrid\0rangeChanged\0\0startTime\0"
    "endTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeLineGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    3,    4,

       0        // eod
};

void TimeLineGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeLineGrid *_t = static_cast<TimeLineGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rangeChanged((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TimeLineGrid::*_t)(QDateTime , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeLineGrid::rangeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TimeLineGrid::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeLineGrid.data,
      qt_meta_data_TimeLineGrid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeLineGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeLineGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLineGrid.stringdata0))
        return static_cast<void*>(const_cast< TimeLineGrid*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< TimeLineGrid*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< TimeLineGrid*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeLineGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TimeLineGrid::rangeChanged(QDateTime _t1, QDateTime _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TimeLineThread_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeLineThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeLineThread_t qt_meta_stringdata_TimeLineThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TimeLineThread"
QT_MOC_LITERAL(1, 15, 14), // "RecItemUpdated"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "TimeLineThread\0RecItemUpdated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeLineThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void TimeLineThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeLineThread *_t = static_cast<TimeLineThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RecItemUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TimeLineThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TimeLineThread::RecItemUpdated)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TimeLineThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_TimeLineThread.data,
      qt_meta_data_TimeLineThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeLineThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeLineThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLineThread.stringdata0))
        return static_cast<void*>(const_cast< TimeLineThread*>(this));
    return QThread::qt_metacast(_clname);
}

int TimeLineThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void TimeLineThread::RecItemUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_TimeLineItems_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeLineItems_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeLineItems_t qt_meta_stringdata_TimeLineItems = {
    {
QT_MOC_LITERAL(0, 0, 13), // "TimeLineItems"
QT_MOC_LITERAL(1, 14, 16), // "SlotUpdateSearch"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "TimeLineItems\0SlotUpdateSearch\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeLineItems[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TimeLineItems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TimeLineItems *_t = static_cast<TimeLineItems *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SlotUpdateSearch(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TimeLineItems::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TimeLineItems.data,
      qt_meta_data_TimeLineItems,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TimeLineItems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeLineItems::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLineItems.stringdata0))
        return static_cast<void*>(const_cast< TimeLineItems*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< TimeLineItems*>(this));
    return QObject::qt_metacast(_clname);
}

int TimeLineItems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SphereTimeLineScaler_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SphereTimeLineScaler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SphereTimeLineScaler_t qt_meta_stringdata_SphereTimeLineScaler = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SphereTimeLineScaler"
QT_MOC_LITERAL(1, 21, 5), // "scale"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "factor"
QT_MOC_LITERAL(4, 35, 13), // "onUpdateScale"
QT_MOC_LITERAL(5, 49, 15), // "scalingFinished"
QT_MOC_LITERAL(6, 65, 12), // "startScaling"
QT_MOC_LITERAL(7, 78, 5), // "delta"
QT_MOC_LITERAL(8, 84, 11) // "stopScaling"

    },
    "SphereTimeLineScaler\0scale\0\0factor\0"
    "onUpdateScale\0scalingFinished\0"
    "startScaling\0delta\0stopScaling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SphereTimeLineScaler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void SphereTimeLineScaler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SphereTimeLineScaler *_t = static_cast<SphereTimeLineScaler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->onUpdateScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->scalingFinished(); break;
        case 3: _t->startScaling((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->stopScaling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SphereTimeLineScaler::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SphereTimeLineScaler::scale)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SphereTimeLineScaler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SphereTimeLineScaler.data,
      qt_meta_data_SphereTimeLineScaler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SphereTimeLineScaler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SphereTimeLineScaler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SphereTimeLineScaler.stringdata0))
        return static_cast<void*>(const_cast< SphereTimeLineScaler*>(this));
    return QObject::qt_metacast(_clname);
}

int SphereTimeLineScaler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SphereTimeLineScaler::scale(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SphereTimeLineScroller_t {
    QByteArrayData data[10];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SphereTimeLineScroller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SphereTimeLineScroller_t qt_meta_stringdata_SphereTimeLineScroller = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SphereTimeLineScroller"
QT_MOC_LITERAL(1, 23, 6), // "scroll"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "newCentralTime"
QT_MOC_LITERAL(4, 46, 14), // "onUpdateScroll"
QT_MOC_LITERAL(5, 61, 16), // "onScrollFinished"
QT_MOC_LITERAL(6, 78, 14), // "startScrolling"
QT_MOC_LITERAL(7, 93, 9), // "startTime"
QT_MOC_LITERAL(8, 103, 12), // "msecPerPixel"
QT_MOC_LITERAL(9, 116, 13) // "stopScrolling"

    },
    "SphereTimeLineScroller\0scroll\0\0"
    "newCentralTime\0onUpdateScroll\0"
    "onScrollFinished\0startScrolling\0"
    "startTime\0msecPerPixel\0stopScrolling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SphereTimeLineScroller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    2,   46,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::Double,    7,    8,
    QMetaType::Void,

       0        // eod
};

void SphereTimeLineScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SphereTimeLineScroller *_t = static_cast<SphereTimeLineScroller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scroll((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 1: _t->onUpdateScroll((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->onScrollFinished(); break;
        case 3: _t->startScrolling((*reinterpret_cast< const QDateTime(*)>(_a[1])),(*reinterpret_cast< const double(*)>(_a[2]))); break;
        case 4: _t->stopScrolling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SphereTimeLineScroller::*_t)(QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SphereTimeLineScroller::scroll)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SphereTimeLineScroller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SphereTimeLineScroller.data,
      qt_meta_data_SphereTimeLineScroller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SphereTimeLineScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SphereTimeLineScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SphereTimeLineScroller.stringdata0))
        return static_cast<void*>(const_cast< SphereTimeLineScroller*>(this));
    return QObject::qt_metacast(_clname);
}

int SphereTimeLineScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SphereTimeLineScroller::scroll(QDateTime _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_VVIDTimeLineWidget_t {
    QByteArrayData data[16];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VVIDTimeLineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VVIDTimeLineWidget_t qt_meta_stringdata_VVIDTimeLineWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VVIDTimeLineWidget"
QT_MOC_LITERAL(1, 19, 14), // "SignalSeekTime"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "nTime"
QT_MOC_LITERAL(4, 41, 12), // "eventClicked"
QT_MOC_LITERAL(5, 54, 6), // "taskId"
QT_MOC_LITERAL(6, 61, 9), // "startTime"
QT_MOC_LITERAL(7, 71, 12), // "rangeChanged"
QT_MOC_LITERAL(8, 84, 7), // "endTime"
QT_MOC_LITERAL(9, 92, 8), // "setScale"
QT_MOC_LITERAL(10, 101, 6), // "factor"
QT_MOC_LITERAL(11, 108, 14), // "setCentralTime"
QT_MOC_LITERAL(12, 123, 4), // "time"
QT_MOC_LITERAL(13, 128, 10), // "SlotZoomIn"
QT_MOC_LITERAL(14, 139, 11), // "SlotZoomOut"
QT_MOC_LITERAL(15, 151, 14) // "SlotUpdateTime"

    },
    "VVIDTimeLineWidget\0SignalSeekTime\0\0"
    "nTime\0eventClicked\0taskId\0startTime\0"
    "rangeChanged\0endTime\0setScale\0factor\0"
    "setCentralTime\0time\0SlotZoomIn\0"
    "SlotZoomOut\0SlotUpdateTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VVIDTimeLineWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    2,   57,    2, 0x06 /* Public */,
       7,    2,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   67,    2, 0x0a /* Public */,
      11,    1,   70,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,
      14,    0,   74,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QDateTime,    5,    6,
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QDateTime,    6,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QDateTime,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void VVIDTimeLineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VVIDTimeLineWidget *_t = static_cast<VVIDTimeLineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSeekTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->eventClicked((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< QDateTime(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 3: _t->setScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setCentralTime((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 5: _t->SlotZoomIn(); break;
        case 6: _t->SlotZoomOut(); break;
        case 7: _t->SlotUpdateTime((*reinterpret_cast< uint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VVIDTimeLineWidget::*_t)(unsigned int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVIDTimeLineWidget::SignalSeekTime)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (VVIDTimeLineWidget::*_t)(quint64 , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVIDTimeLineWidget::eventClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (VVIDTimeLineWidget::*_t)(QDateTime , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VVIDTimeLineWidget::rangeChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject VVIDTimeLineWidget::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_VVIDTimeLineWidget.data,
      qt_meta_data_VVIDTimeLineWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VVIDTimeLineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VVIDTimeLineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VVIDTimeLineWidget.stringdata0))
        return static_cast<void*>(const_cast< VVIDTimeLineWidget*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int VVIDTimeLineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VVIDTimeLineWidget::SignalSeekTime(unsigned int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VVIDTimeLineWidget::eventClicked(quint64 _t1, QDateTime _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VVIDTimeLineWidget::rangeChanged(QDateTime _t1, QDateTime _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
