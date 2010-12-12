/****************************************************************************
** Meta object code from reading C++ file 'outputmap_test.h'
**
** Created: Sun Dec 12 05:56:12 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputmap_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputmap_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputMap_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      26,   15,   15,   15, 0x08,
      41,   15,   15,   15, 0x08,
      59,   15,   15,   15, 0x08,
      70,   15,   15,   15, 0x08,
      94,   15,   15,   15, 0x08,
     105,   15,   15,   15, 0x08,
     119,   15,   15,   15, 0x08,
     135,   15,   15,   15, 0x08,
     151,   15,   15,   15, 0x08,
     163,   15,   15,   15, 0x08,
     190,   15,   15,   15, 0x08,
     200,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OutputMap_Test[] = {
    "OutputMap_Test\0\0initial()\0appendPlugin()\0"
    "notOutputPlugin()\0setPatch()\0"
    "claimReleaseDumpReset()\0blackout()\0"
    "pluginNames()\0pluginOutputs()\0"
    "universeNames()\0configure()\0"
    "slotConfigurationChanged()\0mapping()\0"
    "pluginStatus()\0"
};

const QMetaObject OutputMap_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OutputMap_Test,
      qt_meta_data_OutputMap_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputMap_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputMap_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputMap_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputMap_Test))
        return static_cast<void*>(const_cast< OutputMap_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int OutputMap_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: appendPlugin(); break;
        case 2: notOutputPlugin(); break;
        case 3: setPatch(); break;
        case 4: claimReleaseDumpReset(); break;
        case 5: blackout(); break;
        case 6: pluginNames(); break;
        case 7: pluginOutputs(); break;
        case 8: universeNames(); break;
        case 9: configure(); break;
        case 10: slotConfigurationChanged(); break;
        case 11: mapping(); break;
        case 12: pluginStatus(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
