/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created: Sun Dec 12 05:58:07 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "app.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_App[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    5,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   31,    4,    4, 0x0a,
      71,   65,    4,    4, 0x09,
     106,    4,    4,    4, 0x09,
     135,   65,    4,    4, 0x09,
     157,    4,    4,    4, 0x0a,
     175,    4,    4,    4, 0x0a,
     192,    4,    4,    4, 0x0a,
     214,  209,    4,    4, 0x0a,
     246,    4,  241,    4, 0x0a,
     277,    4,  260,    4, 0x0a,
     292,    4,  260,    4, 0x0a,
     307,    4,  260,    4, 0x0a,
     324,    4,    4,    4, 0x0a,
     339,    4,    4,    4, 0x0a,
     360,    4,    4,    4, 0x0a,
     382,    4,    4,    4, 0x0a,
     399,    4,    4,    4, 0x0a,
     419,    4,    4,    4, 0x0a,
     438,    4,    4,    4, 0x0a,
     454,    4,    4,    4, 0x0a,
     475,    4,    4,    4, 0x0a,
     499,    4,    4,    4, 0x0a,
     515,    4,    4,    4, 0x0a,
     531,    4,    4,    4, 0x0a,
     549,    4,    4,    4, 0x0a,
     588,    4,    4,    4, 0x0a,
     613,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_App[] = {
    "App\0\0doc\0documentChanged(Doc*)\0text\0"
    "slotSetProgressText(QString)\0state\0"
    "slotOutputMapBlackoutChanged(bool)\0"
    "slotFlashBlackoutIndicator()\0"
    "slotDocModified(bool)\0slotModeOperate()\0"
    "slotModeDesign()\0slotModeToggle()\0"
    "mode\0slotModeChanged(Doc::Mode)\0bool\0"
    "slotFileNew()\0QFile::FileError\0"
    "slotFileOpen()\0slotFileSave()\0"
    "slotFileSaveAs()\0slotFileQuit()\0"
    "slotFixtureManager()\0slotFunctionManager()\0"
    "slotBusManager()\0slotOutputManager()\0"
    "slotInputManager()\0slotControlVC()\0"
    "slotControlMonitor()\0slotControlFullScreen()\0"
    "slotHelpIndex()\0slotHelpAbout()\0"
    "slotHelpAboutQt()\0"
    "slotCustomContextMenuRequested(QPoint)\0"
    "slotSetBackgroundImage()\0"
    "slotClearBackgroundImage()\0"
};

const QMetaObject App::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_App,
      qt_meta_data_App, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &App::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_App))
        return static_cast<void*>(const_cast< App*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: documentChanged((*reinterpret_cast< Doc*(*)>(_a[1]))); break;
        case 1: slotSetProgressText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: slotOutputMapBlackoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: slotFlashBlackoutIndicator(); break;
        case 4: slotDocModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: slotModeOperate(); break;
        case 6: slotModeDesign(); break;
        case 7: slotModeToggle(); break;
        case 8: slotModeChanged((*reinterpret_cast< Doc::Mode(*)>(_a[1]))); break;
        case 9: { bool _r = slotFileNew();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { QFile::FileError _r = slotFileOpen();
            if (_a[0]) *reinterpret_cast< QFile::FileError*>(_a[0]) = _r; }  break;
        case 11: { QFile::FileError _r = slotFileSave();
            if (_a[0]) *reinterpret_cast< QFile::FileError*>(_a[0]) = _r; }  break;
        case 12: { QFile::FileError _r = slotFileSaveAs();
            if (_a[0]) *reinterpret_cast< QFile::FileError*>(_a[0]) = _r; }  break;
        case 13: slotFileQuit(); break;
        case 14: slotFixtureManager(); break;
        case 15: slotFunctionManager(); break;
        case 16: slotBusManager(); break;
        case 17: slotOutputManager(); break;
        case 18: slotInputManager(); break;
        case 19: slotControlVC(); break;
        case 20: slotControlMonitor(); break;
        case 21: slotControlFullScreen(); break;
        case 22: slotHelpIndex(); break;
        case 23: slotHelpAbout(); break;
        case 24: slotHelpAboutQt(); break;
        case 25: slotCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 26: slotSetBackgroundImage(); break;
        case 27: slotClearBackgroundImage(); break;
        default: ;
        }
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void App::documentChanged(Doc * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
