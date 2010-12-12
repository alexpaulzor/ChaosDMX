/****************************************************************************
** Meta object code from reading C++ file 'efx.h'
**
** Created: Sun Dec 12 05:54:28 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "efx.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'efx.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EFX[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,    5,    4,    4, 0x0a,
      54,   45,    4,    4, 0x0a,
      98,   89,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EFX[] = {
    "EFX\0\0fxi_id\0slotFixtureRemoved(t_fixture_id)\0"
    "function\0slotFunctionRemoved(t_function_id)\0"
    "id,value\0slotBusValueChanged(quint32,quint32)\0"
};

const QMetaObject EFX::staticMetaObject = {
    { &Function::staticMetaObject, qt_meta_stringdata_EFX,
      qt_meta_data_EFX, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EFX::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EFX::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EFX::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EFX))
        return static_cast<void*>(const_cast< EFX*>(this));
    return Function::qt_metacast(_clname);
}

int EFX::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Function::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotFixtureRemoved((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 1: slotFunctionRemoved((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 2: slotBusValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
