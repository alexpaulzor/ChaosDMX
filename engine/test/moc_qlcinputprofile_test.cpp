/****************************************************************************
** Meta object code from reading C++ file 'qlcinputprofile_test.h'
**
** Created: Sun Dec 12 05:56:03 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qlcinputprofile_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcinputprofile_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCInputProfile_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      37,   21,   21,   21, 0x08,
      45,   21,   21,   21, 0x08,
      52,   21,   21,   21, 0x08,
      65,   21,   21,   21, 0x08,
      81,   21,   21,   21, 0x08,
      96,   21,   21,   21, 0x08,
     106,   21,   21,   21, 0x08,
     117,   21,   21,   21, 0x08,
     133,   21,   21,   21, 0x08,
     140,   21,   21,   21, 0x08,
     147,   21,   21,   21, 0x08,
     163,   21,   21,   21, 0x08,
     172,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QLCInputProfile_Test[] = {
    "QLCInputProfile_Test\0\0manufacturer()\0"
    "model()\0name()\0addChannel()\0removeChannel()\0"
    "remapChannel()\0channel()\0channels()\0"
    "channelNumber()\0copy()\0load()\0"
    "loadNoProfile()\0loader()\0save()\0"
};

const QMetaObject QLCInputProfile_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCInputProfile_Test,
      qt_meta_data_QLCInputProfile_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCInputProfile_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCInputProfile_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCInputProfile_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCInputProfile_Test))
        return static_cast<void*>(const_cast< QLCInputProfile_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCInputProfile_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: manufacturer(); break;
        case 1: model(); break;
        case 2: name(); break;
        case 3: addChannel(); break;
        case 4: removeChannel(); break;
        case 5: remapChannel(); break;
        case 6: channel(); break;
        case 7: channels(); break;
        case 8: channelNumber(); break;
        case 9: copy(); break;
        case 10: load(); break;
        case 11: loadNoProfile(); break;
        case 12: loader(); break;
        case 13: save(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
