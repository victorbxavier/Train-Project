/****************************************************************************
** Meta object code from reading C++ file 'trem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Codigo QT5 Ubuntu - Trem/trem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Trem_t {
    QByteArrayData data[17];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Trem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Trem_t qt_meta_stringdata_Trem = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Trem"
QT_MOC_LITERAL(1, 5, 9), // "updateGUI"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "region0"
QT_MOC_LITERAL(4, 24, 7), // "region1"
QT_MOC_LITERAL(5, 32, 7), // "region2"
QT_MOC_LITERAL(6, 40, 7), // "region3"
QT_MOC_LITERAL(7, 48, 7), // "region4"
QT_MOC_LITERAL(8, 56, 7), // "region5"
QT_MOC_LITERAL(9, 64, 7), // "region6"
QT_MOC_LITERAL(10, 72, 10), // "region0Out"
QT_MOC_LITERAL(11, 83, 10), // "region1Out"
QT_MOC_LITERAL(12, 94, 10), // "region2Out"
QT_MOC_LITERAL(13, 105, 10), // "region3Out"
QT_MOC_LITERAL(14, 116, 10), // "region4Out"
QT_MOC_LITERAL(15, 127, 10), // "region5Out"
QT_MOC_LITERAL(16, 138, 10) // "region6Out"

    },
    "Trem\0updateGUI\0\0region0\0region1\0region2\0"
    "region3\0region4\0region5\0region6\0"
    "region0Out\0region1Out\0region2Out\0"
    "region3Out\0region4Out\0region5Out\0"
    "region6Out"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Trem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       3,    1,   96,    2, 0x06 /* Public */,
       4,    1,   99,    2, 0x06 /* Public */,
       5,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       7,    1,  108,    2, 0x06 /* Public */,
       8,    1,  111,    2, 0x06 /* Public */,
       9,    1,  114,    2, 0x06 /* Public */,
      10,    0,  117,    2, 0x06 /* Public */,
      11,    0,  118,    2, 0x06 /* Public */,
      12,    0,  119,    2, 0x06 /* Public */,
      13,    0,  120,    2, 0x06 /* Public */,
      14,    0,  121,    2, 0x06 /* Public */,
      15,    0,  122,    2, 0x06 /* Public */,
      16,    0,  123,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Trem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Trem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGUI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->region0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->region1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->region2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->region3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->region4((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->region5((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->region6((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->region0Out(); break;
        case 9: _t->region1Out(); break;
        case 10: _t->region2Out(); break;
        case 11: _t->region3Out(); break;
        case 12: _t->region4Out(); break;
        case 13: _t->region5Out(); break;
        case 14: _t->region6Out(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Trem::*)(int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::updateGUI)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region0)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region1)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region2)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region3)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region4)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region5)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Trem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region6)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region0Out)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region1Out)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region2Out)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region3Out)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region4Out)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region5Out)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Trem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Trem::region6Out)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Trem::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_Trem.data,
    qt_meta_data_Trem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Trem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Trem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Trem.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Trem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Trem::updateGUI(int _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Trem::region0(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Trem::region1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Trem::region2(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Trem::region3(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Trem::region4(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Trem::region5(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Trem::region6(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Trem::region0Out()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Trem::region1Out()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Trem::region2Out()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Trem::region3Out()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Trem::region4Out()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Trem::region5Out()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Trem::region6Out()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
