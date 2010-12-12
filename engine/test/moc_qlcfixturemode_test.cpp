/****************************************************************************
** Meta object code from reading C++ file 'qlcfixturemode_test.h'
**
** Created: Sun Dec 12 05:56:00 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcfixturemode_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcfixturemode_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCFixtureMode_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x08,
      36,   20,   20,   20, 0x08,
      49,   20,   20,   20, 0x08,
      56,   20,   20,   20, 0x08,
      67,   20,   20,   20, 0x08,
      83,   20,   20,   20, 0x08,
      99,   20,   20,   20, 0x08,
     115,   20,   20,   20, 0x08,
     132,   20,   20,   20, 0x08,
     143,   20,   20,   20, 0x08,
     159,   20,   20,   20, 0x08,
     166,   20,   20,   20, 0x08,
     173,   20,   20,   20, 0x08,
     189,   20,   20,   20, 0x08,
     202,   20,   20,   20, 0x08,
     209,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCFixtureMode_Test[] = {
    "QLCFixtureMode_Test\0\0initTestCase()\0"
    "fixtureDef()\0name()\0physical()\0"
    "insertChannel()\0removeChannel()\0"
    "channelByName()\0channelByIndex()\0"
    "channels()\0channelNumber()\0copy()\0"
    "load()\0loadWrongRoot()\0loadNoName()\0"
    "save()\0cleanupTestCase()\0"
};

const QMetaObject QLCFixtureMode_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCFixtureMode_Test,
      qt_meta_data_QLCFixtureMode_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCFixtureMode_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCFixtureMode_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCFixtureMode_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCFixtureMode_Test))
        return static_cast<void*>(const_cast< QLCFixtureMode_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCFixtureMode_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initTestCase(); break;
        case 1: fixtureDef(); break;
        case 2: name(); break;
        case 3: physical(); break;
        case 4: insertChannel(); break;
        case 5: removeChannel(); break;
        case 6: channelByName(); break;
        case 7: channelByIndex(); break;
        case 8: channels(); break;
        case 9: channelNumber(); break;
        case 10: copy(); break;
        case 11: load(); break;
        case 12: loadWrongRoot(); break;
        case 13: loadNoName(); break;
        case 14: save(); break;
        case 15: cleanupTestCase(); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
