/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QICOPlugin_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QICOPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QICOPlugin_t qt_meta_stringdata_QICOPlugin = {
    {
QT_MOC_LITERAL(0, 0, 10) // "QICOPlugin"

    },
    "QICOPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QICOPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QICOPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QICOPlugin::staticMetaObject = {
    { &QImageIOPlugin::staticMetaObject, qt_meta_stringdata_QICOPlugin.data,
      qt_meta_data_QICOPlugin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QICOPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QICOPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QICOPlugin.stringdata0))
        return static_cast<void*>(const_cast< QICOPlugin*>(this));
    return QImageIOPlugin::qt_metacast(_clname);
}

int QICOPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QImageIOPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '(',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x14, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '1',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'I',  'm',  'a', 
    'g',  'e',  'I',  'O',  'H',  'a',  'n',  'd', 
    'l',  'e',  'r',  'F',  'a',  'c',  't',  'o', 
    'r',  'y',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e',  0x00, 0x9b, 0x0b, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'Q',  'I', 
    'C',  'O',  'P',  'l',  'u',  'g',  'i',  'n', 
    ':',  0xe0, 0xa0, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x11, 0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, 0x95, 0x12, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x03, 0x00, 'i',  'c',  'o',  0x00, 0x00, 0x00,
    0x03, 0x00, 'c',  'u',  'r',  0x00, 0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x8b, 0x02, 0x00, 0x00,
    0x94, 0x09, 0x00, 0x00, 0x09, 0x00, 'M',  'i', 
    'm',  'e',  'T',  'y',  'p',  'e',  's',  0x00,
    ',',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x18, 0x00, 'i',  'm', 
    'a',  'g',  'e',  '/',  'v',  'n',  'd',  '.', 
    'm',  'i',  'c',  'r',  'o',  's',  'o',  'f', 
    't',  '.',  'i',  'c',  'o',  'n',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x84, 0x00, 0x00, 0x00, 'L',  0x00, 0x00, 0x00,
    'x',  0x00, 0x00, 0x00, 'h',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    '(',  0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0x14, 0x01, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '1',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'I',  'm',  'a', 
    'g',  'e',  'I',  'O',  'H',  'a',  'n',  'd', 
    'l',  'e',  'r',  'F',  'a',  'c',  't',  'o', 
    'r',  'y',  'I',  'n',  't',  'e',  'r',  'f', 
    'a',  'c',  'e',  0x00, 0x95, 0x0b, 0x00, 0x00,
    0x08, 0x00, 'M',  'e',  't',  'a',  'D',  'a', 
    't',  'a',  0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 'x',  0x00, 0x00, 0x00,
    0x14, 0x03, 0x00, 0x00, 0x04, 0x00, 'K',  'e', 
    'y',  's',  0x00, 0x00, '$',  0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
    0x03, 0x00, 'i',  'c',  'o',  0x00, 0x00, 0x00,
    0x03, 0x00, 'c',  'u',  'r',  0x00, 0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x8b, 0x02, 0x00, 0x00,
    0x94, 0x09, 0x00, 0x00, 0x09, 0x00, 'M',  'i', 
    'm',  'e',  'T',  'y',  'p',  'e',  's',  0x00,
    ',',  0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    '(',  0x00, 0x00, 0x00, 0x18, 0x00, 'i',  'm', 
    'a',  'g',  'e',  '/',  'v',  'n',  'd',  '.', 
    'm',  'i',  'c',  'r',  'o',  's',  'o',  'f', 
    't',  '.',  'i',  'c',  'o',  'n',  0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    '<',  0x00, 0x00, 0x00, 0x9b, 0x1d, 0x00, 0x00,
    0x09, 0x00, 'c',  'l',  'a',  's',  's',  'N', 
    'a',  'm',  'e',  0x00, 0x0a, 0x00, 'Q',  'I', 
    'C',  'O',  'P',  'l',  'u',  'g',  'i',  'n', 
    '1',  0x00, 0x00, 0x00, 0x05, 0x00, 'd',  'e', 
    'b',  'u',  'g',  0x00, ':',  0xe0, 0xa0, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    'L',  0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00,
    0xf8, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(QICOPlugin, QICOPlugin)

QT_END_MOC_NAMESPACE
