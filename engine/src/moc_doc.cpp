/****************************************************************************
** Meta object code from reading C++ file 'doc.h'
**
** Created: Sun Dec 12 05:54:28 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "doc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'doc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Doc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    5,    4,    4, 0x05,
      40,   33,    4,    4, 0x05,
      67,   33,    4,    4, 0x05,
      96,   33,    4,    4, 0x05,
     131,  125,    4,    4, 0x05,
     155,  146,    4,    4, 0x05,
     184,  146,    4,    4, 0x05,
     215,  146,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
     246,   33,    4,    4, 0x0a,
     283,  279,    4,    4, 0x09,
     318,    4,    4,    4, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Doc[] = {
    "Doc\0\0mode\0modeChanged(Doc::Mode)\0"
    "fxi_id\0fixtureAdded(t_fixture_id)\0"
    "fixtureRemoved(t_fixture_id)\0"
    "fixtureChanged(t_fixture_id)\0state\0"
    "modified(bool)\0function\0"
    "functionAdded(t_function_id)\0"
    "functionRemoved(t_function_id)\0"
    "functionChanged(t_function_id)\0"
    "slotFixtureChanged(t_fixture_id)\0fid\0"
    "slotFunctionChanged(t_function_id)\0"
    "slotBusNameChanged()\0"
};

const QMetaObject Doc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Doc,
      qt_meta_data_Doc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Doc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Doc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Doc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Doc))
        return static_cast<void*>(const_cast< Doc*>(this));
    return QObject::qt_metacast(_clname);
}

int Doc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: modeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 1: fixtureAdded((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 2: fixtureRemoved((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 3: fixtureChanged((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 4: modified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: functionAdded((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 6: functionRemoved((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 7: functionChanged((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 8: slotFixtureChanged((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 9: slotFunctionChanged((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 10: slotBusNameChanged(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Doc::modeChanged(Doc::Mode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Doc::fixtureAdded(t_fixture_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Doc::fixtureRemoved(t_fixture_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Doc::fixtureChanged(t_fixture_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Doc::modified(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Doc::functionAdded(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Doc::functionRemoved(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Doc::functionChanged(t_function_id _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
