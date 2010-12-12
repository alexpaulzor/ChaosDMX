/****************************************************************************
** Meta object code from reading C++ file 'outputmap.h'
**
** Created: Sun Dec 12 05:54:31 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputmap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputmap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,
      50,   39,   10,   10, 0x05,
      86,   39,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OutputMap[] = {
    "OutputMap\0\0state\0blackoutChanged(bool)\0"
    "pluginName\0pluginConfigurationChanged(QString)\0"
    "pluginAdded(QString)\0slotConfigurationChanged()\0"
};

const QMetaObject OutputMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OutputMap,
      qt_meta_data_OutputMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputMap))
        return static_cast<void*>(const_cast< OutputMap*>(this));
    return QObject::qt_metacast(_clname);
}

int OutputMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: blackoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: pluginConfigurationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: pluginAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: slotConfigurationChanged(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OutputMap::blackoutChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutputMap::pluginConfigurationChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OutputMap::pluginAdded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
