/****************************************************************************
** Meta object code from reading C++ file 'inputmap.h'
**
** Created: Sun Dec 12 05:54:30 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "inputmap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inputmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   10,    9,    9, 0x05,
      85,   74,    9,    9, 0x05,
     121,   74,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     162,  142,    9,    9, 0x0a,
     202,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_InputMap[] = {
    "InputMap\0\0universe,channel,value\0"
    "inputValueChanged(quint32,quint32,uchar)\0"
    "pluginName\0pluginConfigurationChanged(QString)\0"
    "pluginAdded(QString)\0input,channel,value\0"
    "slotValueChanged(quint32,quint32,uchar)\0"
    "slotConfigurationChanged()\0"
};

const QMetaObject InputMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_InputMap,
      qt_meta_data_InputMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputMap))
        return static_cast<void*>(const_cast< InputMap*>(this));
    return QObject::qt_metacast(_clname);
}

int InputMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: inputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 1: pluginConfigurationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: pluginAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: slotValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 4: slotConfigurationChanged(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void InputMap::inputValueChanged(quint32 _t1, quint32 _t2, uchar _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InputMap::pluginConfigurationChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InputMap::pluginAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
