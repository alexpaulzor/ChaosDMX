/****************************************************************************
** Meta object code from reading C++ file 'vcxypad.h'
**
** Created: Sun Dec 12 05:58:48 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcxypad.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcxypad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCXYPad[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCXYPad[] = {
    "VCXYPad\0\0mode\0slotModeChanged(Doc::Mode)\0"
};

const QMetaObject VCXYPad::staticMetaObject = {
    { &VCWidget::staticMetaObject, qt_meta_stringdata_VCXYPad,
      qt_meta_data_VCXYPad, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCXYPad::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCXYPad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCXYPad::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCXYPad))
        return static_cast<void*>(const_cast< VCXYPad*>(this));
    if (!strcmp(_clname, "DMXSource"))
        return static_cast< DMXSource*>(const_cast< VCXYPad*>(this));
    return VCWidget::qt_metacast(_clname);
}

int VCXYPad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VCWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
