/****************************************************************************
** Meta object code from reading C++ file 'fixtureeditor.h'
**
** Created: Sun Dec 12 05:59:24 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "fixtureeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixtureeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLCFixtureEditor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   18,   17,   17, 0x09,
      59,   18,   17,   17, 0x09,
      88,   18,   17,   17, 0x09,
     120,  115,   17,   17, 0x09,
     170,   17,   17,   17, 0x09,
     187,   17,   17,   17, 0x09,
     207,   17,   17,   17, 0x09,
     225,   17,   17,   17, 0x09,
     243,   17,   17,   17, 0x09,
     262,   17,   17,   17, 0x09,
     283,   17,   17,   17, 0x09,
     321,  115,   17,   17, 0x09,
     368,   17,   17,   17, 0x09,
     382,   17,   17,   17, 0x09,
     399,   17,   17,   17, 0x09,
     414,   17,   17,   17, 0x09,
     430,   17,   17,   17, 0x09,
     448,   17,   17,   17, 0x09,
     483,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QLCFixtureEditor[] = {
    "QLCFixtureEditor\0\0text\0"
    "slotManufacturerTextEdited(QString)\0"
    "slotModelTextEdited(QString)\0"
    "slotTypeActivated(QString)\0item\0"
    "slotChannelListSelectionChanged(QTreeWidgetItem*)\0"
    "slotAddChannel()\0slotRemoveChannel()\0"
    "slotEditChannel()\0slotCopyChannel()\0"
    "slotPasteChannel()\0slotExpandChannels()\0"
    "slotChannelListContextMenuRequested()\0"
    "slotModeListSelectionChanged(QTreeWidgetItem*)\0"
    "slotAddMode()\0slotRemoveMode()\0"
    "slotEditMode()\0slotCloneMode()\0"
    "slotExpandModes()\0slotModeListContextMenuRequested()\0"
    "slotClipboardChanged()\0"
};

const QMetaObject QLCFixtureEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QLCFixtureEditor,
      qt_meta_data_QLCFixtureEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLCFixtureEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLCFixtureEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLCFixtureEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLCFixtureEditor))
        return static_cast<void*>(const_cast< QLCFixtureEditor*>(this));
    if (!strcmp(_clname, "Ui_FixtureEditor"))
        return static_cast< Ui_FixtureEditor*>(const_cast< QLCFixtureEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QLCFixtureEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotManufacturerTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: slotModelTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: slotTypeActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: slotChannelListSelectionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: slotAddChannel(); break;
        case 5: slotRemoveChannel(); break;
        case 6: slotEditChannel(); break;
        case 7: slotCopyChannel(); break;
        case 8: slotPasteChannel(); break;
        case 9: slotExpandChannels(); break;
        case 10: slotChannelListContextMenuRequested(); break;
        case 11: slotModeListSelectionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 12: slotAddMode(); break;
        case 13: slotRemoveMode(); break;
        case 14: slotEditMode(); break;
        case 15: slotCloneMode(); break;
        case 16: slotExpandModes(); break;
        case 17: slotModeListContextMenuRequested(); break;
        case 18: slotClipboardChanged(); break;
        default: ;
        }
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
