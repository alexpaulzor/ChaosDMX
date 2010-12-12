/****************************************************************************
** Meta object code from reading C++ file 'monitor.h'
**
** Created: Sun Dec 12 05:58:28 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "monitor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'monitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Monitor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    9,    8,    8, 0x05,
      58,    9,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,    8,    8,    8, 0x09,
     114,    8,    8,    8, 0x09,
     142,    8,    8,    8, 0x09,
     172,  168,    8,    8, 0x09,
     205,  198,    8,    8, 0x09,
     236,  198,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Monitor[] = {
    "Monitor\0\0style\0"
    "channelStyleChanged(Monitor::ChannelStyle)\0"
    "valueStyleChanged(Monitor::ValueStyle)\0"
    "slotChooseFont()\0slotChannelStyleTriggered()\0"
    "slotValueStyleTriggered()\0doc\0"
    "slotDocumentChanged(Doc*)\0fxi_id\0"
    "slotFixtureAdded(t_fixture_id)\0"
    "slotFixtureChanged(t_fixture_id)\0"
};

const QMetaObject Monitor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Monitor,
      qt_meta_data_Monitor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Monitor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Monitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Monitor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Monitor))
        return static_cast<void*>(const_cast< Monitor*>(this));
    return QWidget::qt_metacast(_clname);
}

int Monitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: channelStyleChanged((*reinterpret_cast< Monitor::ChannelStyle(*)>(_a[1]))); break;
        case 1: valueStyleChanged((*reinterpret_cast< Monitor::ValueStyle(*)>(_a[1]))); break;
        case 2: slotChooseFont(); break;
        case 3: slotChannelStyleTriggered(); break;
        case 4: slotValueStyleTriggered(); break;
        case 5: slotDocumentChanged((*reinterpret_cast< Doc*(*)>(_a[1]))); break;
        case 6: slotFixtureAdded((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        case 7: slotFixtureChanged((*reinterpret_cast< t_fixture_id(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Monitor::channelStyleChanged(Monitor::ChannelStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Monitor::valueStyleChanged(Monitor::ValueStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
