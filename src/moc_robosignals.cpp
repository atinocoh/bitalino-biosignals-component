/****************************************************************************
** Meta object code from reading C++ file 'robosignals.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "robosignals.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'robosignals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RoboSignals[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      43,   12,   12,   12, 0x0a,
      56,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
      89,   12,   12,   12, 0x0a,
     103,   12,   12,   12, 0x0a,
     118,   12,   12,   12, 0x0a,
     133,   12,   12,   12, 0x0a,
     148,   12,   12,   12, 0x0a,
     162,   12,   12,   12, 0x0a,
     183,   12,   12,   12, 0x0a,
     204,   12,   12,   12, 0x0a,
     225,   12,   12,   12, 0x0a,
     238,   12,   12,   12, 0x0a,
     250,   12,   12,   12, 0x0a,
     275,  271,   12,   12, 0x0a,
     298,   12,   12,   12, 0x0a,
     318,   12,   12,   12, 0x0a,
     337,   12,   12,   12, 0x0a,
     355,   12,   12,   12, 0x0a,
     370,   12,   12,   12, 0x0a,
     384,   12,   12,   12, 0x0a,
     405,   12,   12,   12, 0x0a,
     427,   12,   12,   12, 0x0a,
     449,   12,   12,   12, 0x0a,
     471,   12,   12,   12, 0x0a,
     492,   12,   12,   12, 0x0a,
     511,   12,   12,   12, 0x0a,
     529,   12,   12,   12, 0x0a,
     551,   12,   12,   12, 0x0a,
     572,   12,   12,   12, 0x0a,
     594,   12,   12,   12, 0x0a,
     615,   12,   12,   12, 0x0a,
     631,   12,   12,   12, 0x0a,
     646,   12,   12,   12, 0x0a,
     666,   12,   12,   12, 0x0a,
     685,   12,   12,   12, 0x0a,
     707,   12,   12,   12, 0x0a,
     726,   12,   12,   12, 0x0a,
     748,   12,   12,   12, 0x0a,
     761,   12,   12,   12, 0x0a,
     773,   12,   12,   12, 0x0a,
     789,   12,   12,   12, 0x0a,
     804,   12,   12,   12, 0x0a,
     819,   12,   12,   12, 0x0a,
     836,   12,   12,   12, 0x0a,
     858,   12,   12,   12, 0x0a,
     879,   12,   12,   12, 0x0a,
     899,   12,   12,   12, 0x0a,
     918,   12,   12,   12, 0x0a,
     934,   12,   12,   12, 0x0a,
     947,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RoboSignals[] = {
    "RoboSignals\0\0decrementarRelojCalibracion()\0"
    "lecturaAcc()\0startCalibracionEmg()\0"
    "nuevaMac()\0checkBoxEmg()\0checkBoxAccX()\0"
    "checkBoxAccY()\0checkBoxAccZ()\0"
    "checkBoxEcg()\0checkBoxFilterAccX()\0"
    "checkBoxFilterAccY()\0checkBoxFilterAccZ()\0"
    "startDebug()\0stopDebug()\0seleccionarCaptura()\0"
    "mac\0introducirMac(QString)\0"
    "connectToBITalino()\0startAdquisition()\0"
    "stopAdquisition()\0startCapture()\0"
    "stopCapture()\0pintarThresholdEmg()\0"
    "pintarThresholdAccX()\0pintarThresholdAccY()\0"
    "pintarThresholdAccZ()\0pintarThresholdEcg()\0"
    "startButterworth()\0stopButterworth()\0"
    "startButterworthAcc()\0stopButterworthAcc()\0"
    "startButterworthEcg()\0stopButterworthEcg()\0"
    "startMediaEcg()\0stopMediaEcg()\0"
    "startDeteccionEcg()\0stopDeteccionEcg()\0"
    "cambioDownSampleEcg()\0cambioDownSample()\0"
    "cambioDownSampleAcc()\0startMedia()\0"
    "stopMedia()\0startMediaAcc()\0stopMediaAcc()\0"
    "masEscalaEmg()\0menosEscalaEmg()\0"
    "startDeteccionPicos()\0stopDeteccionPicos()\0"
    "startDeteccionAcc()\0stopDeteccionAcc()\0"
    "tabConnection()\0readFrames()\0timeoutEcg()\0"
};

void RoboSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RoboSignals *_t = static_cast<RoboSignals *>(_o);
        switch (_id) {
        case 0: _t->decrementarRelojCalibracion(); break;
        case 1: _t->lecturaAcc(); break;
        case 2: _t->startCalibracionEmg(); break;
        case 3: _t->nuevaMac(); break;
        case 4: _t->checkBoxEmg(); break;
        case 5: _t->checkBoxAccX(); break;
        case 6: _t->checkBoxAccY(); break;
        case 7: _t->checkBoxAccZ(); break;
        case 8: _t->checkBoxEcg(); break;
        case 9: _t->checkBoxFilterAccX(); break;
        case 10: _t->checkBoxFilterAccY(); break;
        case 11: _t->checkBoxFilterAccZ(); break;
        case 12: _t->startDebug(); break;
        case 13: _t->stopDebug(); break;
        case 14: _t->seleccionarCaptura(); break;
        case 15: _t->introducirMac((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->connectToBITalino(); break;
        case 17: _t->startAdquisition(); break;
        case 18: _t->stopAdquisition(); break;
        case 19: _t->startCapture(); break;
        case 20: _t->stopCapture(); break;
        case 21: _t->pintarThresholdEmg(); break;
        case 22: _t->pintarThresholdAccX(); break;
        case 23: _t->pintarThresholdAccY(); break;
        case 24: _t->pintarThresholdAccZ(); break;
        case 25: _t->pintarThresholdEcg(); break;
        case 26: _t->startButterworth(); break;
        case 27: _t->stopButterworth(); break;
        case 28: _t->startButterworthAcc(); break;
        case 29: _t->stopButterworthAcc(); break;
        case 30: _t->startButterworthEcg(); break;
        case 31: _t->stopButterworthEcg(); break;
        case 32: _t->startMediaEcg(); break;
        case 33: _t->stopMediaEcg(); break;
        case 34: _t->startDeteccionEcg(); break;
        case 35: _t->stopDeteccionEcg(); break;
        case 36: _t->cambioDownSampleEcg(); break;
        case 37: _t->cambioDownSample(); break;
        case 38: _t->cambioDownSampleAcc(); break;
        case 39: _t->startMedia(); break;
        case 40: _t->stopMedia(); break;
        case 41: _t->startMediaAcc(); break;
        case 42: _t->stopMediaAcc(); break;
        case 43: _t->masEscalaEmg(); break;
        case 44: _t->menosEscalaEmg(); break;
        case 45: _t->startDeteccionPicos(); break;
        case 46: _t->stopDeteccionPicos(); break;
        case 47: _t->startDeteccionAcc(); break;
        case 48: _t->stopDeteccionAcc(); break;
        case 49: _t->tabConnection(); break;
        case 50: _t->readFrames(); break;
        case 51: _t->timeoutEcg(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RoboSignals::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RoboSignals::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_RoboSignals,
      qt_meta_data_RoboSignals, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RoboSignals::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RoboSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RoboSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RoboSignals))
        return static_cast<void*>(const_cast< RoboSignals*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int RoboSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
