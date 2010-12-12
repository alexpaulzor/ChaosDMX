/****************************************************************************
** Meta object code from reading C++ file 'qlcfixturedefcache_test.h'
**
** Created: Sun Dec 12 05:56:02 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcfixturedefcache_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcfixturedefcache_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCFixtureDefCache_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x08,
      32,   24,   24,   24, 0x08,
      42,   24,   24,   24, 0x08,
      55,   24,   24,   24, 0x08,
      61,   24,   24,   24, 0x08,
      74,   24,   24,   24, 0x08,
      81,   24,   24,   24, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCFixtureDefCache_Test[] = {
    "QLCFixtureDefCache_Test\0\0init()\0"
    "cleanup()\0duplicates()\0add()\0fixtureDef()\0"
    "load()\0defDirectories()\0"
};

const QMetaObject QLCFixtureDefCache_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCFixtureDefCache_Test,
      qt_meta_data_QLCFixtureDefCache_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCFixtureDefCache_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCFixtureDefCache_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCFixtureDefCache_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCFixtureDefCache_Test))
        return static_cast<void*>(const_cast< QLCFixtureDefCache_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCFixtureDefCache_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: init(); break;
        case 1: cleanup(); break;
        case 2: duplicates(); break;
        case 3: add(); break;
        case 4: fixtureDef(); break;
        case 5: load(); break;
        case 6: defDirectories(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
