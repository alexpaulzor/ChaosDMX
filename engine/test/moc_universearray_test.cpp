/****************************************************************************
** Meta object code from reading C++ file 'universearray_test.h'
**
** Created: Sun Dec 12 05:56:11 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "universearray_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'universearray_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UniverseArray_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      30,   19,   19,   19, 0x08,
      46,   19,   19,   19, 0x08,
      60,   19,   19,   19, 0x08,
      70,   19,   19,   19, 0x08,
      80,   19,   19,   19, 0x08,
      93,   19,   19,   19, 0x08,
     101,   19,   19,   19, 0x08,
     109,   19,   19,   19, 0x08,
     132,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UniverseArray_Test[] = {
    "UniverseArray_Test\0\0initial()\0"
    "gMChannelMode()\0gMValueMode()\0gMValue()\0"
    "applyGM()\0setGMValue()\0write()\0reset()\0"
    "setGMValueEfficiency()\0writeEfficiency()\0"
};

const QMetaObject UniverseArray_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UniverseArray_Test,
      qt_meta_data_UniverseArray_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UniverseArray_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UniverseArray_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UniverseArray_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UniverseArray_Test))
        return static_cast<void*>(const_cast< UniverseArray_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int UniverseArray_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: gMChannelMode(); break;
        case 2: gMValueMode(); break;
        case 3: gMValue(); break;
        case 4: applyGM(); break;
        case 5: setGMValue(); break;
        case 6: write(); break;
        case 7: reset(); break;
        case 8: setGMValueEfficiency(); break;
        case 9: writeEfficiency(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
