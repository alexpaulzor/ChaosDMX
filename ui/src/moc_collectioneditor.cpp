/****************************************************************************
** Meta object code from reading C++ file 'collectioneditor.h'
**
** Created: Sun Dec 12 05:58:12 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "collectioneditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collectioneditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CollectionEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x09,
      47,   17,   17,   17, 0x09,
      57,   17,   17,   17, 0x09,
      70,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_CollectionEditor[] = {
    "CollectionEditor\0\0text\0slotNameEdited(QString)\0"
    "slotAdd()\0slotRemove()\0accept()\0"
};

const QMetaObject CollectionEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CollectionEditor,
      qt_meta_data_CollectionEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CollectionEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CollectionEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CollectionEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CollectionEditor))
        return static_cast<void*>(const_cast< CollectionEditor*>(this));
    if (!strcmp(_clname, "Ui_CollectionEditor"))
        return static_cast< Ui_CollectionEditor*>(const_cast< CollectionEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int CollectionEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: slotAdd(); break;
        case 2: slotRemove(); break;
        case 3: accept(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
