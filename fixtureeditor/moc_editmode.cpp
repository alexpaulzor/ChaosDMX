/****************************************************************************
** Meta object code from reading C++ file 'editmode.h'
**
** Created: Sun Dec 12 05:59:23 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editmode.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editmode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditMode[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x09,
      34,    9,    9,    9, 0x09,
      61,    9,    9,    9, 0x09,
      87,    9,    9,    9, 0x09,
     113,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EditMode[] = {
    "EditMode\0\0slotAddChannelClicked()\0"
    "slotRemoveChannelClicked()\0"
    "slotRaiseChannelClicked()\0"
    "slotLowerChannelClicked()\0accept()\0"
};

const QMetaObject EditMode::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditMode,
      qt_meta_data_EditMode, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditMode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditMode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditMode))
        return static_cast<void*>(const_cast< EditMode*>(this));
    if (!strcmp(_clname, "Ui_EditMode"))
        return static_cast< Ui_EditMode*>(const_cast< EditMode*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAddChannelClicked(); break;
        case 1: slotRemoveChannelClicked(); break;
        case 2: slotRaiseChannelClicked(); break;
        case 3: slotLowerChannelClicked(); break;
        case 4: accept(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
