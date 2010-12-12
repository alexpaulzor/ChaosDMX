/****************************************************************************
** Meta object code from reading C++ file 'addvcbuttonmatrix.h'
**
** Created: Sun Dec 12 05:58:05 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addvcbuttonmatrix.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addvcbuttonmatrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddVCButtonMatrix[] = {

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
      19,   18,   18,   18, 0x09,
      36,   18,   18,   18, 0x09,
      56,   18,   18,   18, 0x09,
      80,   18,   18,   18, 0x09,
     102,   18,   18,   18, 0x09,
     134,  126,   18,   18, 0x09,
     163,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_AddVCButtonMatrix[] = {
    "AddVCButtonMatrix\0\0slotAddClicked()\0"
    "slotRemoveClicked()\0slotHorizontalChanged()\0"
    "slotVerticalChanged()\0slotButtonSizeChanged()\0"
    "toggled\0slotNormalFrameToggled(bool)\0"
    "accept()\0"
};

const QMetaObject AddVCButtonMatrix::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddVCButtonMatrix,
      qt_meta_data_AddVCButtonMatrix, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddVCButtonMatrix::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddVCButtonMatrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddVCButtonMatrix::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddVCButtonMatrix))
        return static_cast<void*>(const_cast< AddVCButtonMatrix*>(this));
    if (!strcmp(_clname, "Ui_AddVCButtonMatrix"))
        return static_cast< Ui_AddVCButtonMatrix*>(const_cast< AddVCButtonMatrix*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddVCButtonMatrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotAddClicked(); break;
        case 1: slotRemoveClicked(); break;
        case 2: slotHorizontalChanged(); break;
        case 3: slotVerticalChanged(); break;
        case 4: slotButtonSizeChanged(); break;
        case 5: slotNormalFrameToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: accept(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
