/****************************************************************************
** Meta object code from reading C++ file 'qlcfixturedef_test.h'
**
** Created: Sun Dec 12 05:56:01 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcfixturedef_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcfixturedef_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCFixtureDef_Test[] = {

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
      45,   19,   19,   19, 0x08,
      53,   19,   19,   19, 0x08,
      60,   19,   19,   19, 0x08,
      67,   19,   19,   19, 0x08,
      80,   19,   19,   19, 0x08,
      96,   19,   19,   19, 0x08,
     106,   19,   19,   19, 0x08,
     117,   19,   19,   19, 0x08,
     127,   19,   19,   19, 0x08,
     140,   19,   19,   19, 0x08,
     147,   19,   19,   19, 0x08,
     155,   19,   19,   19, 0x08,
     162,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCFixtureDef_Test[] = {
    "QLCFixtureDef_Test\0\0initial()\0"
    "manufacturer()\0model()\0name()\0type()\0"
    "addChannel()\0removeChannel()\0channel()\0"
    "channels()\0addMode()\0removeMode()\0"
    "mode()\0modes()\0copy()\0saveLoadXML()\0"
};

const QMetaObject QLCFixtureDef_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCFixtureDef_Test,
      qt_meta_data_QLCFixtureDef_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCFixtureDef_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCFixtureDef_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCFixtureDef_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCFixtureDef_Test))
        return static_cast<void*>(const_cast< QLCFixtureDef_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCFixtureDef_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: manufacturer(); break;
        case 2: model(); break;
        case 3: name(); break;
        case 4: type(); break;
        case 5: addChannel(); break;
        case 6: removeChannel(); break;
        case 7: channel(); break;
        case 8: channels(); break;
        case 9: addMode(); break;
        case 10: removeMode(); break;
        case 11: mode(); break;
        case 12: modes(); break;
        case 13: copy(); break;
        case 14: saveLoadXML(); break;
        default: ;
        }
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
