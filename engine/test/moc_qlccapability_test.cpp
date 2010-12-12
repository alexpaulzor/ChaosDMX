/****************************************************************************
** Meta object code from reading C++ file 'qlccapability_test.h'
**
** Created: Sun Dec 12 05:56:01 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlccapability_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlccapability_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCCapability_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      30,   19,   19,   19, 0x08,
      41,   19,   19,   19, 0x08,
      47,   19,   19,   19, 0x08,
      58,   19,   19,   19, 0x08,
      64,   19,   19,   19, 0x08,
      73,   19,   19,   19, 0x08,
      80,   19,   19,   19, 0x08,
      91,   19,   19,   19, 0x08,
      98,   19,   19,   19, 0x08,
     105,   19,   19,   19, 0x08,
     121,   19,   19,   19, 0x08,
     133,   19,   19,   19, 0x08,
     145,   19,   19,   19, 0x08,
     169,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCCapability_Test[] = {
    "QLCCapability_Test\0\0initial()\0min_data()\0"
    "min()\0max_data()\0max()\0middle()\0name()\0"
    "overlaps()\0copy()\0load()\0loadWrongRoot()\0"
    "loadNoMin()\0loadNoMax()\0loadMinGreaterThanMax()\0"
    "save()\0"
};

const QMetaObject QLCCapability_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCCapability_Test,
      qt_meta_data_QLCCapability_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCCapability_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCCapability_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCCapability_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCCapability_Test))
        return static_cast<void*>(const_cast< QLCCapability_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCCapability_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: min_data(); break;
        case 2: min(); break;
        case 3: max_data(); break;
        case 4: max(); break;
        case 5: middle(); break;
        case 6: name(); break;
        case 7: overlaps(); break;
        case 8: copy(); break;
        case 9: load(); break;
        case 10: loadWrongRoot(); break;
        case 11: loadNoMin(); break;
        case 12: loadNoMax(); break;
        case 13: loadMinGreaterThanMax(); break;
        case 14: save(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
