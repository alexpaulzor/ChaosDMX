/****************************************************************************
** Meta object code from reading C++ file 'outputpatcheditor.h'
**
** Created: Sun Dec 12 05:58:31 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputpatcheditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputpatcheditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OutputPatchEditor[] = {

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
      19,   18,   18,   18, 0x0a,
      33,   28,   18,   18, 0x09,
      74,   28,   18,   18, 0x09,
     108,   18,   18,   18, 0x09,
     142,  131,   18,   18, 0x09,
     182,   18,   18,   18, 0x09,
     205,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_OutputPatchEditor[] = {
    "OutputPatchEditor\0\0reject()\0item\0"
    "slotCurrentItemChanged(QTreeWidgetItem*)\0"
    "slotItemChanged(QTreeWidgetItem*)\0"
    "slotConfigureClicked()\0pluginName\0"
    "slotPluginConfigurationChanged(QString)\0"
    "slotReconnectClicked()\0slotZeroBasedDMXClicked()\0"
};

const QMetaObject OutputPatchEditor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OutputPatchEditor,
      qt_meta_data_OutputPatchEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OutputPatchEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OutputPatchEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OutputPatchEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputPatchEditor))
        return static_cast<void*>(const_cast< OutputPatchEditor*>(this));
    if (!strcmp(_clname, "Ui_OutputPatchEditor"))
        return static_cast< Ui_OutputPatchEditor*>(const_cast< OutputPatchEditor*>(this));
    return QDialog::qt_metacast(_clname);
}

int OutputPatchEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: slotCurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: slotItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: slotConfigureClicked(); break;
        case 4: slotPluginConfigurationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: slotReconnectClicked(); break;
        case 6: slotZeroBasedDMXClicked(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
