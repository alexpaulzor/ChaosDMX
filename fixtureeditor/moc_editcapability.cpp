/****************************************************************************
** Meta object code from reading C++ file 'editcapability.h'
**
** Created: Sun Dec 12 05:59:20 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editcapability.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editcapability.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditCapability[] = {

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
      22,   16,   15,   15, 0x0a,
      46,   16,   15,   15, 0x0a,
      75,   70,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditCapability[] = {
    "EditCapability\0\0value\0slotMinSpinChanged(int)\0"
    "slotMaxSpinChanged(int)\0text\0"
    "slotDescriptionEdited(QString)\0"
};

const QMetaObject EditCapability::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditCapability,
      qt_meta_data_EditCapability, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditCapability::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditCapability::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditCapability::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditCapability))
        return static_cast<void*>(const_cast< EditCapability*>(this));
    if (!strcmp(_clname, "Ui_EditCapability"))
        return static_cast< Ui_EditCapability*>(const_cast< EditCapability*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditCapability::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotMinSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: slotMaxSpinChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotDescriptionEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
