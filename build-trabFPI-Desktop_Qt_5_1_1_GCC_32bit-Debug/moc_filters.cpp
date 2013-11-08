/****************************************************************************
** Meta object code from reading C++ file 'filters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../trabFPI/filters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Filters_t {
    QByteArrayData data[22];
    char stringdata[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Filters_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Filters_t qt_meta_stringdata_Filters = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 13),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 14),
QT_MOC_LITERAL(4, 38, 7),
QT_MOC_LITERAL(5, 46, 8),
QT_MOC_LITERAL(6, 55, 10),
QT_MOC_LITERAL(7, 66, 8),
QT_MOC_LITERAL(8, 75, 8),
QT_MOC_LITERAL(9, 84, 8),
QT_MOC_LITERAL(10, 93, 11),
QT_MOC_LITERAL(11, 105, 6),
QT_MOC_LITERAL(12, 112, 1),
QT_MOC_LITERAL(13, 114, 25),
QT_MOC_LITERAL(14, 140, 26),
QT_MOC_LITERAL(15, 167, 19),
QT_MOC_LITERAL(16, 187, 20),
QT_MOC_LITERAL(17, 208, 22),
QT_MOC_LITERAL(18, 231, 19),
QT_MOC_LITERAL(19, 251, 24),
QT_MOC_LITERAL(20, 276, 24),
QT_MOC_LITERAL(21, 301, 21)
    },
    "Filters\0applyGaussian\0\0applyLaplacian\0"
    "applyHP\0applyPHx\0applyPHyHx\0embossMe\0"
    "applySHx\0applySHy\0applyCustom\0float*\0"
    "a\0on_gaussianButton_clicked\0"
    "on_LaplacianButton_clicked\0"
    "on_hPButton_clicked\0on_pHxButton_clicked\0"
    "on_pHyHxButton_clicked\0on_embossCB_clicked\0"
    "on_SobelHxButton_clicked\0"
    "on_SobelHyButton_clicked\0on_pushButton_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Filters[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x05,
       3,    0,  105,    2, 0x05,
       4,    0,  106,    2, 0x05,
       5,    0,  107,    2, 0x05,
       6,    0,  108,    2, 0x05,
       7,    0,  109,    2, 0x05,
       8,    0,  110,    2, 0x05,
       9,    0,  111,    2, 0x05,
      10,    1,  112,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
      13,    0,  115,    2, 0x08,
      14,    0,  116,    2, 0x08,
      15,    0,  117,    2, 0x08,
      16,    0,  118,    2, 0x08,
      17,    0,  119,    2, 0x08,
      18,    0,  120,    2, 0x08,
      19,    0,  121,    2, 0x08,
      20,    0,  122,    2, 0x08,
      21,    0,  123,    2, 0x08,

 // signals: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Filters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Filters *_t = static_cast<Filters *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->applyGaussian();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = _t->applyLaplacian();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->applyHP();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->applyPHx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = _t->applyPHyHx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->embossMe();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->applySHx();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: { bool _r = _t->applySHy();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { bool _r = _t->applyCustom((*reinterpret_cast< float*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->on_gaussianButton_clicked(); break;
        case 10: _t->on_LaplacianButton_clicked(); break;
        case 11: _t->on_hPButton_clicked(); break;
        case 12: _t->on_pHxButton_clicked(); break;
        case 13: _t->on_pHyHxButton_clicked(); break;
        case 14: _t->on_embossCB_clicked(); break;
        case 15: _t->on_SobelHxButton_clicked(); break;
        case 16: _t->on_SobelHyButton_clicked(); break;
        case 17: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyGaussian)) {
                *result = 0;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyLaplacian)) {
                *result = 1;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyHP)) {
                *result = 2;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyPHx)) {
                *result = 3;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyPHyHx)) {
                *result = 4;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::embossMe)) {
                *result = 5;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applySHx)) {
                *result = 6;
            }
        }
        {
            typedef bool (Filters::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applySHy)) {
                *result = 7;
            }
        }
        {
            typedef bool (Filters::*_t)(float * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Filters::applyCustom)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject Filters::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Filters.data,
      qt_meta_data_Filters,  qt_static_metacall, 0, 0}
};


const QMetaObject *Filters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Filters::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Filters.stringdata))
        return static_cast<void*>(const_cast< Filters*>(this));
    return QWidget::qt_metacast(_clname);
}

int Filters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
bool Filters::applyGaussian()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool Filters::applyLaplacian()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool Filters::applyHP()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool Filters::applyPHx()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
bool Filters::applyPHyHx()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
bool Filters::embossMe()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
bool Filters::applySHx()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
bool Filters::applySHy()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}

// SIGNAL 8
bool Filters::applyCustom(float * _t1)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
