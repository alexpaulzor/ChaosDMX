/****************************************************************************
** Meta object code from reading C++ file 'virtualconsole.h'
**
** Created: Sun Dec 12 05:58:51 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "virtualconsole.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'virtualconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VirtualConsole[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   16,   15,   15, 0x05,
      53,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   15,   15,   15, 0x09,
     109,   15,   15,   15, 0x0a,
     125,   15,   15,   15, 0x0a,
     147,   15,   15,   15, 0x0a,
     163,   15,   15,   15, 0x0a,
     185,   15,   15,   15, 0x0a,
     200,   15,   15,   15, 0x0a,
     217,   15,   15,   15, 0x0a,
     232,   15,   15,   15, 0x0a,
     251,   15,   15,   15, 0x0a,
     266,   15,   15,   15, 0x0a,
     285,   15,   15,   15, 0x0a,
     305,   15,   15,   15, 0x0a,
     325,   15,   15,   15, 0x0a,
     348,  342,   15,   15, 0x0a,
     374,   15,   15,   15, 0x0a,
     388,   15,   15,   15, 0x0a,
     403,   15,   15,   15, 0x0a,
     419,   15,   15,   15, 0x0a,
     436,   15,   15,   15, 0x0a,
     453,   15,   15,   15, 0x0a,
     474,   15,   15,   15, 0x0a,
     496,   15,   15,   15, 0x0a,
     518,   15,   15,   15, 0x0a,
     539,   15,   15,   15, 0x0a,
     561,   15,   15,   15, 0x0a,
     582,   15,   15,   15, 0x0a,
     593,   15,   15,   15, 0x0a,
     609,   15,   15,   15, 0x0a,
     627,   15,   15,   15, 0x0a,
     645,   15,   15,   15, 0x0a,
     661,   15,   15,   15, 0x0a,
     681,   15,   15,   15, 0x0a,
     714,  701,   15,   15, 0x0a,
     764,  759,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VirtualConsole[] = {
    "VirtualConsole\0\0keySequence\0"
    "keyPressed(QKeySequence)\0"
    "keyReleased(QKeySequence)\0"
    "slotRunningFunctionsChanged()\0"
    "slotAddButton()\0slotAddButtonMatrix()\0"
    "slotAddSlider()\0slotAddSliderMatrix()\0"
    "slotAddXYPad()\0slotAddCueList()\0"
    "slotAddFrame()\0slotAddSoloFrame()\0"
    "slotAddLabel()\0slotToolsSliders()\0"
    "slotToolsSettings()\0slotToolsBlackout()\0"
    "slotToolsPanic()\0state\0slotBlackoutChanged(bool)\0"
    "slotEditCut()\0slotEditCopy()\0"
    "slotEditPaste()\0slotEditDelete()\0"
    "slotEditRename()\0slotEditProperties()\0"
    "slotBackgroundColor()\0slotBackgroundImage()\0"
    "slotBackgroundNone()\0slotForegroundColor()\0"
    "slotForegroundNone()\0slotFont()\0"
    "slotResetFont()\0slotFrameSunken()\0"
    "slotFrameRaised()\0slotFrameNone()\0"
    "slotStackingRaise()\0slotStackingLower()\0"
    "uni,ch,value\0slotInputValueChanged(quint32,quint32,uchar)\0"
    "mode\0slotModeChanged(Doc::Mode)\0"
};

const QMetaObject VirtualConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VirtualConsole,
      qt_meta_data_VirtualConsole, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VirtualConsole::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VirtualConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VirtualConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualConsole))
        return static_cast<void*>(const_cast< VirtualConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int VirtualConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: keyPressed((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 1: keyReleased((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 2: slotRunningFunctionsChanged(); break;
        case 3: slotAddButton(); break;
        case 4: slotAddButtonMatrix(); break;
        case 5: slotAddSlider(); break;
        case 6: slotAddSliderMatrix(); break;
        case 7: slotAddXYPad(); break;
        case 8: slotAddCueList(); break;
        case 9: slotAddFrame(); break;
        case 10: slotAddSoloFrame(); break;
        case 11: slotAddLabel(); break;
        case 12: slotToolsSliders(); break;
        case 13: slotToolsSettings(); break;
        case 14: slotToolsBlackout(); break;
        case 15: slotToolsPanic(); break;
        case 16: slotBlackoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: slotEditCut(); break;
        case 18: slotEditCopy(); break;
        case 19: slotEditPaste(); break;
        case 20: slotEditDelete(); break;
        case 21: slotEditRename(); break;
        case 22: slotEditProperties(); break;
        case 23: slotBackgroundColor(); break;
        case 24: slotBackgroundImage(); break;
        case 25: slotBackgroundNone(); break;
        case 26: slotForegroundColor(); break;
        case 27: slotForegroundNone(); break;
        case 28: slotFont(); break;
        case 29: slotResetFont(); break;
        case 30: slotFrameSunken(); break;
        case 31: slotFrameRaised(); break;
        case 32: slotFrameNone(); break;
        case 33: slotStackingRaise(); break;
        case 34: slotStackingLower(); break;
        case 35: slotInputValueChanged((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< uchar(*)>(_a[3]))); break;
        case 36: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void VirtualConsole::keyPressed(const QKeySequence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VirtualConsole::keyReleased(const QKeySequence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
