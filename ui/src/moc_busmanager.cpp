/****************************************************************************
** Meta object code from reading C++ file 'busmanager.h'
**
** Created: Sun Dec 12 05:58:09 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "busmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'busmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BusManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      42,   30,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_BusManager[] = {
    "BusManager\0\0slotEditClicked()\0item,column\0"
    "slotItemChanged(QTreeWidgetItem*,int)\0"
};

const QMetaObject BusManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BusManager,
      qt_meta_data_BusManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BusManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BusManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BusManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BusManager))
        return static_cast<void*>(const_cast< BusManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int BusManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotEditClicked(); break;
        case 1: slotItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE