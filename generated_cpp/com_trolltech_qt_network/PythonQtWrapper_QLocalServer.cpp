#include "PythonQtWrapper_QLocalServer.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qobject.h>

void PythonQtShell_QLocalServer::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "childEvent(QLocalServer*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::childEvent(arg__1);
}
void PythonQtShell_QLocalServer::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "customEvent(QLocalServer*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::customEvent(arg__1);
}
bool  PythonQtShell_QLocalServer::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "event(QLocalServer*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalServer::event(arg__1);
}
bool  PythonQtShell_QLocalServer::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "eventFilter(QLocalServer*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalServer::eventFilter(arg__1, arg__2);
}
bool  PythonQtShell_QLocalServer::hasPendingConnections() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hasPendingConnections");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "hasPendingConnections(QLocalServer*)");
      bool  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalServer::hasPendingConnections();
}
void PythonQtShell_QLocalServer::incomingConnection(quintptr  socketDescriptor)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "incomingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "incomingConnection(QLocalServer*,quintptr )");
    void* args[2] = {NULL, (void*)&socketDescriptor};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::incomingConnection(socketDescriptor);
}
QLocalSocket*  PythonQtShell_QLocalServer::nextPendingConnection()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextPendingConnection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "nextPendingConnection(QLocalServer*)");
      QLocalSocket*  returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((QLocalSocket* *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QLocalServer::nextPendingConnection();
}
void PythonQtShell_QLocalServer::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QLocalServer::staticMetaObject,
      "timerEvent(QLocalServer*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QLocalServer::timerEvent(arg__1);
}
QLocalServer* PythonQtWrapper_QLocalServer::new_QLocalServer(QObject*  parent)
{ 
return new PythonQtShell_QLocalServer(parent); }

QString  PythonQtWrapper_QLocalServer::serverName(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).serverName();
}

bool  PythonQtWrapper_QLocalServer::listen(QLocalServer* theWrappedObject, const QString&  name)
{
return  (*theWrappedObject).listen(name);
}

QAbstractSocket::SocketError  PythonQtWrapper_QLocalServer::serverError(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).serverError();
}

bool  PythonQtWrapper_QLocalServer::waitForNewConnection(QLocalServer* theWrappedObject, int  msec, bool*  timedOut)
{
return  (*theWrappedObject).waitForNewConnection(msec, timedOut);
}

int  PythonQtWrapper_QLocalServer::maxPendingConnections(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).maxPendingConnections();
}

QLocalSocket*  PythonQtWrapper_QLocalServer::nextPendingConnection(QLocalServer* theWrappedObject)
{
return  (*theWrappedObject).nextPendingConnection();
}

void PythonQtWrapper_QLocalServer::close(QLocalServer* theWrappedObject)
{
 (*theWrappedObject).close();
}

QString  PythonQtWrapper_QLocalServer::errorString(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).errorString();
}

void PythonQtWrapper_QLocalServer::setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections)
{
 (*theWrappedObject).setMaxPendingConnections(numConnections);
}

bool  PythonQtWrapper_QLocalServer::hasPendingConnections(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).hasPendingConnections();
}

bool  PythonQtWrapper_QLocalServer::isListening(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).isListening();
}

QString  PythonQtWrapper_QLocalServer::fullServerName(QLocalServer* theWrappedObject) const
{
return  (*theWrappedObject).fullServerName();
}

void PythonQtWrapper_QLocalServer::incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor)
{
 (*((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)).incomingConnection(socketDescriptor);
}
