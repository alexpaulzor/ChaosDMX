/****************************************************************************
** Meta object code from reading C++ file 'vcsoloframe.h'
**
** Created: Sun Dec 12 05:58:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcsoloframe.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcsoloframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCSoloFrame[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x09,
      45,   12,   12,   12, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCSoloFrame[] = {
    "VCSoloFrame\0\0mode\0slotModeChanged(Doc::Mode)\0"
    "slotButtonFunctionStarting()\0"
};

const QMetaObject VCSoloFrame::staticMetaObject = {
    { &VCFrame::staticMetaObject, qt_meta_stringdata_VCSoloFrame,
      qt_meta_data_VCSoloFrame, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCSoloFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCSoloFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCSoloFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCSoloFrame))
        return static_cast<void*>(const_cast< VCSoloFrame*>(this));
    return VCFrame::qt_metacast(_clname);
}

int VCSoloFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VCFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 1: slotButtonFunctionStarting(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
