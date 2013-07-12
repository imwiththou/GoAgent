#ifndef __PYX_HAVE__gevent__core
#define __PYX_HAVE__gevent__core

struct PyGeventLoopObject;
struct PyGeventCallbackObject;
struct PyGeventWatcherObject;
struct PyGeventIOObject;
struct PyGeventTimerObject;
struct PyGeventSignalObject;
struct PyGeventIdleObject;
struct PyGeventPrepareObject;
struct PyGeventForkObject;
struct PyGeventAsyncObject;
struct PyGeventStatObject;

/* "gevent/core.pyx":224
 * 
 * 
 * cdef public class loop [object PyGeventLoopObject, type PyGeventLoop_Type]:             # <<<<<<<<<<<<<<
 *     cdef libev.ev_loop* _ptr
 *     cdef public object error_handler
 */
struct PyGeventLoopObject {
  PyObject_HEAD
  struct __pyx_vtabstruct_6gevent_4core_loop *__pyx_vtab;
  struct ev_loop *_ptr;
  PyObject *error_handler;
  struct ev_prepare _prepare;
  PyObject *_callbacks;
  struct ev_timer _timer0;
  struct ev_timer _periodic_signal_checker;
};

/* "gevent/core.pyx":528
 * 
 * 
 * cdef public class callback [object PyGeventCallbackObject, type PyGeventCallback_Type]:             # <<<<<<<<<<<<<<
 *     cdef public object callback
 *     cdef public tuple args
 */
struct PyGeventCallbackObject {
  PyObject_HEAD
  PyObject *callback;
  PyObject *args;
};

/* "gevent/core.pyx":596
 * 
 * 
 * cdef public class watcher [object PyGeventWatcherObject, type PyGeventWatcher_Type]:             # <<<<<<<<<<<<<<
 *     """Abstract base class for all the watchers"""
 * 
 */
struct PyGeventWatcherObject {
  PyObject_HEAD
};

/* "gevent/core.pyx":621
 * 
 * 
 * cdef public class io(watcher) [object PyGeventIOObject, type PyGeventIO_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventIOObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_io _watcher;
};

/* "gevent/core.pyx":794
 * 
 * 
 * cdef public class timer(watcher) [object PyGeventTimerObject, type PyGeventTimer_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventTimerObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_timer _watcher;
};

/* "gevent/core.pyx":924
 * 
 * 
 * cdef public class signal(watcher) [object PyGeventSignalObject, type PyGeventSignal_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventSignalObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_signal _watcher;
};

/* "gevent/core.pyx":1037
 * 
 * 
 * cdef public class idle(watcher) [object PyGeventIdleObject, type PyGeventIdle_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventIdleObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_idle _watcher;
};

/* "gevent/core.pyx":1144
 * 
 * 
 * cdef public class prepare(watcher) [object PyGeventPrepareObject, type PyGeventPrepare_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventPrepareObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_prepare _watcher;
};

/* "gevent/core.pyx":1251
 * 
 * 
 * cdef public class fork(watcher) [object PyGeventForkObject, type PyGeventFork_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventForkObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_fork _watcher;
};

/* "gevent/core.pyx":1358
 * 
 * 
 * cdef public class async(watcher) [object PyGeventAsyncObject, type PyGeventAsync_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventAsyncObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_async _watcher;
};

/* "gevent/core.pyx":1602
 * 
 * 
 * cdef public class stat(watcher) [object PyGeventStatObject, type PyGeventStat_Type]:             # <<<<<<<<<<<<<<
 * 
 * 
 */
struct PyGeventStatObject {
  struct PyGeventWatcherObject __pyx_base;
  struct PyGeventLoopObject *loop;
  PyObject *_callback;
  PyObject *args;
  int _flags;
  struct ev_stat _watcher;
  PyObject *path;
};

#ifndef __PYX_HAVE_API__gevent__core

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventLoop_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventCallback_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventWatcher_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventIO_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventTimer_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventSignal_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventIdle_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventPrepare_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventFork_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventAsync_Type;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) PyGeventStat_Type;

__PYX_EXTERN_C DL_IMPORT(PyObject) *GEVENT_CORE_EVENTS;

#endif /* !__PYX_HAVE_API__gevent__core */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initcore(void);
#else
PyMODINIT_FUNC PyInit_core(void);
#endif

#endif /* !__PYX_HAVE__gevent__core */
