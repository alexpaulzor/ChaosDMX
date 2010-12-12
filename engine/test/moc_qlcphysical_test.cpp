/****************************************************************************
** Meta object code from reading C++ file 'qlcphysical_test.h'
**
** Created: Sun Dec 12 05:56:00 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcphysical_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcphysical_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCPhysical_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      29,   17,   17,   17, 0x08,
      42,   17,   17,   17, 0x08,
      59,   17,   17,   17, 0x08,
      68,   17,   17,   17, 0x08,
      76,   17,   17,   17, 0x08,
      85,   17,   17,   17, 0x08,
      93,   17,   17,   17, 0x08,
     104,   17,   17,   17, 0x08,
     121,   17,   17,   17, 0x08,
     138,   17,   17,   17, 0x08,
     150,   17,   17,   17, 0x08,
     164,   17,   17,   17, 0x08,
     179,   17,   17,   17, 0x08,
     198,   17,   17,   17, 0x08,
     213,   17,   17,   17, 0x08,
     220,   17,   17,   17, 0x08,
     227,   17,   17,   17, 0x08,
     243,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCPhysical_Test[] = {
    "QLCPhysical_Test\0\0bulbType()\0bulbLumens()\0"
    "bulbColourTemp()\0weight()\0width()\0"
    "height()\0depth()\0lensName()\0"
    "lensDegreesMin()\0lensDegreesMax()\0"
    "focusType()\0focusPanMax()\0focusTiltMax()\0"
    "powerConsumption()\0dmxConnector()\0"
    "copy()\0load()\0loadWrongRoot()\0save()\0"
};

const QMetaObject QLCPhysical_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCPhysical_Test,
      qt_meta_data_QLCPhysical_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCPhysical_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCPhysical_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCPhysical_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCPhysical_Test))
        return static_cast<void*>(const_cast< QLCPhysical_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCPhysical_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: bulbType(); break;
        case 1: bulbLumens(); break;
        case 2: bulbColourTemp(); break;
        case 3: weight(); break;
        case 4: width(); break;
        case 5: height(); break;
        case 6: depth(); break;
        case 7: lensName(); break;
        case 8: lensDegreesMin(); break;
        case 9: lensDegreesMax(); break;
        case 10: focusType(); break;
        case 11: focusPanMax(); break;
        case 12: focusTiltMax(); break;
        case 13: powerConsumption(); break;
        case 14: dmxConnector(); break;
        case 15: copy(); break;
        case 16: load(); break;
        case 17: loadWrongRoot(); break;
        case 18: save(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
