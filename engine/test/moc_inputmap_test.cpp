/****************************************************************************
** Meta object code from reading C++ file 'inputmap_test.h'
**
** Created: Sun Dec 12 05:56:13 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputmap_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmap_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputMap_Test[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      25,   14,   14,   14, 0x08,
      42,   14,   14,   14, 0x08,
      57,   14,   14,   14, 0x08,
      74,   14,   14,   14, 0x08,
      88,   14,   14,   14, 0x08,
     103,   14,   14,   14, 0x08,
     121,   14,   14,   14, 0x08,
     136,   14,   14,   14, 0x08,
     147,   14,   14,   14, 0x08,
     158,   14,   14,   14, 0x08,
     169,   14,   14,   14, 0x08,
     188,   14,   14,   14, 0x08,
     215,   14,   14,   14, 0x08,
     235,   14,   14,   14, 0x08,
     254,   14,   14,   14, 0x08,
     275,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputMap_Test[] = {
    "InputMap_Test\0\0initial()\0editorUniverse()\0"
    "appendPlugin()\0notInputPlugin()\0"
    "pluginNames()\0pluginInputs()\0"
    "configurePlugin()\0pluginStatus()\0"
    "profiles()\0setPatch()\0feedBack()\0"
    "slotValueChanged()\0slotConfigurationChanged()\0"
    "loadInputProfiles()\0inputSourceNames()\0"
    "profileDirectories()\0pluginDirectories()\0"
};

const QMetaObject InputMap_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputMap_Test,
      qt_meta_data_InputMap_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputMap_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputMap_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputMap_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputMap_Test))
        return static_cast<void*>(const_cast< InputMap_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int InputMap_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: editorUniverse(); break;
        case 2: appendPlugin(); break;
        case 3: notInputPlugin(); break;
        case 4: pluginNames(); break;
        case 5: pluginInputs(); break;
        case 6: configurePlugin(); break;
        case 7: pluginStatus(); break;
        case 8: profiles(); break;
        case 9: setPatch(); break;
        case 10: feedBack(); break;
        case 11: slotValueChanged(); break;
        case 12: slotConfigurationChanged(); break;
        case 13: loadInputProfiles(); break;
        case 14: inputSourceNames(); break;
        case 15: profileDirectories(); break;
        case 16: pluginDirectories(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
