/****************************************************************************
** Meta object code from reading C++ file 'vcwidget.h'
**
** Created: Sun Dec 12 05:58:47 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   10,    9,    9, 0x05,
      47,   10,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   73,    9,    9, 0x09,
     141,   10,    9,    9, 0x09,
     170,   10,    9,    9, 0x09,
     205,  200,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCWidget[] = {
    "VCWidget\0\0keySequence\0keyPressed(QKeySequence)\0"
    "keyReleased(QKeySequence)\0"
    "universe,channel,value\0"
    "slotInputValueChanged(quint32,quint32,uchar)\0"
    "slotKeyPressed(QKeySequence)\0"
    "slotKeyReleased(QKeySequence)\0mode\0"
    "slotModeChanged(Doc::Mode)\0"
};

const QMetaObject VCWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VCWidget,
      qt_meta_data_VCWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCWidget))
        return static_cast<void*>(const_cast< VCWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VCWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyPressed((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: keyReleased((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 2: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 3: slotKeyPressed((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 4: slotKeyReleased((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 5: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void VCWidget::keyPressed(const QKeySequence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VCWidget::keyReleased(const QKeySequence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
