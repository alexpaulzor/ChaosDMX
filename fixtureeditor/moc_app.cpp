/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created: Sun Dec 12 05:59:18 2010
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
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,    4,    4,    4, 0x09,
      38,    4,    4,    4, 0x09,
      53,    4,    4,    4, 0x09,
      68,    4,    4,    4, 0x09,
      85,    4,    4,    4, 0x09,
     100,    4,    4,    4, 0x09,
     116,    4,    4,    4, 0x09,
     132,    4,    4,    4, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_App[] = {
    "App\0\0clipboardChanged()\0slotFileNew()\0"
    "slotFileOpen()\0slotFileSave()\0"
    "slotFileSaveAs()\0slotFileQuit()\0"
    "slotHelpIndex()\0slotHelpAbout()\0"
    "slotHelpAboutQt()\0"
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
        case 0: clipboardChanged(); break;
        case 1: slotFileNew(); break;
        case 2: slotFileOpen(); break;
        case 3: slotFileSave(); break;
        case 4: slotFileSaveAs(); break;
        case 5: slotFileQuit(); break;
        case 6: slotHelpIndex(); break;
        case 7: slotHelpAbout(); break;
        case 8: slotHelpAboutQt(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void App::clipboardChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
