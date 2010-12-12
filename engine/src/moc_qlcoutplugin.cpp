/****************************************************************************
** Meta object code from reading C++ file 'qlcoutplugin.h'
**
** Created: Sun Dec 12 05:54:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../plugins/interfaces/qlcoutplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcoutplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCOutPlugin[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QLCOutPlugin[] = {
    "QLCOutPlugin\0\0configurationChanged()\0"
};

const QMetaObject QLCOutPlugin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLCOutPlugin,
      qt_meta_data_QLCOutPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCOutPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCOutPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCOutPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCOutPlugin))
        return static_cast<void*>(const_cast< QLCOutPlugin*>(this));
    return QObject::qt_metacast(_clname);
}

int QLCOutPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: configurationChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QLCOutPlugin::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
