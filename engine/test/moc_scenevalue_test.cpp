/****************************************************************************
** Meta object code from reading C++ file 'scenevalue_test.h'
**
** Created: Sun Dec 12 05:56:08 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scenevalue_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scenevalue_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SceneValue_Test[] = {

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
      17,   16,   16,   16, 0x08,
      27,   16,   16,   16, 0x08,
      38,   16,   16,   16, 0x08,
      52,   16,   16,   16, 0x08,
      68,   16,   16,   16, 0x08,
      87,   16,   16,   16, 0x08,
     104,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SceneValue_Test[] = {
    "SceneValue_Test\0\0initial()\0lessThan()\0"
    "loadSuccess()\0loadWrongRoot()\0"
    "loadWrongFixture()\0loadWrongValue()\0"
    "save()\0"
};

const QMetaObject SceneValue_Test::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SceneValue_Test,
      qt_meta_data_SceneValue_Test, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SceneValue_Test::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SceneValue_Test::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SceneValue_Test::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SceneValue_Test))
        return static_cast<void*>(const_cast< SceneValue_Test*>(this));
    return QObject::qt_metacast(_clname);
}

int SceneValue_Test::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: initial(); break;
        case 1: lessThan(); break;
        case 2: loadSuccess(); break;
        case 3: loadWrongRoot(); break;
        case 4: loadWrongFixture(); break;
        case 5: loadWrongValue(); break;
        case 6: save(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
