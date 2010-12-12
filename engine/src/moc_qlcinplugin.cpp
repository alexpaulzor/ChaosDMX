/****************************************************************************
** Meta object code from reading C++ file 'qlcinplugin.h'
**
** Created: Sun Dec 12 05:54:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../plugins/interfaces/qlcinplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcinplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCInPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   13,   12,   12, 0x05,
      69,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QLCInPlugin[] = {
    "QLCInPlugin\0\0input,channel,value\0"
    "valueChanged(quint32,quint32,uchar)\0"
    "configurationChanged()\0"
};

const QMetaObject QLCInPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCInPlugin,
      qt_meta_data_QLCInPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCInPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCInPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCInPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCInPlugin))
        return static_cast<void*>(const_cast< QLCInPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCInPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: valueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 1: configurationChanged(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QLCInPlugin::valueChanged(quint32 _t1, quint32 _t2, uchar _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QLCInPlugin::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
