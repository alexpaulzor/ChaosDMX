/****************************************************************************
** Meta object code from reading C++ file 'selectinputchannel.h'
**
** Created: Sun Dec 12 05:58:34 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selectinputchannel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectinputchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SelectInputChannel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x09,
      41,   29,   19,   19, 0x09,
      79,   29,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SelectInputChannel[] = {
    "SelectInputChannel\0\0accept()\0item,column\0"
    "slotItemChanged(QTreeWidgetItem*,int)\0"
    "slotItemDoubleClicked(QTreeWidgetItem*,int)\0"
};

const QMetaObject SelectInputChannel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SelectInputChannel,
      qt_meta_data_SelectInputChannel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SelectInputChannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SelectInputChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SelectInputChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SelectInputChannel))
        return static_cast<void*>(const_cast< SelectInputChannel*>(this));
    if (!strcmp(_clname, "Ui_SelectInputChannel"))
        return static_cast< Ui_SelectInputChannel*>(const_cast< SelectInputChannel*>(this));
    return QDialog::qt_metacast(_clname);
}

int SelectInputChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: accept(); break;
        case 1: slotItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: slotItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
