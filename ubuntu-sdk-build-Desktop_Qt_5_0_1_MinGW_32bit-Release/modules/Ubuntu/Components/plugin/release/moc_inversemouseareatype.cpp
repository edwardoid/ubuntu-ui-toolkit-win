/****************************************************************************
** Meta object code from reading C++ file 'inversemouseareatype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/modules/Ubuntu/Components/plugin/inversemouseareatype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inversemouseareatype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InverseMouseAreaType_t {
    QByteArrayData data[21];
    char stringdata[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InverseMouseAreaType_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InverseMouseAreaType_t qt_meta_stringdata_InverseMouseAreaType = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 14),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 22),
QT_MOC_LITERAL(4, 60, 21),
QT_MOC_LITERAL(5, 82, 30),
QT_MOC_LITERAL(6, 113, 18),
QT_MOC_LITERAL(7, 132, 7),
QT_MOC_LITERAL(8, 140, 17),
QT_MOC_LITERAL(9, 158, 5),
QT_MOC_LITERAL(10, 164, 8),
QT_MOC_LITERAL(11, 173, 7),
QT_MOC_LITERAL(12, 181, 6),
QT_MOC_LITERAL(13, 188, 8),
QT_MOC_LITERAL(14, 197, 5),
QT_MOC_LITERAL(15, 203, 15),
QT_MOC_LITERAL(16, 219, 16),
QT_MOC_LITERAL(17, 236, 14),
QT_MOC_LITERAL(18, 251, 23),
QT_MOC_LITERAL(19, 275, 11),
QT_MOC_LITERAL(20, 287, 11)
    },
    "InverseMouseAreaType\0pressedChanged\0"
    "\0acceptedButtonsChanged\0pressedButtonsChanged\0"
    "propagateComposedEventsChanged\0"
    "sensingAreaChanged\0pressed\0QQuickMouseEvent*\0"
    "mouse\0released\0clicked\0update\0contains\0"
    "point\0acceptedButtons\0Qt::MouseButtons\0"
    "pressedButtons\0propagateComposedEvents\0"
    "sensingArea\0QQuickItem*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InverseMouseAreaType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x05,
       3,    0,   65,    2, 0x05,
       4,    0,   66,    2, 0x05,
       5,    0,   67,    2, 0x05,
       6,    0,   68,    2, 0x05,
       7,    1,   69,    2, 0x05,
      10,    1,   72,    2, 0x05,
      11,    1,   75,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      12,    0,   78,    2, 0x08,

 // methods: name, argc, parameters, tag, flags
      13,    1,   79,    2, 0x02,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QPointF,   14,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
      15, 0x80000000 | 16, 0x0049510b,
      17, 0x80000000 | 16, 0x00495009,
      18, QMetaType::Bool, 0x00495103,
      19, 0x80000000 | 20, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void InverseMouseAreaType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InverseMouseAreaType *_t = static_cast<InverseMouseAreaType *>(_o);
        switch (_id) {
        case 0: _t->pressedChanged(); break;
        case 1: _t->acceptedButtonsChanged(); break;
        case 2: _t->pressedButtonsChanged(); break;
        case 3: _t->propagateComposedEventsChanged(); break;
        case 4: _t->sensingAreaChanged(); break;
        case 5: _t->pressed((*reinterpret_cast< QQuickMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->released((*reinterpret_cast< QQuickMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->clicked((*reinterpret_cast< QQuickMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->update(); break;
        case 9: { bool _r = _t->contains((*reinterpret_cast< const QPointF(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InverseMouseAreaType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::pressedChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::acceptedButtonsChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::pressedButtonsChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::propagateComposedEventsChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::sensingAreaChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)(QQuickMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::pressed)) {
                *result = 5;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)(QQuickMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::released)) {
                *result = 6;
            }
        }
        {
            typedef void (InverseMouseAreaType::*_t)(QQuickMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InverseMouseAreaType::clicked)) {
                *result = 7;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

}

const QMetaObject InverseMouseAreaType::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_InverseMouseAreaType.data,
      qt_meta_data_InverseMouseAreaType,  qt_static_metacall, 0, 0}
};


const QMetaObject *InverseMouseAreaType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InverseMouseAreaType::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InverseMouseAreaType.stringdata))
        return static_cast<void*>(const_cast< InverseMouseAreaType*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int InverseMouseAreaType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = pressed(); break;
        case 1: *reinterpret_cast< Qt::MouseButtons*>(_v) = acceptedButtons(); break;
        case 2: *reinterpret_cast< Qt::MouseButtons*>(_v) = pressedButtons(); break;
        case 3: *reinterpret_cast< bool*>(_v) = propagateComposedEvents(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = sensingArea(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setAcceptedButtons(*reinterpret_cast< Qt::MouseButtons*>(_v)); break;
        case 3: setPropagateComposedEvents(*reinterpret_cast< bool*>(_v)); break;
        case 4: setSensingArea(*reinterpret_cast< QQuickItem**>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void InverseMouseAreaType::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void InverseMouseAreaType::acceptedButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void InverseMouseAreaType::pressedButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void InverseMouseAreaType::propagateComposedEventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void InverseMouseAreaType::sensingAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void InverseMouseAreaType::pressed(QQuickMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void InverseMouseAreaType::released(QQuickMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void InverseMouseAreaType::clicked(QQuickMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
