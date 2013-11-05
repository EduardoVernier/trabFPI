/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../trabFPI/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 12),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 16),
QT_MOC_LITERAL(4, 42, 16),
QT_MOC_LITERAL(5, 59, 24),
QT_MOC_LITERAL(6, 84, 21),
QT_MOC_LITERAL(7, 106, 21),
QT_MOC_LITERAL(8, 128, 26),
QT_MOC_LITERAL(9, 155, 34),
QT_MOC_LITERAL(10, 190, 25),
QT_MOC_LITERAL(11, 216, 32),
QT_MOC_LITERAL(12, 249, 25),
QT_MOC_LITERAL(13, 275, 23),
QT_MOC_LITERAL(14, 299, 21),
QT_MOC_LITERAL(15, 321, 25),
QT_MOC_LITERAL(16, 347, 26),
QT_MOC_LITERAL(17, 374, 20),
QT_MOC_LITERAL(18, 395, 23),
QT_MOC_LITERAL(19, 419, 22),
QT_MOC_LITERAL(20, 442, 16)
    },
    "MainWindow\0chooseFilter\0\0on_hFlip_clicked\0"
    "on_vFlip_clicked\0on_quatizeButton_clicked\0"
    "on_openButton_clicked\0on_saveButton_clicked\0"
    "on_grayscaleButton_clicked\0"
    "on_brightnessSlider_sliderReleased\0"
    "on_negativeButton_clicked\0"
    "on_contrastSlider_sliderReleased\0"
    "on_calcHistButton_clicked\0"
    "on_eqHistButton_clicked\0on_pushButton_clicked\0"
    "on_cwRotateButton_clicked\0"
    "on_ccwRotateButton_clicked\0"
    "on_zInButton_clicked\0on_filterButton_clicked\0"
    "on_zOutButtton_clicked\0on_applyGaussian\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,  110,    2, 0x08,
       4,    0,  111,    2, 0x08,
       5,    0,  112,    2, 0x08,
       6,    0,  113,    2, 0x08,
       7,    0,  114,    2, 0x08,
       8,    0,  115,    2, 0x08,
       9,    0,  116,    2, 0x08,
      10,    0,  117,    2, 0x08,
      11,    0,  118,    2, 0x08,
      12,    0,  119,    2, 0x08,
      13,    0,  120,    2, 0x08,
      14,    0,  121,    2, 0x08,
      15,    0,  122,    2, 0x08,
      16,    0,  123,    2, 0x08,
      17,    0,  124,    2, 0x08,
      18,    0,  125,    2, 0x08,
      19,    0,  126,    2, 0x08,
      20,    0,  127,    2, 0x0a,

 // signals: parameters
    QMetaType::Bool,

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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: { bool _r = _t->chooseFilter();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->on_hFlip_clicked(); break;
        case 2: _t->on_vFlip_clicked(); break;
        case 3: _t->on_quatizeButton_clicked(); break;
        case 4: _t->on_openButton_clicked(); break;
        case 5: _t->on_saveButton_clicked(); break;
        case 6: _t->on_grayscaleButton_clicked(); break;
        case 7: _t->on_brightnessSlider_sliderReleased(); break;
        case 8: _t->on_negativeButton_clicked(); break;
        case 9: _t->on_contrastSlider_sliderReleased(); break;
        case 10: _t->on_calcHistButton_clicked(); break;
        case 11: _t->on_eqHistButton_clicked(); break;
        case 13: _t->on_cwRotateButton_clicked(); break;
        case 14: _t->on_ccwRotateButton_clicked(); break;
        case 15: _t->on_zInButton_clicked(); break;
        case 16: _t->on_filterButton_clicked(); break;
        case 17: _t->on_zOutButtton_clicked(); break;
        case 18: _t->on_applyGaussian(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::chooseFilter)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
bool MainWindow::chooseFilter()
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
