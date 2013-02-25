/****************************************************************************
** Meta object code from reading C++ file 'qquickclipboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/qquickclipboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickclipboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickClipboard_t {
    QByteArrayData data[8];
    char stringdata[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QQuickClipboard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QQuickClipboard_t qt_meta_stringdata_QQuickClipboard = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 11),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 4),
QT_MOC_LITERAL(4, 34, 4),
QT_MOC_LITERAL(5, 39, 5),
QT_MOC_LITERAL(6, 45, 7),
QT_MOC_LITERAL(7, 53, 15)
    },
    "QQuickClipboard\0dataChanged\0\0push\0"
    "data\0clear\0newData\0QQuickMimeData*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickClipboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a,
       5,    0,   38,    2, 0x0a,

 // methods: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x02,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7,

 // properties: name, type, flags
       4, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickClipboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickClipboard *_t = static_cast<QQuickClipboard *>(_o);
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->push((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: { QQuickMimeData* _r = _t->newData();
            if (_a[0]) *reinterpret_cast< QQuickMimeData**>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickClipboard::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickClipboard::dataChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QQuickClipboard::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickClipboard.data,
      qt_meta_data_QQuickClipboard,  qt_static_metacall, 0, 0}
};


const QMetaObject *QQuickClipboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickClipboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickClipboard.stringdata))
        return static_cast<void*>(const_cast< QQuickClipboard*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickClipboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickMimeData**>(_v) = data(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickClipboard::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
