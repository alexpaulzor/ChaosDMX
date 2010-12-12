/****************************************************************************
** Meta object code from reading C++ file 'function.h'
**
** Created: Sun Dec 12 05:54:29 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "function.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'function.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Function[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   10,    9,    9, 0x05,
      47,   37,    9,    9, 0x05,
      79,   76,    9,    9, 0x05,
     102,   76,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     132,  125,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Function[] = {
    "Function\0\0fid\0changed(t_function_id)\0"
    "fid,state\0flashing(t_function_id,bool)\0"
    "id\0running(t_function_id)\0"
    "stopped(t_function_id)\0fxi_id\0"
    "slotFixtureRemoved(t_fixture_id)\0"
};

const QMetaObject Function::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Function,
      qt_meta_data_Function, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Function::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Function::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Function::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Function))
        return static_cast<void*>(const_cast< Function*>(this));
    return QObject::qt_metacast(_clname);
}

int Function::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changed((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 1: flashing((*reinterpret_cast< t_function_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: running((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 3: stopped((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 4: slotFixtureRemoved((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Function::changed(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Function::flashing(t_function_id _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Function::running(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Function::stopped(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
