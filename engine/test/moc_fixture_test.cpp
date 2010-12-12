/****************************************************************************
** Meta object code from reading C++ file 'fixture_test.h'
**
** Created: Sun Dec 12 05:56:06 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixture_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixture_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Fixture_Test[] = {

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
      14,   13,   13,   13, 0x08,
      29,   13,   13,   13, 0x08,
      34,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      51,   13,   13,   13, 0x08,
      62,   13,   13,   13, 0x08,
      69,   13,   13,   13, 0x08,
      78,   13,   13,   13, 0x08,
      91,   13,   13,   13, 0x08,
     102,   13,   13,   13, 0x08,
     118,   13,   13,   13, 0x08,
     135,   13,   13,   13, 0x08,
     165,   13,   13,   13, 0x08,
     178,   13,   13,   13, 0x08,
     197,   13,   13,   13, 0x08,
     217,   13,   13,   13, 0x08,
     231,   13,   13,   13, 0x08,
     240,   13,   13,   13, 0x08,
     247,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Fixture_Test[] = {
    "Fixture_Test\0\0initTestCase()\0id()\0"
    "name()\0address()\0lessThan()\0type()\0"
    "dimmer()\0fixtureDef()\0channels()\0"
    "loadWrongRoot()\0loadFixtureDef()\0"
    "loadFixtureDefWrongChannels()\0"
    "loadDimmer()\0loadWrongAddress()\0"
    "loadWrongUniverse()\0loadWrongID()\0"
    "loader()\0save()\0status()\0"
};

const QMetaObject Fixture_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Fixture_Test,
      qt_meta_data_Fixture_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Fixture_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Fixture_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Fixture_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Fixture_Test))
        return static_cast<void*>(const_cast< Fixture_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int Fixture_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: id(); break;
        case 2: name(); break;
        case 3: address(); break;
        case 4: lessThan(); break;
        case 5: type(); break;
        case 6: dimmer(); break;
        case 7: fixtureDef(); break;
        case 8: channels(); break;
        case 9: loadWrongRoot(); break;
        case 10: loadFixtureDef(); break;
        case 11: loadFixtureDefWrongChannels(); break;
        case 12: loadDimmer(); break;
        case 13: loadWrongAddress(); break;
        case 14: loadWrongUniverse(); break;
        case 15: loadWrongID(); break;
        case 16: loader(); break;
        case 17: save(); break;
        case 18: status(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
