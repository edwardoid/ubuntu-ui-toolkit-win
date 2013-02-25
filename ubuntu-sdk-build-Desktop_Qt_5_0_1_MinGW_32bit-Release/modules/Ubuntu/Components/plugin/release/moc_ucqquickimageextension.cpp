/****************************************************************************
** Meta object code from reading C++ file 'ucqquickimageextension.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/ucqquickimageextension.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ucqquickimageextension.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UCQQuickImageExtension_t {
    QByteArrayData data[5];
    char stringdata[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UCQQuickImageExtension_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UCQQuickImageExtension_t qt_meta_stringdata_UCQQuickImageExtension = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 13),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 12),
QT_MOC_LITERAL(4, 51, 6)
    },
    "UCQQuickImageExtension\0sourceChanged\0"
    "\0reloadSource\0source\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UCQQuickImageExtension[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x09,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QUrl, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void UCQQuickImageExtension::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UCQQuickImageExtension *_t = static_cast<UCQQuickImageExtension *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->reloadSource(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UCQQuickImageExtension::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UCQQuickImageExtension::sourceChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject UCQQuickImageExtension::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UCQQuickImageExtension.data,
      qt_meta_data_UCQQuickImageExtension,  qt_static_metacall, 0, 0}
};


const QMetaObject *UCQQuickImageExtension::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UCQQuickImageExtension::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UCQQuickImageExtension.stringdata))
        return static_cast<void*>(const_cast< UCQQuickImageExtension*>(this));
    return QObject::qt_metacast(_clname);
}

int UCQQuickImageExtension::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = source(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QUrl*>(_v)); break;
        }
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
void UCQQuickImageExtension::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
