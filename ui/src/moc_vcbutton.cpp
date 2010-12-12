/****************************************************************************
** Meta object code from reading C++ file 'vcbutton.h'
**
** Created: Sun Dec 12 05:58:35 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "vcbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vcbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VCButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,    9,    9,    9, 0x0a,
      46,    9,    9,    9, 0x0a,
      74,   62,    9,    9, 0x09,
     103,   62,    9,    9, 0x09,
     156,  133,    9,    9, 0x09,
     205,  201,    9,    9, 0x09,
     240,  201,    9,    9, 0x09,
     275,  201,    9,    9, 0x09,
     320,  310,    9,    9, 0x09,
     361,    9,    9,    9, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_VCButton[] = {
    "VCButton\0\0functionStarting()\0"
    "slotChooseIcon()\0slotResetIcon()\0"
    "keySequence\0slotKeyPressed(QKeySequence)\0"
    "slotKeyReleased(QKeySequence)\0"
    "universe,channel,value\0"
    "slotInputValueChanged(quint32,quint32,uchar)\0"
    "fid\0slotFunctionRemoved(t_function_id)\0"
    "slotFunctionRunning(t_function_id)\0"
    "slotFunctionStopped(t_function_id)\0"
    "fid,state\0slotFunctionFlashing(t_function_id,bool)\0"
    "slotBlinkReady()\0"
};

const QMetaObject VCButton::staticMetaObject = {
    { &VCWidget::staticMetaObject, qt_meta_stringdata_VCButton,
      qt_meta_data_VCButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VCButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VCButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VCButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VCButton))
        return static_cast<void*>(const_cast< VCButton*>(this));
    return VCWidget::qt_metacast(_clname);
}

int VCButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VCWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: functionStarting(); break;
        case 1: slotChooseIcon(); break;
        case 2: slotResetIcon(); break;
        case 3: slotKeyPressed((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 4: slotKeyReleased((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 5: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 6: slotFunctionRemoved((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 7: slotFunctionRunning((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 8: slotFunctionStopped((*reinterpret_cast< t_function_id(*)>(_a[1]))); break;
        case 9: slotFunctionFlashing((*reinterpret_cast< t_function_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: slotBlinkReady(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void VCButton::functionStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
