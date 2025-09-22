#include "init.c"
#include "getargs.c"
#include "getargsfast.c"
#include "int_ops.c"
#include "float_ops.c"
#include "str_ops.c"
#include "bytes_ops.c"
#include "list_ops.c"
#include "dict_ops.c"
#include "set_ops.c"
#include "tuple_ops.c"
#include "exc_ops.c"
#include "misc_ops.c"
#include "generic_ops.c"
#include "pythonsupport.c"
#include "__native.h"
#include "__native_internal.h"

PyObject *CPyDef___mypyc___3_CacheItem_setup(PyObject *cpy_r_type);
PyObject *CPyDef__CacheItem(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);

static PyObject *
_CacheItem_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__CacheItem) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3_CacheItem_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
_CacheItem_traverse(faster_async_lru____CacheItemObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->_fut);
    Py_VISIT(self->_later_call);
    return 0;
}

static int
_CacheItem_clear(faster_async_lru____CacheItemObject *self)
{
    Py_CLEAR(self->_fut);
    Py_CLEAR(self->_later_call);
    return 0;
}

static void
_CacheItem_dealloc(faster_async_lru____CacheItemObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _CacheItem_dealloc)
    _CacheItem_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _CacheItem_vtable[1];
static bool
CPyDef__CacheItem_trait_vtable_setup(void)
{
    CPyVTableItem _CacheItem_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__CacheItem___cancel,
    };
    memcpy(_CacheItem_vtable, _CacheItem_vtable_scratch, sizeof(_CacheItem_vtable));
    return 1;
}

static PyObject *
_CacheItem_get_fut(faster_async_lru____CacheItemObject *self, void *closure);
static int
_CacheItem_set_fut(faster_async_lru____CacheItemObject *self, PyObject *value, void *closure);
static PyObject *
_CacheItem_get_later_call(faster_async_lru____CacheItemObject *self, void *closure);
static int
_CacheItem_set_later_call(faster_async_lru____CacheItemObject *self, PyObject *value, void *closure);

static PyGetSetDef _CacheItem_getseters[] = {
    {"fut",
     (getter)_CacheItem_get_fut, (setter)_CacheItem_set_fut,
     NULL, NULL},
    {"later_call",
     (getter)_CacheItem_get_later_call, (setter)_CacheItem_set_later_call,
     NULL, NULL},
    {NULL}  /* Sentinel */
};

static PyMethodDef _CacheItem_methods[] = {
    {"cancel",
     (PyCFunction)CPyPy__CacheItem___cancel,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cancel($self)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__CacheItem_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_CacheItem",
    .tp_new = _CacheItem_new,
    .tp_dealloc = (destructor)_CacheItem_dealloc,
    .tp_traverse = (traverseproc)_CacheItem_traverse,
    .tp_clear = (inquiry)_CacheItem_clear,
    .tp_getset = _CacheItem_getseters,
    .tp_methods = _CacheItem_methods,
    .tp_basicsize = sizeof(faster_async_lru____CacheItemObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_CacheItem()\n--\n\n"),
};
static PyTypeObject *CPyType__CacheItem_template = &CPyType__CacheItem_template_;

PyObject *CPyDef___mypyc___3_CacheItem_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru____CacheItemObject *self;
    self = (faster_async_lru____CacheItemObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _CacheItem_vtable;
    return (PyObject *)self;
}

PyObject *CPyDef__CacheItem(PyObject *cpy_r_args, PyObject *cpy_r_kwargs)
{
    PyObject *self = CPyDef___mypyc___3_CacheItem_setup((PyObject *)CPyType__CacheItem);
    if (self == NULL)
        return NULL;
    int res = CPyType__CacheItem->tp_init(self, cpy_r_args, cpy_r_kwargs);
    if (res < 0) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_CacheItem_get_fut(faster_async_lru____CacheItemObject *self, void *closure)
{
    if (unlikely(self->_fut == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'fut' of '_CacheItem' undefined");
        return NULL;
    }
    CPy_INCREF(self->_fut);
    PyObject *retval = self->_fut;
    return retval;
}

static int
_CacheItem_set_fut(faster_async_lru____CacheItemObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_CacheItem' object attribute 'fut' cannot be deleted");
        return -1;
    }
    if (self->_fut != NULL) {
        CPy_DECREF(self->_fut);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->_fut = tmp;
    return 0;
}

static PyObject *
_CacheItem_get_later_call(faster_async_lru____CacheItemObject *self, void *closure)
{
    if (unlikely(self->_later_call == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute 'later_call' of '_CacheItem' undefined");
        return NULL;
    }
    CPy_INCREF(self->_later_call);
    PyObject *retval = self->_later_call;
    return retval;
}

static int
_CacheItem_set_later_call(faster_async_lru____CacheItemObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_CacheItem' object attribute 'later_call' cannot be deleted");
        return -1;
    }
    if (self->_later_call != NULL) {
        CPy_DECREF(self->_later_call);
    }
    PyObject *tmp;
    tmp = value;
    if (tmp != NULL) goto __LL1;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL1;
    CPy_TypeError("object or None", value); 
    tmp = NULL;
__LL1: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->_later_call = tmp;
    return 0;
}

static PyObject *CPyDunder___get___LRUCacheWrapper(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef__LRUCacheWrapper_____get__(self, instance, owner);
}
static int
_LRUCacheWrapper_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef___mypyc___3_LRUCacheWrapper_setup(PyObject *cpy_r_type);
PyObject *CPyDef__LRUCacheWrapper(PyObject *cpy_r_fn, PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl);

static PyObject *
_LRUCacheWrapper_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__LRUCacheWrapper) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3_LRUCacheWrapper_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__LRUCacheWrapper_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_LRUCacheWrapper_traverse(faster_async_lru____LRUCacheWrapperObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___module__);
    Py_VISIT(self->___name__);
    Py_VISIT(self->___qualname__);
    Py_VISIT(self->___doc__);
    Py_VISIT(self->___annotations__);
    Py_VISIT(self->___dict__);
    Py_VISIT(self->__is_coroutine);
    Py_VISIT(self->___wrapped__);
    Py_VISIT(self->___maxsize);
    Py_VISIT(self->___ttl);
    Py_VISIT(self->___cache);
    if (CPyTagged_CheckLong(self->___hits)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___hits));
    }
    if (CPyTagged_CheckLong(self->___misses)) {
        Py_VISIT(CPyTagged_LongAsObject(self->___misses));
    }
    Py_VISIT(self->___tasks);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
_LRUCacheWrapper_clear(faster_async_lru____LRUCacheWrapperObject *self)
{
    Py_CLEAR(self->___module__);
    Py_CLEAR(self->___name__);
    Py_CLEAR(self->___qualname__);
    Py_CLEAR(self->___doc__);
    Py_CLEAR(self->___annotations__);
    Py_CLEAR(self->___dict__);
    Py_CLEAR(self->__is_coroutine);
    Py_CLEAR(self->___wrapped__);
    Py_CLEAR(self->___maxsize);
    Py_CLEAR(self->___ttl);
    Py_CLEAR(self->___cache);
    if (CPyTagged_CheckLong(self->___hits)) {
        CPyTagged __tmp = self->___hits;
        self->___hits = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    if (CPyTagged_CheckLong(self->___misses)) {
        CPyTagged __tmp = self->___misses;
        self->___misses = CPY_INT_TAG;
        Py_XDECREF(CPyTagged_LongAsObject(__tmp));
    }
    Py_CLEAR(self->___tasks);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
_LRUCacheWrapper_dealloc(faster_async_lru____LRUCacheWrapperObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _LRUCacheWrapper_dealloc)
    _LRUCacheWrapper_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _LRUCacheWrapper_vtable[11];
static bool
CPyDef__LRUCacheWrapper_trait_vtable_setup(void)
{
    CPyVTableItem _LRUCacheWrapper_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__LRUCacheWrapper_____init__,
        (CPyVTableItem)CPyDef__LRUCacheWrapper___cache_invalidate,
        (CPyVTableItem)CPyDef__LRUCacheWrapper___cache_clear,
        (CPyVTableItem)CPyDef__LRUCacheWrapper___cache_close,
        (CPyVTableItem)CPyDef__LRUCacheWrapper___cache_info,
        (CPyVTableItem)CPyDef__LRUCacheWrapper___cache_parameters,
        (CPyVTableItem)CPyDef__LRUCacheWrapper____cache_hit,
        (CPyVTableItem)CPyDef__LRUCacheWrapper____cache_miss,
        (CPyVTableItem)CPyDef__LRUCacheWrapper____task_done_callback,
        (CPyVTableItem)CPyDef__LRUCacheWrapper_____call__,
        (CPyVTableItem)CPyDef__LRUCacheWrapper_____get__,
    };
    memcpy(_LRUCacheWrapper_vtable, _LRUCacheWrapper_vtable_scratch, sizeof(_LRUCacheWrapper_vtable));
    return 1;
}

static PyObject *
_LRUCacheWrapper_get___3_module__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_module__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_name__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_name__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_qualname__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_qualname__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_doc__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_doc__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_annotations__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_annotations__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_dict__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_dict__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get__is_coroutine(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set__is_coroutine(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_wrapped__(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_wrapped__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_maxsize(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_maxsize(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_typed(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_typed(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_ttl(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_ttl(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_cache(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_cache(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_closed(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_closed(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_hits(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_hits(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_misses(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_misses(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapper_get___3_tasks(faster_async_lru____LRUCacheWrapperObject *self, void *closure);
static int
_LRUCacheWrapper_set___3_tasks(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure);

static PyGetSetDef _LRUCacheWrapper_getseters[] = {
    {"__module__",
     (getter)_LRUCacheWrapper_get___3_module__, (setter)_LRUCacheWrapper_set___3_module__,
     NULL, NULL},
    {"__name__",
     (getter)_LRUCacheWrapper_get___3_name__, (setter)_LRUCacheWrapper_set___3_name__,
     NULL, NULL},
    {"__qualname__",
     (getter)_LRUCacheWrapper_get___3_qualname__, (setter)_LRUCacheWrapper_set___3_qualname__,
     NULL, NULL},
    {"__doc__",
     (getter)_LRUCacheWrapper_get___3_doc__, (setter)_LRUCacheWrapper_set___3_doc__,
     NULL, NULL},
    {"__annotations__",
     (getter)_LRUCacheWrapper_get___3_annotations__, (setter)_LRUCacheWrapper_set___3_annotations__,
     NULL, NULL},
    {"__dict__",
     (getter)_LRUCacheWrapper_get___3_dict__, (setter)_LRUCacheWrapper_set___3_dict__,
     NULL, NULL},
    {"_is_coroutine",
     (getter)_LRUCacheWrapper_get__is_coroutine, (setter)_LRUCacheWrapper_set__is_coroutine,
     NULL, NULL},
    {"__wrapped__",
     (getter)_LRUCacheWrapper_get___3_wrapped__, (setter)_LRUCacheWrapper_set___3_wrapped__,
     NULL, NULL},
    {"__maxsize",
     (getter)_LRUCacheWrapper_get___3_maxsize, (setter)_LRUCacheWrapper_set___3_maxsize,
     NULL, NULL},
    {"__typed",
     (getter)_LRUCacheWrapper_get___3_typed, (setter)_LRUCacheWrapper_set___3_typed,
     NULL, NULL},
    {"__ttl",
     (getter)_LRUCacheWrapper_get___3_ttl, (setter)_LRUCacheWrapper_set___3_ttl,
     NULL, NULL},
    {"__cache",
     (getter)_LRUCacheWrapper_get___3_cache, (setter)_LRUCacheWrapper_set___3_cache,
     NULL, NULL},
    {"__closed",
     (getter)_LRUCacheWrapper_get___3_closed, (setter)_LRUCacheWrapper_set___3_closed,
     NULL, NULL},
    {"__hits",
     (getter)_LRUCacheWrapper_get___3_hits, (setter)_LRUCacheWrapper_set___3_hits,
     NULL, NULL},
    {"__misses",
     (getter)_LRUCacheWrapper_get___3_misses, (setter)_LRUCacheWrapper_set___3_misses,
     NULL, NULL},
    {"__tasks",
     (getter)_LRUCacheWrapper_get___3_tasks, (setter)_LRUCacheWrapper_set___3_tasks,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef _LRUCacheWrapper_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy__LRUCacheWrapper_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, fn, maxsize, typed, ttl)\n--\n\n")},
    {"cache_invalidate",
     (PyCFunction)CPyPy__LRUCacheWrapper___cache_invalidate,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_invalidate($self, /, *args, **kwargs)\n--\n\n")},
    {"cache_clear",
     (PyCFunction)CPyPy__LRUCacheWrapper___cache_clear,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_clear($self)\n--\n\n")},
    {"cache_close",
     (PyCFunction)CPyPy__LRUCacheWrapper___cache_close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_close($self, *, wait=False)\n--\n\n")},
    {"cache_info",
     (PyCFunction)CPyPy__LRUCacheWrapper___cache_info,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_info($self)\n--\n\n")},
    {"cache_parameters",
     (PyCFunction)CPyPy__LRUCacheWrapper___cache_parameters,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_parameters($self)\n--\n\n")},
    {"_cache_hit",
     (PyCFunction)CPyPy__LRUCacheWrapper____cache_hit,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_cache_hit($self, key)\n--\n\n")},
    {"_cache_miss",
     (PyCFunction)CPyPy__LRUCacheWrapper____cache_miss,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_cache_miss($self, key)\n--\n\n")},
    {"_task_done_callback",
     (PyCFunction)CPyPy__LRUCacheWrapper____task_done_callback,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_task_done_callback($self, fut, key, task)\n--\n\n")},
    {"__call__",
     (PyCFunction)CPyPy__LRUCacheWrapper_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, /, *fn_args, **fn_kwargs)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy__LRUCacheWrapper_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($self, instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__LRUCacheWrapper_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_LRUCacheWrapper",
    .tp_new = _LRUCacheWrapper_new,
    .tp_dealloc = (destructor)_LRUCacheWrapper_dealloc,
    .tp_traverse = (traverseproc)_LRUCacheWrapper_traverse,
    .tp_clear = (inquiry)_LRUCacheWrapper_clear,
    .tp_getset = _LRUCacheWrapper_getseters,
    .tp_methods = _LRUCacheWrapper_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get___LRUCacheWrapper,
    .tp_init = _LRUCacheWrapper_init,
    .tp_basicsize = sizeof(faster_async_lru____LRUCacheWrapperObject),
    .tp_vectorcall_offset = offsetof(faster_async_lru____LRUCacheWrapperObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("_LRUCacheWrapper(fn, maxsize, typed, ttl)\n--\n\n"),
};
static PyTypeObject *CPyType__LRUCacheWrapper_template = &CPyType__LRUCacheWrapper_template_;

PyObject *CPyDef___mypyc___3_LRUCacheWrapper_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru____LRUCacheWrapperObject *self;
    self = (faster_async_lru____LRUCacheWrapperObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _LRUCacheWrapper_vtable;
    self->vectorcall = CPyPy__LRUCacheWrapper_____call__;
    self->___typed = 2;
    self->___closed = 2;
    self->___hits = CPY_INT_TAG;
    self->___misses = CPY_INT_TAG;
    return (PyObject *)self;
}

PyObject *CPyDef__LRUCacheWrapper(PyObject *cpy_r_fn, PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl)
{
    PyObject *self = CPyDef___mypyc___3_LRUCacheWrapper_setup((PyObject *)CPyType__LRUCacheWrapper);
    if (self == NULL)
        return NULL;
    char res = CPyDef__LRUCacheWrapper_____init__(self, cpy_r_fn, cpy_r_maxsize, cpy_r_typed, cpy_r_ttl);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_LRUCacheWrapper_get___3_module__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___module__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__module__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___module__);
    PyObject *retval = self->___module__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_module__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__module__' cannot be deleted");
        return -1;
    }
    if (self->___module__ != NULL) {
        CPy_DECREF(self->___module__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___module__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_name__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___name__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__name__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___name__);
    PyObject *retval = self->___name__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_name__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__name__' cannot be deleted");
        return -1;
    }
    if (self->___name__ != NULL) {
        CPy_DECREF(self->___name__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___name__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_qualname__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___qualname__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__qualname__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___qualname__);
    PyObject *retval = self->___qualname__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_qualname__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__qualname__' cannot be deleted");
        return -1;
    }
    if (self->___qualname__ != NULL) {
        CPy_DECREF(self->___qualname__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___qualname__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_doc__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___doc__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__doc__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___doc__);
    PyObject *retval = self->___doc__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_doc__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__doc__' cannot be deleted");
        return -1;
    }
    if (self->___doc__ != NULL) {
        CPy_DECREF(self->___doc__);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL2;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL2: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___doc__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_annotations__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___annotations__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__annotations__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___annotations__);
    PyObject *retval = self->___annotations__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_annotations__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__annotations__' cannot be deleted");
        return -1;
    }
    if (self->___annotations__ != NULL) {
        CPy_DECREF(self->___annotations__);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___annotations__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_dict__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___dict__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__dict__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___dict__);
    PyObject *retval = self->___dict__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_dict__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__dict__' cannot be deleted");
        return -1;
    }
    if (self->___dict__ != NULL) {
        CPy_DECREF(self->___dict__);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___dict__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get__is_coroutine(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->__is_coroutine == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_is_coroutine' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->__is_coroutine);
    PyObject *retval = self->__is_coroutine;
    return retval;
}

static int
_LRUCacheWrapper_set__is_coroutine(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '_is_coroutine' cannot be deleted");
        return -1;
    }
    if (self->__is_coroutine != NULL) {
        CPy_DECREF(self->__is_coroutine);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->__is_coroutine = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_wrapped__(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___wrapped__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__wrapped__' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___wrapped__);
    PyObject *retval = self->___wrapped__;
    return retval;
}

static int
_LRUCacheWrapper_set___3_wrapped__(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__wrapped__' cannot be deleted");
        return -1;
    }
    if (self->___wrapped__ != NULL) {
        CPy_DECREF(self->___wrapped__);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->___wrapped__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_maxsize(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___maxsize == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__maxsize' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___maxsize);
    PyObject *retval = self->___maxsize;
    return retval;
}

static int
_LRUCacheWrapper_set___3_maxsize(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__maxsize' cannot be deleted");
        return -1;
    }
    if (self->___maxsize != NULL) {
        CPy_DECREF(self->___maxsize);
    }
    PyObject *tmp;
    if (PyLong_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL3;
    CPy_TypeError("int or None", value); 
    tmp = NULL;
__LL3: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___maxsize = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_typed(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___typed == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__typed' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    PyObject *retval = self->___typed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
_LRUCacheWrapper_set___3_typed(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__typed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->___typed = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_ttl(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___ttl == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__ttl' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___ttl);
    PyObject *retval = self->___ttl;
    return retval;
}

static int
_LRUCacheWrapper_set___3_ttl(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__ttl' cannot be deleted");
        return -1;
    }
    if (self->___ttl != NULL) {
        CPy_DECREF(self->___ttl);
    }
    PyObject *tmp;
    if (CPyFloat_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL4;
    CPy_TypeError("float or None", value); 
    tmp = NULL;
__LL4: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___ttl = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_cache(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___cache == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__cache' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___cache);
    PyObject *retval = self->___cache;
    return retval;
}

static int
_LRUCacheWrapper_set___3_cache(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__cache' cannot be deleted");
        return -1;
    }
    if (self->___cache != NULL) {
        CPy_DECREF(self->___cache);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___cache = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_closed(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___closed == 2)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__closed' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    PyObject *retval = self->___closed ? Py_True : Py_False;
    CPy_INCREF(retval);
    return retval;
}

static int
_LRUCacheWrapper_set___3_closed(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__closed' cannot be deleted");
        return -1;
    }
    char tmp;
    if (unlikely(!PyBool_Check(value))) {
        CPy_TypeError("bool", value); return -1;
    } else
        tmp = value == Py_True;
    self->___closed = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_hits(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___hits == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__hits' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->___hits);
    PyObject *retval = CPyTagged_StealAsObject(self->___hits);
    return retval;
}

static int
_LRUCacheWrapper_set___3_hits(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__hits' cannot be deleted");
        return -1;
    }
    if (self->___hits != CPY_INT_TAG) {
        CPyTagged_DECREF(self->___hits);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->___hits = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_misses(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___misses == CPY_INT_TAG)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__misses' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPyTagged_INCREF(self->___misses);
    PyObject *retval = CPyTagged_StealAsObject(self->___misses);
    return retval;
}

static int
_LRUCacheWrapper_set___3_misses(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__misses' cannot be deleted");
        return -1;
    }
    if (self->___misses != CPY_INT_TAG) {
        CPyTagged_DECREF(self->___misses);
    }
    CPyTagged tmp;
    if (likely(PyLong_Check(value)))
        tmp = CPyTagged_FromObject(value);
    else {
        CPy_TypeError("int", value); return -1;
    }
    CPyTagged_INCREF(tmp);
    self->___misses = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapper_get___3_tasks(faster_async_lru____LRUCacheWrapperObject *self, void *closure)
{
    if (unlikely(self->___tasks == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__tasks' of '_LRUCacheWrapper' undefined");
        return NULL;
    }
    CPy_INCREF(self->___tasks);
    PyObject *retval = self->___tasks;
    return retval;
}

static int
_LRUCacheWrapper_set___3_tasks(faster_async_lru____LRUCacheWrapperObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapper' object attribute '__tasks' cannot be deleted");
        return -1;
    }
    if (self->___tasks != NULL) {
        CPy_DECREF(self->___tasks);
    }
    PyObject *tmp;
    if (likely(PySet_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("set", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___tasks = tmp;
    return 0;
}

static int
_LRUCacheWrapperInstanceMethod_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return 0;
}
PyObject *CPyDef___mypyc___3_LRUCacheWrapperInstanceMethod_setup(PyObject *cpy_r_type);
PyObject *CPyDef__LRUCacheWrapperInstanceMethod(PyObject *cpy_r_wrapper, PyObject *cpy_r_instance);

static PyObject *
_LRUCacheWrapperInstanceMethod_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__LRUCacheWrapperInstanceMethod) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3_LRUCacheWrapperInstanceMethod_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    PyObject *ret = CPyPy__LRUCacheWrapperInstanceMethod_____init__(self, args, kwds);
    if (ret == NULL)
        return NULL;
    return self;
}

static int
_LRUCacheWrapperInstanceMethod_traverse(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___module__);
    Py_VISIT(self->___name__);
    Py_VISIT(self->___qualname__);
    Py_VISIT(self->___doc__);
    Py_VISIT(self->___annotations__);
    Py_VISIT(self->___dict__);
    Py_VISIT(self->__is_coroutine);
    Py_VISIT(self->___wrapped__);
    Py_VISIT(self->___instance);
    Py_VISIT(self->___wrapper);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
_LRUCacheWrapperInstanceMethod_clear(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self)
{
    Py_CLEAR(self->___module__);
    Py_CLEAR(self->___name__);
    Py_CLEAR(self->___qualname__);
    Py_CLEAR(self->___doc__);
    Py_CLEAR(self->___annotations__);
    Py_CLEAR(self->___dict__);
    Py_CLEAR(self->__is_coroutine);
    Py_CLEAR(self->___wrapped__);
    Py_CLEAR(self->___instance);
    Py_CLEAR(self->___wrapper);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
_LRUCacheWrapperInstanceMethod_dealloc(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self)
{
    PyObject_GC_UnTrack(self);
    CPy_TRASHCAN_BEGIN(self, _LRUCacheWrapperInstanceMethod_dealloc)
    _LRUCacheWrapperInstanceMethod_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _LRUCacheWrapperInstanceMethod_vtable[7];
static bool
CPyDef__LRUCacheWrapperInstanceMethod_trait_vtable_setup(void)
{
    CPyVTableItem _LRUCacheWrapperInstanceMethod_vtable_scratch[] = {
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod_____init__,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod___cache_invalidate,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod___cache_clear,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod___cache_close,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod___cache_info,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod___cache_parameters,
        (CPyVTableItem)CPyDef__LRUCacheWrapperInstanceMethod_____call__,
    };
    memcpy(_LRUCacheWrapperInstanceMethod_vtable, _LRUCacheWrapperInstanceMethod_vtable_scratch, sizeof(_LRUCacheWrapperInstanceMethod_vtable));
    return 1;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_module__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_module__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_name__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_name__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_qualname__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_qualname__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_doc__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_doc__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_annotations__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_annotations__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_dict__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_dict__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get__is_coroutine(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set__is_coroutine(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_wrapped__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_wrapped__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_instance(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_instance(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);
static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_wrapper(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure);
static int
_LRUCacheWrapperInstanceMethod_set___3_wrapper(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure);

static PyGetSetDef _LRUCacheWrapperInstanceMethod_getseters[] = {
    {"__module__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_module__, (setter)_LRUCacheWrapperInstanceMethod_set___3_module__,
     NULL, NULL},
    {"__name__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_name__, (setter)_LRUCacheWrapperInstanceMethod_set___3_name__,
     NULL, NULL},
    {"__qualname__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_qualname__, (setter)_LRUCacheWrapperInstanceMethod_set___3_qualname__,
     NULL, NULL},
    {"__doc__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_doc__, (setter)_LRUCacheWrapperInstanceMethod_set___3_doc__,
     NULL, NULL},
    {"__annotations__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_annotations__, (setter)_LRUCacheWrapperInstanceMethod_set___3_annotations__,
     NULL, NULL},
    {"__dict__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_dict__, (setter)_LRUCacheWrapperInstanceMethod_set___3_dict__,
     NULL, NULL},
    {"_is_coroutine",
     (getter)_LRUCacheWrapperInstanceMethod_get__is_coroutine, (setter)_LRUCacheWrapperInstanceMethod_set__is_coroutine,
     NULL, NULL},
    {"__wrapped__",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_wrapped__, (setter)_LRUCacheWrapperInstanceMethod_set___3_wrapped__,
     NULL, NULL},
    {"__instance",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_instance, (setter)_LRUCacheWrapperInstanceMethod_set___3_instance,
     NULL, NULL},
    {"__wrapper",
     (getter)_LRUCacheWrapperInstanceMethod_get___3_wrapper, (setter)_LRUCacheWrapperInstanceMethod_set___3_wrapper,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef _LRUCacheWrapperInstanceMethod_methods[] = {
    {"__init__",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod_____init__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__init__($self, wrapper, instance)\n--\n\n")},
    {"cache_invalidate",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod___cache_invalidate,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_invalidate($self, /, *args, **kwargs)\n--\n\n")},
    {"cache_clear",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod___cache_clear,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_clear($self)\n--\n\n")},
    {"cache_close",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod___cache_close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_close($self, *, cancel=False, return_exceptions=True)\n--\n\n")},
    {"cache_info",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod___cache_info,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_info($self)\n--\n\n")},
    {"cache_parameters",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod___cache_parameters,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("cache_parameters($self)\n--\n\n")},
    {"__call__",
     (PyCFunction)CPyPy__LRUCacheWrapperInstanceMethod_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, /, *fn_args, **fn_kwargs)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__LRUCacheWrapperInstanceMethod_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_LRUCacheWrapperInstanceMethod",
    .tp_new = _LRUCacheWrapperInstanceMethod_new,
    .tp_dealloc = (destructor)_LRUCacheWrapperInstanceMethod_dealloc,
    .tp_traverse = (traverseproc)_LRUCacheWrapperInstanceMethod_traverse,
    .tp_clear = (inquiry)_LRUCacheWrapperInstanceMethod_clear,
    .tp_getset = _LRUCacheWrapperInstanceMethod_getseters,
    .tp_methods = _LRUCacheWrapperInstanceMethod_methods,
    .tp_call = PyVectorcall_Call,
    .tp_init = _LRUCacheWrapperInstanceMethod_init,
    .tp_basicsize = sizeof(faster_async_lru____LRUCacheWrapperInstanceMethodObject),
    .tp_vectorcall_offset = offsetof(faster_async_lru____LRUCacheWrapperInstanceMethodObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("_LRUCacheWrapperInstanceMethod(wrapper, instance)\n--\n\n"),
};
static PyTypeObject *CPyType__LRUCacheWrapperInstanceMethod_template = &CPyType__LRUCacheWrapperInstanceMethod_template_;

PyObject *CPyDef___mypyc___3_LRUCacheWrapperInstanceMethod_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru____LRUCacheWrapperInstanceMethodObject *self;
    self = (faster_async_lru____LRUCacheWrapperInstanceMethodObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _LRUCacheWrapperInstanceMethod_vtable;
    self->vectorcall = CPyPy__LRUCacheWrapperInstanceMethod_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef__LRUCacheWrapperInstanceMethod(PyObject *cpy_r_wrapper, PyObject *cpy_r_instance)
{
    PyObject *self = CPyDef___mypyc___3_LRUCacheWrapperInstanceMethod_setup((PyObject *)CPyType__LRUCacheWrapperInstanceMethod);
    if (self == NULL)
        return NULL;
    char res = CPyDef__LRUCacheWrapperInstanceMethod_____init__(self, cpy_r_wrapper, cpy_r_instance);
    if (res == 2) {
        Py_DECREF(self);
        return NULL;
    }
    return self;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_module__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___module__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__module__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___module__);
    PyObject *retval = self->___module__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_module__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__module__' cannot be deleted");
        return -1;
    }
    if (self->___module__ != NULL) {
        CPy_DECREF(self->___module__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___module__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_name__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___name__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__name__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___name__);
    PyObject *retval = self->___name__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_name__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__name__' cannot be deleted");
        return -1;
    }
    if (self->___name__ != NULL) {
        CPy_DECREF(self->___name__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___name__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_qualname__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___qualname__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__qualname__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___qualname__);
    PyObject *retval = self->___qualname__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_qualname__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__qualname__' cannot be deleted");
        return -1;
    }
    if (self->___qualname__ != NULL) {
        CPy_DECREF(self->___qualname__);
    }
    PyObject *tmp;
    if (likely(PyUnicode_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("str", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___qualname__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_doc__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___doc__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__doc__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___doc__);
    PyObject *retval = self->___doc__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_doc__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__doc__' cannot be deleted");
        return -1;
    }
    if (self->___doc__ != NULL) {
        CPy_DECREF(self->___doc__);
    }
    PyObject *tmp;
    if (PyUnicode_Check(value))
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5;
    if (value == Py_None)
        tmp = value;
    else {
        tmp = NULL;
    }
    if (tmp != NULL) goto __LL5;
    CPy_TypeError("str or None", value); 
    tmp = NULL;
__LL5: ;
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___doc__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_annotations__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___annotations__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__annotations__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___annotations__);
    PyObject *retval = self->___annotations__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_annotations__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__annotations__' cannot be deleted");
        return -1;
    }
    if (self->___annotations__ != NULL) {
        CPy_DECREF(self->___annotations__);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___annotations__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_dict__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___dict__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__dict__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___dict__);
    PyObject *retval = self->___dict__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_dict__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__dict__' cannot be deleted");
        return -1;
    }
    if (self->___dict__ != NULL) {
        CPy_DECREF(self->___dict__);
    }
    PyObject *tmp;
    if (likely(PyDict_Check(value)))
        tmp = value;
    else {
        CPy_TypeError("dict", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF(tmp);
    self->___dict__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get__is_coroutine(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->__is_coroutine == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '_is_coroutine' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->__is_coroutine);
    PyObject *retval = self->__is_coroutine;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set__is_coroutine(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '_is_coroutine' cannot be deleted");
        return -1;
    }
    if (self->__is_coroutine != NULL) {
        CPy_DECREF(self->__is_coroutine);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->__is_coroutine = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_wrapped__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___wrapped__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__wrapped__' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___wrapped__);
    PyObject *retval = self->___wrapped__;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_wrapped__(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__wrapped__' cannot be deleted");
        return -1;
    }
    if (self->___wrapped__ != NULL) {
        CPy_DECREF(self->___wrapped__);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->___wrapped__ = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_instance(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___instance == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__instance' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF(self->___instance);
    PyObject *retval = self->___instance;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_instance(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__instance' cannot be deleted");
        return -1;
    }
    if (self->___instance != NULL) {
        CPy_DECREF(self->___instance);
    }
    PyObject *tmp = value;
    CPy_INCREF(tmp);
    self->___instance = tmp;
    return 0;
}

static PyObject *
_LRUCacheWrapperInstanceMethod_get___3_wrapper(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, void *closure)
{
    if (unlikely(self->___wrapper == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__wrapper' of '_LRUCacheWrapperInstanceMethod' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___wrapper);
    PyObject *retval = self->___wrapper;
    return retval;
}

static int
_LRUCacheWrapperInstanceMethod_set___3_wrapper(faster_async_lru____LRUCacheWrapperInstanceMethodObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'_LRUCacheWrapperInstanceMethod' object attribute '__wrapper' cannot be deleted");
        return -1;
    }
    if (self->___wrapper != NULL) {
        CPy_DECREF_NO_IMM(self->___wrapper);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType__LRUCacheWrapper))
        tmp = value;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___wrapper = tmp;
    return 0;
}

static PyAsyncMethods cache_close__LRUCacheWrapper_gen_as_async = {
    .am_await = CPyDef_cache_close__LRUCacheWrapper_gen_____await__,
};
PyObject *CPyDef___mypyc__cache_close__LRUCacheWrapper_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen(void);

static PyObject *
cache_close__LRUCacheWrapper_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_cache_close__LRUCacheWrapper_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__cache_close__LRUCacheWrapper_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
cache_close__LRUCacheWrapper_gen_traverse(faster_async_lru___cache_close__LRUCacheWrapper_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__tasks);
    Py_VISIT(self->___mypyc_temp__0);
    Py_VISIT(self->___mypyc_generator_attribute__task);
    Py_VISIT(self->___mypyc_temp__2);
    Py_VISIT(self->___mypyc_temp__3.f0);
    Py_VISIT(self->___mypyc_temp__3.f1);
    Py_VISIT(self->___mypyc_temp__3.f2);
    return 0;
}

static int
cache_close__LRUCacheWrapper_gen_clear(faster_async_lru___cache_close__LRUCacheWrapper_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__tasks);
    Py_CLEAR(self->___mypyc_temp__0);
    Py_CLEAR(self->___mypyc_generator_attribute__task);
    Py_CLEAR(self->___mypyc_temp__2);
    Py_CLEAR(self->___mypyc_temp__3.f0);
    Py_CLEAR(self->___mypyc_temp__3.f1);
    Py_CLEAR(self->___mypyc_temp__3.f2);
    return 0;
}

static void
cache_close__LRUCacheWrapper_gen_dealloc(faster_async_lru___cache_close__LRUCacheWrapper_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (cache_close__LRUCacheWrapper_gen_free_instance == NULL) {
        cache_close__LRUCacheWrapper_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        self->___mypyc_generator_attribute__wait = 2;
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__tasks);
        Py_CLEAR(self->___mypyc_temp__0);
        self->___mypyc_temp__1 = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__task);
        Py_CLEAR(self->___mypyc_temp__2);
        Py_CLEAR(self->___mypyc_temp__3.f0);
        Py_CLEAR(self->___mypyc_temp__3.f1);
        Py_CLEAR(self->___mypyc_temp__3.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, cache_close__LRUCacheWrapper_gen_dealloc)
    cache_close__LRUCacheWrapper_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem cache_close__LRUCacheWrapper_gen_vtable[7];
static bool
CPyDef_cache_close__LRUCacheWrapper_gen_trait_vtable_setup(void)
{
    CPyVTableItem cache_close__LRUCacheWrapper_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen_____next__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen___send,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen_____iter__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen___throw,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen___close,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapper_gen_____await__,
    };
    memcpy(cache_close__LRUCacheWrapper_gen_vtable, cache_close__LRUCacheWrapper_gen_vtable_scratch, sizeof(cache_close__LRUCacheWrapper_gen_vtable));
    return 1;
}

static PyMethodDef cache_close__LRUCacheWrapper_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapper_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_cache_close__LRUCacheWrapper_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "cache_close__LRUCacheWrapper_gen",
    .tp_new = cache_close__LRUCacheWrapper_gen_new,
    .tp_dealloc = (destructor)cache_close__LRUCacheWrapper_gen_dealloc,
    .tp_traverse = (traverseproc)cache_close__LRUCacheWrapper_gen_traverse,
    .tp_clear = (inquiry)cache_close__LRUCacheWrapper_gen_clear,
    .tp_methods = cache_close__LRUCacheWrapper_gen_methods,
    .tp_iter = CPyDef_cache_close__LRUCacheWrapper_gen_____iter__,
    .tp_iternext = CPyDef_cache_close__LRUCacheWrapper_gen_____next__,
    .tp_as_async = &cache_close__LRUCacheWrapper_gen_as_async,
    .tp_basicsize = sizeof(faster_async_lru___cache_close__LRUCacheWrapper_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("cache_close__LRUCacheWrapper_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_cache_close__LRUCacheWrapper_gen_template = &CPyType_cache_close__LRUCacheWrapper_gen_template_;

PyObject *CPyDef___mypyc__cache_close__LRUCacheWrapper_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru___cache_close__LRUCacheWrapper_genObject *self;
    if (cache_close__LRUCacheWrapper_gen_free_instance != NULL) {
        self = cache_close__LRUCacheWrapper_gen_free_instance;
        cache_close__LRUCacheWrapper_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru___cache_close__LRUCacheWrapper_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = cache_close__LRUCacheWrapper_gen_vtable;
    self->___mypyc_generator_attribute__wait = 2;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__1 = -113;
    self->___mypyc_temp__3 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen(void)
{
    PyObject *self = CPyDef___mypyc__cache_close__LRUCacheWrapper_gen_setup((PyObject *)CPyType_cache_close__LRUCacheWrapper_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods __call___3__LRUCacheWrapper_gen_as_async = {
    .am_await = CPyDef___call___3__LRUCacheWrapper_gen_____await__,
};
PyObject *CPyDef___mypyc___3__call___3__LRUCacheWrapper_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen(void);

static PyObject *
__call___3__LRUCacheWrapper_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType___call___3__LRUCacheWrapper_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3__call___3__LRUCacheWrapper_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
__call___3__LRUCacheWrapper_gen_traverse(faster_async_lru_____call___3__LRUCacheWrapper_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__fn_args);
    Py_VISIT(self->___mypyc_generator_attribute__fn_kwargs);
    Py_VISIT(self->___mypyc_generator_attribute__loop);
    Py_VISIT(self->___mypyc_generator_attribute__key);
    Py_VISIT(self->___mypyc_generator_attribute__cache);
    Py_VISIT(self->___mypyc_generator_attribute__cache_item);
    Py_VISIT(self->___mypyc_generator_attribute__fut);
    Py_VISIT(self->___mypyc_temp__4);
    Py_VISIT(self->___mypyc_temp__5.f0);
    Py_VISIT(self->___mypyc_temp__5.f1);
    Py_VISIT(self->___mypyc_temp__5.f2);
    Py_VISIT(self->___mypyc_generator_attribute__coro);
    Py_VISIT(self->___mypyc_generator_attribute__task);
    Py_VISIT(self->___mypyc_generator_attribute__maxsize);
    Py_VISIT(self->___mypyc_generator_attribute__dropped_key);
    Py_VISIT(self->___mypyc_temp__6);
    Py_VISIT(self->___mypyc_temp__7.f0);
    Py_VISIT(self->___mypyc_temp__7.f1);
    Py_VISIT(self->___mypyc_temp__7.f2);
    return 0;
}

static int
__call___3__LRUCacheWrapper_gen_clear(faster_async_lru_____call___3__LRUCacheWrapper_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__fn_args);
    Py_CLEAR(self->___mypyc_generator_attribute__fn_kwargs);
    Py_CLEAR(self->___mypyc_generator_attribute__loop);
    Py_CLEAR(self->___mypyc_generator_attribute__key);
    Py_CLEAR(self->___mypyc_generator_attribute__cache);
    Py_CLEAR(self->___mypyc_generator_attribute__cache_item);
    Py_CLEAR(self->___mypyc_generator_attribute__fut);
    Py_CLEAR(self->___mypyc_temp__4);
    Py_CLEAR(self->___mypyc_temp__5.f0);
    Py_CLEAR(self->___mypyc_temp__5.f1);
    Py_CLEAR(self->___mypyc_temp__5.f2);
    Py_CLEAR(self->___mypyc_generator_attribute__coro);
    Py_CLEAR(self->___mypyc_generator_attribute__task);
    Py_CLEAR(self->___mypyc_generator_attribute__maxsize);
    Py_CLEAR(self->___mypyc_generator_attribute__dropped_key);
    Py_CLEAR(self->___mypyc_temp__6);
    Py_CLEAR(self->___mypyc_temp__7.f0);
    Py_CLEAR(self->___mypyc_temp__7.f1);
    Py_CLEAR(self->___mypyc_temp__7.f2);
    return 0;
}

static void
__call___3__LRUCacheWrapper_gen_dealloc(faster_async_lru_____call___3__LRUCacheWrapper_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (__call___3__LRUCacheWrapper_gen_free_instance == NULL) {
        __call___3__LRUCacheWrapper_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__fn_args);
        Py_CLEAR(self->___mypyc_generator_attribute__fn_kwargs);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_generator_attribute__loop);
        Py_CLEAR(self->___mypyc_generator_attribute__key);
        Py_CLEAR(self->___mypyc_generator_attribute__cache);
        Py_CLEAR(self->___mypyc_generator_attribute__cache_item);
        Py_CLEAR(self->___mypyc_generator_attribute__fut);
        Py_CLEAR(self->___mypyc_temp__4);
        Py_CLEAR(self->___mypyc_temp__5.f0);
        Py_CLEAR(self->___mypyc_temp__5.f1);
        Py_CLEAR(self->___mypyc_temp__5.f2);
        Py_CLEAR(self->___mypyc_generator_attribute__coro);
        Py_CLEAR(self->___mypyc_generator_attribute__task);
        Py_CLEAR(self->___mypyc_generator_attribute__maxsize);
        Py_CLEAR(self->___mypyc_generator_attribute__dropped_key);
        Py_CLEAR(self->___mypyc_temp__6);
        Py_CLEAR(self->___mypyc_temp__7.f0);
        Py_CLEAR(self->___mypyc_temp__7.f1);
        Py_CLEAR(self->___mypyc_temp__7.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, __call___3__LRUCacheWrapper_gen_dealloc)
    __call___3__LRUCacheWrapper_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem __call___3__LRUCacheWrapper_gen_vtable[7];
static bool
CPyDef___call___3__LRUCacheWrapper_gen_trait_vtable_setup(void)
{
    CPyVTableItem __call___3__LRUCacheWrapper_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen_____next__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen___send,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen_____iter__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen___throw,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen___close,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapper_gen_____await__,
    };
    memcpy(__call___3__LRUCacheWrapper_gen_vtable, __call___3__LRUCacheWrapper_gen_vtable_scratch, sizeof(__call___3__LRUCacheWrapper_gen_vtable));
    return 1;
}

static PyMethodDef __call___3__LRUCacheWrapper_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapper_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType___call___3__LRUCacheWrapper_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__call____LRUCacheWrapper_gen",
    .tp_new = __call___3__LRUCacheWrapper_gen_new,
    .tp_dealloc = (destructor)__call___3__LRUCacheWrapper_gen_dealloc,
    .tp_traverse = (traverseproc)__call___3__LRUCacheWrapper_gen_traverse,
    .tp_clear = (inquiry)__call___3__LRUCacheWrapper_gen_clear,
    .tp_methods = __call___3__LRUCacheWrapper_gen_methods,
    .tp_iter = CPyDef___call___3__LRUCacheWrapper_gen_____iter__,
    .tp_iternext = CPyDef___call___3__LRUCacheWrapper_gen_____next__,
    .tp_as_async = &__call___3__LRUCacheWrapper_gen_as_async,
    .tp_basicsize = sizeof(faster_async_lru_____call___3__LRUCacheWrapper_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("__call____LRUCacheWrapper_gen()\n--\n\n"),
};
static PyTypeObject *CPyType___call___3__LRUCacheWrapper_gen_template = &CPyType___call___3__LRUCacheWrapper_gen_template_;

PyObject *CPyDef___mypyc___3__call___3__LRUCacheWrapper_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru_____call___3__LRUCacheWrapper_genObject *self;
    if (__call___3__LRUCacheWrapper_gen_free_instance != NULL) {
        self = __call___3__LRUCacheWrapper_gen_free_instance;
        __call___3__LRUCacheWrapper_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru_____call___3__LRUCacheWrapper_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = __call___3__LRUCacheWrapper_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__5 = (tuple_T3OOO) { NULL, NULL, NULL };
    self->___mypyc_temp__7 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen(void)
{
    PyObject *self = CPyDef___mypyc___3__call___3__LRUCacheWrapper_gen_setup((PyObject *)CPyType___call___3__LRUCacheWrapper_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods cache_close__LRUCacheWrapperInstanceMethod_gen_as_async = {
    .am_await = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__,
};
PyObject *CPyDef___mypyc__cache_close__LRUCacheWrapperInstanceMethod_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen(void);

static PyObject *
cache_close__LRUCacheWrapperInstanceMethod_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__cache_close__LRUCacheWrapperInstanceMethod_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
cache_close__LRUCacheWrapperInstanceMethod_gen_traverse(faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_temp__8);
    Py_VISIT(self->___mypyc_temp__9.f0);
    Py_VISIT(self->___mypyc_temp__9.f1);
    Py_VISIT(self->___mypyc_temp__9.f2);
    return 0;
}

static int
cache_close__LRUCacheWrapperInstanceMethod_gen_clear(faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_temp__8);
    Py_CLEAR(self->___mypyc_temp__9.f0);
    Py_CLEAR(self->___mypyc_temp__9.f1);
    Py_CLEAR(self->___mypyc_temp__9.f2);
    return 0;
}

static void
cache_close__LRUCacheWrapperInstanceMethod_gen_dealloc(faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance == NULL) {
        cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        self->___mypyc_generator_attribute__cancel = 2;
        self->___mypyc_generator_attribute__return_exceptions = 2;
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__8);
        Py_CLEAR(self->___mypyc_temp__9.f0);
        Py_CLEAR(self->___mypyc_temp__9.f1);
        Py_CLEAR(self->___mypyc_temp__9.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, cache_close__LRUCacheWrapperInstanceMethod_gen_dealloc)
    cache_close__LRUCacheWrapperInstanceMethod_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem cache_close__LRUCacheWrapperInstanceMethod_gen_vtable[7];
static bool
CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_trait_vtable_setup(void)
{
    CPyVTableItem cache_close__LRUCacheWrapperInstanceMethod_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___send,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___throw,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___close,
        (CPyVTableItem)CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__,
    };
    memcpy(cache_close__LRUCacheWrapperInstanceMethod_gen_vtable, cache_close__LRUCacheWrapperInstanceMethod_gen_vtable_scratch, sizeof(cache_close__LRUCacheWrapperInstanceMethod_gen_vtable));
    return 1;
}

static PyMethodDef cache_close__LRUCacheWrapperInstanceMethod_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "cache_close__LRUCacheWrapperInstanceMethod_gen",
    .tp_new = cache_close__LRUCacheWrapperInstanceMethod_gen_new,
    .tp_dealloc = (destructor)cache_close__LRUCacheWrapperInstanceMethod_gen_dealloc,
    .tp_traverse = (traverseproc)cache_close__LRUCacheWrapperInstanceMethod_gen_traverse,
    .tp_clear = (inquiry)cache_close__LRUCacheWrapperInstanceMethod_gen_clear,
    .tp_methods = cache_close__LRUCacheWrapperInstanceMethod_gen_methods,
    .tp_iter = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__,
    .tp_iternext = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__,
    .tp_as_async = &cache_close__LRUCacheWrapperInstanceMethod_gen_as_async,
    .tp_basicsize = sizeof(faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("cache_close__LRUCacheWrapperInstanceMethod_gen()\n--\n\n"),
};
static PyTypeObject *CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen_template = &CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen_template_;

PyObject *CPyDef___mypyc__cache_close__LRUCacheWrapperInstanceMethod_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *self;
    if (cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance != NULL) {
        self = cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance;
        cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = cache_close__LRUCacheWrapperInstanceMethod_gen_vtable;
    self->___mypyc_generator_attribute__cancel = 2;
    self->___mypyc_generator_attribute__return_exceptions = 2;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__9 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen(void)
{
    PyObject *self = CPyDef___mypyc__cache_close__LRUCacheWrapperInstanceMethod_gen_setup((PyObject *)CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen);
    if (self == NULL)
        return NULL;
    return self;
}


static PyAsyncMethods __call___3__LRUCacheWrapperInstanceMethod_gen_as_async = {
    .am_await = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____await__,
};
PyObject *CPyDef___mypyc___3__call___3__LRUCacheWrapperInstanceMethod_gen_setup(PyObject *cpy_r_type);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen(void);

static PyObject *
__call___3__LRUCacheWrapperInstanceMethod_gen_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType___call___3__LRUCacheWrapperInstanceMethod_gen) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3__call___3__LRUCacheWrapperInstanceMethod_gen_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
__call___3__LRUCacheWrapperInstanceMethod_gen_traverse(faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_generator_attribute__self);
    Py_VISIT(self->___mypyc_generator_attribute__fn_args);
    Py_VISIT(self->___mypyc_generator_attribute__fn_kwargs);
    Py_VISIT(self->___mypyc_temp__10);
    Py_VISIT(self->___mypyc_temp__11.f0);
    Py_VISIT(self->___mypyc_temp__11.f1);
    Py_VISIT(self->___mypyc_temp__11.f2);
    return 0;
}

static int
__call___3__LRUCacheWrapperInstanceMethod_gen_clear(faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *self)
{
    Py_CLEAR(self->___mypyc_generator_attribute__self);
    Py_CLEAR(self->___mypyc_generator_attribute__fn_args);
    Py_CLEAR(self->___mypyc_generator_attribute__fn_kwargs);
    Py_CLEAR(self->___mypyc_temp__10);
    Py_CLEAR(self->___mypyc_temp__11.f0);
    Py_CLEAR(self->___mypyc_temp__11.f1);
    Py_CLEAR(self->___mypyc_temp__11.f2);
    return 0;
}

static void
__call___3__LRUCacheWrapperInstanceMethod_gen_dealloc(faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *self)
{
    PyObject_GC_UnTrack(self);
    if (__call___3__LRUCacheWrapperInstanceMethod_gen_free_instance == NULL) {
        __call___3__LRUCacheWrapperInstanceMethod_gen_free_instance = self;
        Py_CLEAR(self->___mypyc_generator_attribute__self);
        Py_CLEAR(self->___mypyc_generator_attribute__fn_args);
        Py_CLEAR(self->___mypyc_generator_attribute__fn_kwargs);
        self->___mypyc_next_label__ = -113;
        Py_CLEAR(self->___mypyc_temp__10);
        Py_CLEAR(self->___mypyc_temp__11.f0);
        Py_CLEAR(self->___mypyc_temp__11.f1);
        Py_CLEAR(self->___mypyc_temp__11.f2);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, __call___3__LRUCacheWrapperInstanceMethod_gen_dealloc)
    __call___3__LRUCacheWrapperInstanceMethod_gen_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem __call___3__LRUCacheWrapperInstanceMethod_gen_vtable[7];
static bool
CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_trait_vtable_setup(void)
{
    CPyVTableItem __call___3__LRUCacheWrapperInstanceMethod_gen_vtable_scratch[] = {
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____next__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___send,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___throw,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___close,
        (CPyVTableItem)CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____await__,
    };
    memcpy(__call___3__LRUCacheWrapperInstanceMethod_gen_vtable, __call___3__LRUCacheWrapperInstanceMethod_gen_vtable_scratch, sizeof(__call___3__LRUCacheWrapperInstanceMethod_gen_vtable));
    return 1;
}

static PyMethodDef __call___3__LRUCacheWrapperInstanceMethod_gen_methods[] = {
    {"__next__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____next__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__next__()\n--\n\n")},
    {"send",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___send,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("send($arg)\n--\n\n")},
    {"__iter__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__iter__()\n--\n\n")},
    {"throw",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___throw,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR(NULL)},
    {"close",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___close,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("close()\n--\n\n")},
    {"__await__",
     (PyCFunction)CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____await__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__await__()\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType___call___3__LRUCacheWrapperInstanceMethod_gen_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__call____LRUCacheWrapperInstanceMethod_gen",
    .tp_new = __call___3__LRUCacheWrapperInstanceMethod_gen_new,
    .tp_dealloc = (destructor)__call___3__LRUCacheWrapperInstanceMethod_gen_dealloc,
    .tp_traverse = (traverseproc)__call___3__LRUCacheWrapperInstanceMethod_gen_traverse,
    .tp_clear = (inquiry)__call___3__LRUCacheWrapperInstanceMethod_gen_clear,
    .tp_methods = __call___3__LRUCacheWrapperInstanceMethod_gen_methods,
    .tp_iter = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__,
    .tp_iternext = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____next__,
    .tp_as_async = &__call___3__LRUCacheWrapperInstanceMethod_gen_as_async,
    .tp_basicsize = sizeof(faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("__call____LRUCacheWrapperInstanceMethod_gen()\n--\n\n"),
};
static PyTypeObject *CPyType___call___3__LRUCacheWrapperInstanceMethod_gen_template = &CPyType___call___3__LRUCacheWrapperInstanceMethod_gen_template_;

PyObject *CPyDef___mypyc___3__call___3__LRUCacheWrapperInstanceMethod_gen_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *self;
    if (__call___3__LRUCacheWrapperInstanceMethod_gen_free_instance != NULL) {
        self = __call___3__LRUCacheWrapperInstanceMethod_gen_free_instance;
        __call___3__LRUCacheWrapperInstanceMethod_gen_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = __call___3__LRUCacheWrapperInstanceMethod_gen_vtable;
    self->___mypyc_next_label__ = -113;
    self->___mypyc_temp__11 = (tuple_T3OOO) { NULL, NULL, NULL };
    return (PyObject *)self;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen(void)
{
    PyObject *self = CPyDef___mypyc___3__call___3__LRUCacheWrapperInstanceMethod_gen_setup((PyObject *)CPyType___call___3__LRUCacheWrapperInstanceMethod_gen);
    if (self == NULL)
        return NULL;
    return self;
}


PyObject *CPyDef___mypyc___3_make_wrapper_env_setup(PyObject *cpy_r_type);
PyObject *CPyDef__make_wrapper_env(void);

static PyObject *
_make_wrapper_env_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType__make_wrapper_env) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3_make_wrapper_env_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
_make_wrapper_env_traverse(faster_async_lru____make_wrapper_envObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_self__);
    Py_VISIT(self->_maxsize);
    Py_VISIT(self->_ttl);
    Py_VISIT(self->_wrapper);
    return 0;
}

static int
_make_wrapper_env_clear(faster_async_lru____make_wrapper_envObject *self)
{
    Py_CLEAR(self->___mypyc_self__);
    Py_CLEAR(self->_maxsize);
    Py_CLEAR(self->_ttl);
    Py_CLEAR(self->_wrapper);
    return 0;
}

static void
_make_wrapper_env_dealloc(faster_async_lru____make_wrapper_envObject *self)
{
    PyObject_GC_UnTrack(self);
    if (_make_wrapper_env_free_instance == NULL) {
        _make_wrapper_env_free_instance = self;
        Py_CLEAR(self->___mypyc_self__);
        Py_CLEAR(self->_maxsize);
        self->_typed = 2;
        Py_CLEAR(self->_ttl);
        Py_CLEAR(self->_wrapper);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, _make_wrapper_env_dealloc)
    _make_wrapper_env_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem _make_wrapper_env_vtable[1];
static bool
CPyDef__make_wrapper_env_trait_vtable_setup(void)
{
    CPyVTableItem _make_wrapper_env_vtable_scratch[] = {
        NULL
    };
    memcpy(_make_wrapper_env_vtable, _make_wrapper_env_vtable_scratch, sizeof(_make_wrapper_env_vtable));
    return 1;
}

static PyMethodDef _make_wrapper_env_methods[] = {
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType__make_wrapper_env_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "_make_wrapper_env",
    .tp_new = _make_wrapper_env_new,
    .tp_dealloc = (destructor)_make_wrapper_env_dealloc,
    .tp_traverse = (traverseproc)_make_wrapper_env_traverse,
    .tp_clear = (inquiry)_make_wrapper_env_clear,
    .tp_methods = _make_wrapper_env_methods,
    .tp_basicsize = sizeof(faster_async_lru____make_wrapper_envObject),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC,
    .tp_doc = PyDoc_STR("_make_wrapper_env()\n--\n\n"),
};
static PyTypeObject *CPyType__make_wrapper_env_template = &CPyType__make_wrapper_env_template_;

PyObject *CPyDef___mypyc___3_make_wrapper_env_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru____make_wrapper_envObject *self;
    if (_make_wrapper_env_free_instance != NULL) {
        self = _make_wrapper_env_free_instance;
        _make_wrapper_env_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru____make_wrapper_envObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = _make_wrapper_env_vtable;
    self->_typed = 2;
    return (PyObject *)self;
}

PyObject *CPyDef__make_wrapper_env(void)
{
    PyObject *self = CPyDef___mypyc___3_make_wrapper_env_setup((PyObject *)CPyType__make_wrapper_env);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get__wrapper__make_wrapper_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef_wrapper__make_wrapper_obj_____get__(self, instance, owner);
}
PyObject *CPyDef___mypyc__wrapper__make_wrapper_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef_wrapper__make_wrapper_obj(void);

static PyObject *
wrapper__make_wrapper_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType_wrapper__make_wrapper_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc__wrapper__make_wrapper_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
wrapper__make_wrapper_obj_traverse(faster_async_lru___wrapper__make_wrapper_objObject *self, visitproc visit, void *arg)
{
    Py_VISIT(self->___mypyc_env__);
    PyObject_VisitManagedDict((PyObject *)self, visit, arg);
    return 0;
}

static int
wrapper__make_wrapper_obj_clear(faster_async_lru___wrapper__make_wrapper_objObject *self)
{
    Py_CLEAR(self->___mypyc_env__);
    PyObject_ClearManagedDict((PyObject *)self);
    return 0;
}

static void
wrapper__make_wrapper_obj_dealloc(faster_async_lru___wrapper__make_wrapper_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (wrapper__make_wrapper_obj_free_instance == NULL) {
        wrapper__make_wrapper_obj_free_instance = self;
        Py_CLEAR(self->___mypyc_env__);
        return;
    }
    CPy_TRASHCAN_BEGIN(self, wrapper__make_wrapper_obj_dealloc)
    wrapper__make_wrapper_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem wrapper__make_wrapper_obj_vtable[2];
static bool
CPyDef_wrapper__make_wrapper_obj_trait_vtable_setup(void)
{
    CPyVTableItem wrapper__make_wrapper_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef_wrapper__make_wrapper_obj_____call__,
        (CPyVTableItem)CPyDef_wrapper__make_wrapper_obj_____get__,
    };
    memcpy(wrapper__make_wrapper_obj_vtable, wrapper__make_wrapper_obj_vtable_scratch, sizeof(wrapper__make_wrapper_obj_vtable));
    return 1;
}

static PyObject *
wrapper__make_wrapper_obj_get___3_mypyc_env__(faster_async_lru___wrapper__make_wrapper_objObject *self, void *closure);
static int
wrapper__make_wrapper_obj_set___3_mypyc_env__(faster_async_lru___wrapper__make_wrapper_objObject *self, PyObject *value, void *closure);

static PyGetSetDef wrapper__make_wrapper_obj_getseters[] = {
    {"__mypyc_env__",
     (getter)wrapper__make_wrapper_obj_get___3_mypyc_env__, (setter)wrapper__make_wrapper_obj_set___3_mypyc_env__,
     NULL, NULL},
    {"__dict__", PyObject_GenericGetDict, PyObject_GenericSetDict},
    {NULL}  /* Sentinel */
};

static PyMethodDef wrapper__make_wrapper_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy_wrapper__make_wrapper_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($fn)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy_wrapper__make_wrapper_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType_wrapper__make_wrapper_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "wrapper__make_wrapper_obj",
    .tp_new = wrapper__make_wrapper_obj_new,
    .tp_dealloc = (destructor)wrapper__make_wrapper_obj_dealloc,
    .tp_traverse = (traverseproc)wrapper__make_wrapper_obj_traverse,
    .tp_clear = (inquiry)wrapper__make_wrapper_obj_clear,
    .tp_getset = wrapper__make_wrapper_obj_getseters,
    .tp_methods = wrapper__make_wrapper_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get__wrapper__make_wrapper_obj,
    .tp_basicsize = sizeof(faster_async_lru___wrapper__make_wrapper_objObject),
    .tp_vectorcall_offset = offsetof(faster_async_lru___wrapper__make_wrapper_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL | Py_TPFLAGS_MANAGED_DICT,
    .tp_doc = PyDoc_STR("wrapper__make_wrapper_obj()\n--\n\n"),
};
static PyTypeObject *CPyType_wrapper__make_wrapper_obj_template = &CPyType_wrapper__make_wrapper_obj_template_;

PyObject *CPyDef___mypyc__wrapper__make_wrapper_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru___wrapper__make_wrapper_objObject *self;
    if (wrapper__make_wrapper_obj_free_instance != NULL) {
        self = wrapper__make_wrapper_obj_free_instance;
        wrapper__make_wrapper_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru___wrapper__make_wrapper_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = wrapper__make_wrapper_obj_vtable;
    self->vectorcall = CPyPy_wrapper__make_wrapper_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef_wrapper__make_wrapper_obj(void)
{
    PyObject *self = CPyDef___mypyc__wrapper__make_wrapper_obj_setup((PyObject *)CPyType_wrapper__make_wrapper_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyObject *
wrapper__make_wrapper_obj_get___3_mypyc_env__(faster_async_lru___wrapper__make_wrapper_objObject *self, void *closure)
{
    if (unlikely(self->___mypyc_env__ == NULL)) {
        PyErr_SetString(PyExc_AttributeError,
            "attribute '__mypyc_env__' of 'wrapper__make_wrapper_obj' undefined");
        return NULL;
    }
    CPy_INCREF_NO_IMM(self->___mypyc_env__);
    PyObject *retval = self->___mypyc_env__;
    return retval;
}

static int
wrapper__make_wrapper_obj_set___3_mypyc_env__(faster_async_lru___wrapper__make_wrapper_objObject *self, PyObject *value, void *closure)
{
    if (value == NULL) {
        PyErr_SetString(PyExc_AttributeError,
            "'wrapper__make_wrapper_obj' object attribute '__mypyc_env__' cannot be deleted");
        return -1;
    }
    if (self->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(self->___mypyc_env__);
    }
    PyObject *tmp;
    if (likely(Py_TYPE(value) == CPyType__make_wrapper_env))
        tmp = value;
    else {
        CPy_TypeError("faster_async_lru._make_wrapper_env", value); 
        tmp = NULL;
    }
    if (!tmp)
        return -1;
    CPy_INCREF_NO_IMM(tmp);
    self->___mypyc_env__ = tmp;
    return 0;
}

static PyObject *CPyDunder___get____init___3__HashedSeq_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef___init___3__HashedSeq_obj_____get__(self, instance, owner);
}
PyObject *CPyDef___mypyc___3__init___3__HashedSeq_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef___init___3__HashedSeq_obj(void);

static PyObject *
__init___3__HashedSeq_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType___init___3__HashedSeq_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3__init___3__HashedSeq_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
__init___3__HashedSeq_obj_traverse(faster_async_lru_____init___3__HashedSeq_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
__init___3__HashedSeq_obj_clear(faster_async_lru_____init___3__HashedSeq_objObject *self)
{
    return 0;
}

static void
__init___3__HashedSeq_obj_dealloc(faster_async_lru_____init___3__HashedSeq_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (__init___3__HashedSeq_obj_free_instance == NULL) {
        __init___3__HashedSeq_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, __init___3__HashedSeq_obj_dealloc)
    __init___3__HashedSeq_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem __init___3__HashedSeq_obj_vtable[2];
static bool
CPyDef___init___3__HashedSeq_obj_trait_vtable_setup(void)
{
    CPyVTableItem __init___3__HashedSeq_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef___init___3__HashedSeq_obj_____call__,
        (CPyVTableItem)CPyDef___init___3__HashedSeq_obj_____get__,
    };
    memcpy(__init___3__HashedSeq_obj_vtable, __init___3__HashedSeq_obj_vtable_scratch, sizeof(__init___3__HashedSeq_obj_vtable));
    return 1;
}

static PyMethodDef __init___3__HashedSeq_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy___init___3__HashedSeq_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self, tup)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy___init___3__HashedSeq_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType___init___3__HashedSeq_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__init____HashedSeq_obj",
    .tp_new = __init___3__HashedSeq_obj_new,
    .tp_dealloc = (destructor)__init___3__HashedSeq_obj_dealloc,
    .tp_traverse = (traverseproc)__init___3__HashedSeq_obj_traverse,
    .tp_clear = (inquiry)__init___3__HashedSeq_obj_clear,
    .tp_methods = __init___3__HashedSeq_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get____init___3__HashedSeq_obj,
    .tp_basicsize = sizeof(faster_async_lru_____init___3__HashedSeq_objObject),
    .tp_vectorcall_offset = offsetof(faster_async_lru_____init___3__HashedSeq_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__init____HashedSeq_obj()\n--\n\n"),
};
static PyTypeObject *CPyType___init___3__HashedSeq_obj_template = &CPyType___init___3__HashedSeq_obj_template_;

PyObject *CPyDef___mypyc___3__init___3__HashedSeq_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru_____init___3__HashedSeq_objObject *self;
    if (__init___3__HashedSeq_obj_free_instance != NULL) {
        self = __init___3__HashedSeq_obj_free_instance;
        __init___3__HashedSeq_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru_____init___3__HashedSeq_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = __init___3__HashedSeq_obj_vtable;
    self->vectorcall = CPyPy___init___3__HashedSeq_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef___init___3__HashedSeq_obj(void)
{
    PyObject *self = CPyDef___mypyc___3__init___3__HashedSeq_obj_setup((PyObject *)CPyType___init___3__HashedSeq_obj);
    if (self == NULL)
        return NULL;
    return self;
}


static PyObject *CPyDunder___get____hash___3__HashedSeq_obj(PyObject *self, PyObject *instance, PyObject *owner) {
    instance = instance ? instance : Py_None;
    return CPyDef___hash___3__HashedSeq_obj_____get__(self, instance, owner);
}
PyObject *CPyDef___mypyc___3__hash___3__HashedSeq_obj_setup(PyObject *cpy_r_type);
PyObject *CPyDef___hash___3__HashedSeq_obj(void);

static PyObject *
__hash___3__HashedSeq_obj_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    if (type != CPyType___hash___3__HashedSeq_obj) {
        PyErr_SetString(PyExc_TypeError, "interpreted classes cannot inherit from compiled");
        return NULL;
    }
    PyObject *self = CPyDef___mypyc___3__hash___3__HashedSeq_obj_setup((PyObject*)type);
    if (self == NULL)
        return NULL;
    return self;
}

static int
__hash___3__HashedSeq_obj_traverse(faster_async_lru_____hash___3__HashedSeq_objObject *self, visitproc visit, void *arg)
{
    return 0;
}

static int
__hash___3__HashedSeq_obj_clear(faster_async_lru_____hash___3__HashedSeq_objObject *self)
{
    return 0;
}

static void
__hash___3__HashedSeq_obj_dealloc(faster_async_lru_____hash___3__HashedSeq_objObject *self)
{
    PyObject_GC_UnTrack(self);
    if (__hash___3__HashedSeq_obj_free_instance == NULL) {
        __hash___3__HashedSeq_obj_free_instance = self;
        return;
    }
    CPy_TRASHCAN_BEGIN(self, __hash___3__HashedSeq_obj_dealloc)
    __hash___3__HashedSeq_obj_clear(self);
    Py_TYPE(self)->tp_free((PyObject *)self);
    CPy_TRASHCAN_END(self)
}

static CPyVTableItem __hash___3__HashedSeq_obj_vtable[2];
static bool
CPyDef___hash___3__HashedSeq_obj_trait_vtable_setup(void)
{
    CPyVTableItem __hash___3__HashedSeq_obj_vtable_scratch[] = {
        (CPyVTableItem)CPyDef___hash___3__HashedSeq_obj_____call__,
        (CPyVTableItem)CPyDef___hash___3__HashedSeq_obj_____get__,
    };
    memcpy(__hash___3__HashedSeq_obj_vtable, __hash___3__HashedSeq_obj_vtable_scratch, sizeof(__hash___3__HashedSeq_obj_vtable));
    return 1;
}

static PyMethodDef __hash___3__HashedSeq_obj_methods[] = {
    {"__call__",
     (PyCFunction)CPyPy___hash___3__HashedSeq_obj_____call__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__call__($self)\n--\n\n")},
    {"__get__",
     (PyCFunction)CPyPy___hash___3__HashedSeq_obj_____get__,
     METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("__get__($instance, owner)\n--\n\n")},
    {"__setstate__", (PyCFunction)CPyPickle_SetState, METH_O, NULL},
    {"__getstate__", (PyCFunction)CPyPickle_GetState, METH_NOARGS, NULL},
    {NULL}  /* Sentinel */
};

static PyTypeObject CPyType___hash___3__HashedSeq_obj_template_ = {
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "__hash____HashedSeq_obj",
    .tp_new = __hash___3__HashedSeq_obj_new,
    .tp_dealloc = (destructor)__hash___3__HashedSeq_obj_dealloc,
    .tp_traverse = (traverseproc)__hash___3__HashedSeq_obj_traverse,
    .tp_clear = (inquiry)__hash___3__HashedSeq_obj_clear,
    .tp_methods = __hash___3__HashedSeq_obj_methods,
    .tp_call = PyVectorcall_Call,
    .tp_descr_get = CPyDunder___get____hash___3__HashedSeq_obj,
    .tp_basicsize = sizeof(faster_async_lru_____hash___3__HashedSeq_objObject),
    .tp_vectorcall_offset = offsetof(faster_async_lru_____hash___3__HashedSeq_objObject, vectorcall),
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HEAPTYPE | Py_TPFLAGS_BASETYPE | Py_TPFLAGS_HAVE_GC | _Py_TPFLAGS_HAVE_VECTORCALL,
    .tp_doc = PyDoc_STR("__hash____HashedSeq_obj()\n--\n\n"),
};
static PyTypeObject *CPyType___hash___3__HashedSeq_obj_template = &CPyType___hash___3__HashedSeq_obj_template_;

PyObject *CPyDef___mypyc___3__hash___3__HashedSeq_obj_setup(PyObject *cpy_r_type)
{
    PyTypeObject *type = (PyTypeObject*)cpy_r_type;
    faster_async_lru_____hash___3__HashedSeq_objObject *self;
    if (__hash___3__HashedSeq_obj_free_instance != NULL) {
        self = __hash___3__HashedSeq_obj_free_instance;
        __hash___3__HashedSeq_obj_free_instance = NULL;
        Py_SET_REFCNT(self, 1);
        PyObject_GC_Track(self);
        return (PyObject *)self;
    }
    self = (faster_async_lru_____hash___3__HashedSeq_objObject *)type->tp_alloc(type, 0);
    if (self == NULL)
        return NULL;
    self->vtable = __hash___3__HashedSeq_obj_vtable;
    self->vectorcall = CPyPy___hash___3__HashedSeq_obj_____call__;
    return (PyObject *)self;
}

PyObject *CPyDef___hash___3__HashedSeq_obj(void)
{
    PyObject *self = CPyDef___mypyc___3__hash___3__HashedSeq_obj_setup((PyObject *)CPyType___hash___3__HashedSeq_obj);
    if (self == NULL)
        return NULL;
    return self;
}

static PyMethodDef module_methods[] = {
    {"_make_wrapper", (PyCFunction)CPyPy__make_wrapper, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_wrapper(maxsize, typed, ttl=None)\n--\n\n") /* docstring */},
    {"alru_cache", (PyCFunction)CPyPy_alru_cache, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("alru_cache(maxsize=128, typed=False, *, ttl=None)\n--\n\n") /* docstring */},
    {"_make_key", (PyCFunction)CPyPy__make_key, METH_FASTCALL | METH_KEYWORDS, PyDoc_STR("_make_key(args, kwds, typed)\n--\n\n") /* docstring */},
    {NULL, NULL, 0, NULL}
};

int CPyExec_faster_async_lru(PyObject *module)
{
    PyObject* modname = NULL;
    modname = PyObject_GetAttrString((PyObject *)CPyModule_faster_async_lru__internal, "__name__");
    CPyStatic_globals = PyModule_GetDict(CPyModule_faster_async_lru__internal);
    if (unlikely(CPyStatic_globals == NULL))
        goto fail;
    CPyType_cache_close__LRUCacheWrapper_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_cache_close__LRUCacheWrapper_gen_template, NULL, modname);
    if (unlikely(!CPyType_cache_close__LRUCacheWrapper_gen))
        goto fail;
    CPyType___call___3__LRUCacheWrapper_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType___call___3__LRUCacheWrapper_gen_template, NULL, modname);
    if (unlikely(!CPyType___call___3__LRUCacheWrapper_gen))
        goto fail;
    CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen_template, NULL, modname);
    if (unlikely(!CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        goto fail;
    CPyType___call___3__LRUCacheWrapperInstanceMethod_gen = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType___call___3__LRUCacheWrapperInstanceMethod_gen_template, NULL, modname);
    if (unlikely(!CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        goto fail;
    CPyType__make_wrapper_env = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType__make_wrapper_env_template, NULL, modname);
    if (unlikely(!CPyType__make_wrapper_env))
        goto fail;
    CPyType_wrapper__make_wrapper_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType_wrapper__make_wrapper_obj_template, NULL, modname);
    if (unlikely(!CPyType_wrapper__make_wrapper_obj))
        goto fail;
    CPyType___init___3__HashedSeq_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType___init___3__HashedSeq_obj_template, NULL, modname);
    if (unlikely(!CPyType___init___3__HashedSeq_obj))
        goto fail;
    CPyType___hash___3__HashedSeq_obj = (PyTypeObject *)CPyType_FromTemplate((PyObject *)CPyType___hash___3__HashedSeq_obj_template, NULL, modname);
    if (unlikely(!CPyType___hash___3__HashedSeq_obj))
        goto fail;
    if (CPyGlobalsInit() < 0)
        goto fail;
    char result = CPyDef___top_level__();
    if (result == 2)
        goto fail;
    Py_DECREF(modname);
    return 0;
    fail:
    Py_CLEAR(CPyModule_faster_async_lru__internal);
    Py_CLEAR(modname);
    CPy_XDECREF(CPyStatic_partial);
    CPyStatic_partial = NULL;
    CPy_XDECREF(CPyStatic_partialmethod);
    CPyStatic_partialmethod = NULL;
    CPy_XDECREF(CPyStatic_gather);
    CPyStatic_gather = NULL;
    CPy_XDECREF(CPyStatic_get_running_loop);
    CPyStatic_get_running_loop = NULL;
    CPy_XDECREF(CPyStatic_shield);
    CPyStatic_shield = NULL;
    Py_CLEAR(CPyType__CacheParameters);
    Py_CLEAR(CPyType__CacheItem);
    Py_CLEAR(CPyType__LRUCacheWrapper);
    Py_CLEAR(CPyType__LRUCacheWrapperInstanceMethod);
    Py_CLEAR(CPyType__HashedSeq);
    Py_CLEAR(CPyType_cache_close__LRUCacheWrapper_gen);
    Py_CLEAR(CPyType___call___3__LRUCacheWrapper_gen);
    Py_CLEAR(CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen);
    Py_CLEAR(CPyType___call___3__LRUCacheWrapperInstanceMethod_gen);
    Py_CLEAR(CPyType__make_wrapper_env);
    Py_CLEAR(CPyType_wrapper__make_wrapper_obj);
    Py_CLEAR(CPyType___init___3__HashedSeq_obj);
    Py_CLEAR(CPyType___hash___3__HashedSeq_obj);
    return -1;
}
static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "faster_async_lru",
    NULL, /* docstring */
    0,       /* size of per-interpreter state of the module */
    module_methods,
    NULL,
};

PyMODINIT_FUNC PyInit_faster_async_lru(void)
{
    if (CPyModule_faster_async_lru__internal) {
        Py_INCREF(CPyModule_faster_async_lru__internal);
        return CPyModule_faster_async_lru__internal;
    }
    CPyModule_faster_async_lru__internal = PyModule_Create(&module);
    if (unlikely(CPyModule_faster_async_lru__internal == NULL))
        goto fail;
    if (CPyExec_faster_async_lru(CPyModule_faster_async_lru__internal) != 0)
        goto fail;
    return CPyModule_faster_async_lru__internal;
    fail:
    return NULL;
}

char CPyDef__CacheItem___cancel(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject **cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    char cpy_r_r12;
    cpy_r_r0 = ((faster_async_lru____CacheItemObject *)cpy_r_self)->_later_call;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cancel", "_CacheItem", "later_call", 75, CPyStatic_globals);
        goto CPyL8;
    }
CPyL1: ;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (!cpy_r_r2) goto CPyL7;
    cpy_r_r3 = ((faster_async_lru____CacheItemObject *)cpy_r_self)->_later_call;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cancel", "_CacheItem", "later_call", 76, CPyStatic_globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = cpy_r_r3;
    cpy_r_r5 = CPyStatics[3]; /* 'cancel' */
    PyObject *cpy_r_r6[1] = {cpy_r_r4};
    cpy_r_r7 = (PyObject **)&cpy_r_r6;
    cpy_r_r8 = PyObject_VectorcallMethod(cpy_r_r5, cpy_r_r7, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cancel", 76, CPyStatic_globals);
        goto CPyL9;
    }
    CPy_DECREF(cpy_r_r4);
    if (unlikely(cpy_r_r8 != Py_None)) {
        CPy_TypeError("None", cpy_r_r8); cpy_r_r9 = 2;
    } else
        cpy_r_r9 = 1;
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cancel", 76, CPyStatic_globals);
        goto CPyL8;
    }
    cpy_r_r10 = Py_None;
    if (((faster_async_lru____CacheItemObject *)cpy_r_self)->_later_call != NULL) {
        CPy_DECREF(((faster_async_lru____CacheItemObject *)cpy_r_self)->_later_call);
    }
    ((faster_async_lru____CacheItemObject *)cpy_r_self)->_later_call = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cancel", 77, CPyStatic_globals);
        goto CPyL8;
    }
CPyL7: ;
    return 1;
CPyL8: ;
    cpy_r_r12 = 2;
    return cpy_r_r12;
CPyL9: ;
    CPy_DecRef(cpy_r_r4);
    goto CPyL8;
}

PyObject *CPyPy__CacheItem___cancel(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cancel", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__CacheItem))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._CacheItem", obj_self); 
        goto fail;
    }
    char retval = CPyDef__CacheItem___cancel(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cancel", 74, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fn, PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    tuple_T3OOO cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    tuple_T3OOO cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    tuple_T3OOO cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    char cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    char cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    tuple_T3OOO cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    char cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    tuple_T2II cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    char cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    char cpy_r_r71;
    char cpy_r_r72;
    char cpy_r_r73;
    char cpy_r_r74;
    char cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    PyObject *cpy_r_r78;
    PyObject *cpy_r_r79;
    PyObject *cpy_r_r80;
    char cpy_r_r81;
    char cpy_r_r82;
    char cpy_r_r83;
    char cpy_r_r84;
    PyObject *cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    cpy_r_r0 = CPyStatics[4]; /* '__module__' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_fn, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 90, CPyStatic_globals);
        goto CPyL4;
    }
    if (likely(PyUnicode_Check(cpy_r_r1)))
        cpy_r_r2 = cpy_r_r1;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 90, CPyStatic_globals, "str", cpy_r_r1);
        goto CPyL4;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___module__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___module__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___module__ = cpy_r_r2;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 90, CPyStatic_globals);
    } else
        goto CPyL11;
CPyL4: ;
    cpy_r_r4 = CPy_CatchError();
    cpy_r_r5 = CPyModule_builtins;
    cpy_r_r6 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r7 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 91, CPyStatic_globals);
        goto CPyL9;
    }
    cpy_r_r8 = CPy_ExceptionMatches(cpy_r_r7);
    CPy_DecRef(cpy_r_r7);
    if (cpy_r_r8) goto CPyL8;
    CPy_Reraise();
    if (!0) {
        goto CPyL9;
    } else
        goto CPyL84;
CPyL7: ;
    CPy_Unreachable();
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL11;
CPyL9: ;
    CPy_RestoreExcInfo(cpy_r_r4);
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    cpy_r_r9 = CPy_KeepPropagating();
    if (!cpy_r_r9) goto CPyL83;
    CPy_Unreachable();
CPyL11: ;
    cpy_r_r10 = CPy_GetName(cpy_r_fn);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 94, CPyStatic_globals);
        goto CPyL14;
    }
    if (likely(PyUnicode_Check(cpy_r_r10)))
        cpy_r_r11 = cpy_r_r10;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 94, CPyStatic_globals, "str", cpy_r_r10);
        goto CPyL14;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___name__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___name__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___name__ = cpy_r_r11;
    cpy_r_r12 = 1;
    if (unlikely(!cpy_r_r12)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 94, CPyStatic_globals);
    } else
        goto CPyL21;
CPyL14: ;
    cpy_r_r13 = CPy_CatchError();
    cpy_r_r14 = CPyModule_builtins;
    cpy_r_r15 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r16 = CPyObject_GetAttr(cpy_r_r14, cpy_r_r15);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 95, CPyStatic_globals);
        goto CPyL19;
    }
    cpy_r_r17 = CPy_ExceptionMatches(cpy_r_r16);
    CPy_DecRef(cpy_r_r16);
    if (cpy_r_r17) goto CPyL18;
    CPy_Reraise();
    if (!0) {
        goto CPyL19;
    } else
        goto CPyL85;
CPyL17: ;
    CPy_Unreachable();
CPyL18: ;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL21;
CPyL19: ;
    CPy_RestoreExcInfo(cpy_r_r13);
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    cpy_r_r18 = CPy_KeepPropagating();
    if (!cpy_r_r18) goto CPyL83;
    CPy_Unreachable();
CPyL21: ;
    cpy_r_r19 = CPyStatics[6]; /* '__qualname__' */
    cpy_r_r20 = CPyObject_GetAttr(cpy_r_fn, cpy_r_r19);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 98, CPyStatic_globals);
        goto CPyL24;
    }
    if (likely(PyUnicode_Check(cpy_r_r20)))
        cpy_r_r21 = cpy_r_r20;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 98, CPyStatic_globals, "str", cpy_r_r20);
        goto CPyL24;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___qualname__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___qualname__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___qualname__ = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 98, CPyStatic_globals);
    } else
        goto CPyL31;
CPyL24: ;
    cpy_r_r23 = CPy_CatchError();
    cpy_r_r24 = CPyModule_builtins;
    cpy_r_r25 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r26 = CPyObject_GetAttr(cpy_r_r24, cpy_r_r25);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 99, CPyStatic_globals);
        goto CPyL29;
    }
    cpy_r_r27 = CPy_ExceptionMatches(cpy_r_r26);
    CPy_DecRef(cpy_r_r26);
    if (cpy_r_r27) goto CPyL28;
    CPy_Reraise();
    if (!0) {
        goto CPyL29;
    } else
        goto CPyL86;
CPyL27: ;
    CPy_Unreachable();
CPyL28: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL31;
CPyL29: ;
    CPy_RestoreExcInfo(cpy_r_r23);
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    cpy_r_r28 = CPy_KeepPropagating();
    if (!cpy_r_r28) goto CPyL83;
    CPy_Unreachable();
CPyL31: ;
    cpy_r_r29 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r30 = CPyObject_GetAttr(cpy_r_fn, cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 102, CPyStatic_globals);
        goto CPyL34;
    }
    if (PyUnicode_Check(cpy_r_r30))
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL6;
    if (cpy_r_r30 == Py_None)
        cpy_r_r31 = cpy_r_r30;
    else {
        cpy_r_r31 = NULL;
    }
    if (cpy_r_r31 != NULL) goto __LL6;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 102, CPyStatic_globals, "str or None", cpy_r_r30);
    goto CPyL34;
__LL6: ;
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___doc__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___doc__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___doc__ = cpy_r_r31;
    cpy_r_r32 = 1;
    if (unlikely(!cpy_r_r32)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 102, CPyStatic_globals);
    } else
        goto CPyL41;
CPyL34: ;
    cpy_r_r33 = CPy_CatchError();
    cpy_r_r34 = CPyModule_builtins;
    cpy_r_r35 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r36 = CPyObject_GetAttr(cpy_r_r34, cpy_r_r35);
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 103, CPyStatic_globals);
        goto CPyL39;
    }
    cpy_r_r37 = CPy_ExceptionMatches(cpy_r_r36);
    CPy_DecRef(cpy_r_r36);
    if (cpy_r_r37) goto CPyL38;
    CPy_Reraise();
    if (!0) {
        goto CPyL39;
    } else
        goto CPyL87;
CPyL37: ;
    CPy_Unreachable();
CPyL38: ;
    CPy_RestoreExcInfo(cpy_r_r33);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    goto CPyL41;
CPyL39: ;
    CPy_RestoreExcInfo(cpy_r_r33);
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    cpy_r_r38 = CPy_KeepPropagating();
    if (!cpy_r_r38) goto CPyL83;
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r39 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r40 = CPyObject_GetAttr(cpy_r_fn, cpy_r_r39);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 106, CPyStatic_globals);
        goto CPyL44;
    }
    if (likely(PyDict_Check(cpy_r_r40)))
        cpy_r_r41 = cpy_r_r40;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 106, CPyStatic_globals, "dict", cpy_r_r40);
        goto CPyL44;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___annotations__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___annotations__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___annotations__ = cpy_r_r41;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 106, CPyStatic_globals);
    } else
        goto CPyL51;
CPyL44: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r44 = CPyModule_builtins;
    cpy_r_r45 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 107, CPyStatic_globals);
        goto CPyL49;
    }
    cpy_r_r47 = CPy_ExceptionMatches(cpy_r_r46);
    CPy_DecRef(cpy_r_r46);
    if (cpy_r_r47) goto CPyL48;
    CPy_Reraise();
    if (!0) {
        goto CPyL49;
    } else
        goto CPyL88;
CPyL47: ;
    CPy_Unreachable();
CPyL48: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL51;
CPyL49: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) goto CPyL83;
    CPy_Unreachable();
CPyL51: ;
    cpy_r_r49 = CPyStatics[9]; /* '__dict__' */
    cpy_r_r50 = CPyObject_GetAttr(cpy_r_fn, cpy_r_r49);
    if (unlikely(cpy_r_r50 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 110, CPyStatic_globals);
        goto CPyL55;
    }
    if (likely(PyDict_Check(cpy_r_r50)))
        cpy_r_r51 = cpy_r_r50;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 110, CPyStatic_globals, "dict", cpy_r_r50);
        goto CPyL55;
    }
    cpy_r_r52 = PyDict_Copy(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 110, CPyStatic_globals);
        goto CPyL55;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___dict__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___dict__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___dict__ = cpy_r_r52;
    cpy_r_r53 = 1;
    if (unlikely(!cpy_r_r53)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 110, CPyStatic_globals);
    } else
        goto CPyL62;
CPyL55: ;
    cpy_r_r54 = CPy_CatchError();
    cpy_r_r55 = CPyModule_builtins;
    cpy_r_r56 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r57 = CPyObject_GetAttr(cpy_r_r55, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 111, CPyStatic_globals);
        goto CPyL60;
    }
    cpy_r_r58 = CPy_ExceptionMatches(cpy_r_r57);
    CPy_DecRef(cpy_r_r57);
    if (cpy_r_r58) goto CPyL59;
    CPy_Reraise();
    if (!0) {
        goto CPyL60;
    } else
        goto CPyL89;
CPyL58: ;
    CPy_Unreachable();
CPyL59: ;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    goto CPyL62;
CPyL60: ;
    CPy_RestoreExcInfo(cpy_r_r54);
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    cpy_r_r59 = CPy_KeepPropagating();
    if (!cpy_r_r59) goto CPyL83;
    CPy_Unreachable();
CPyL62: ;
    cpy_r_r60 = CPyModule_sys;
    cpy_r_r61 = CPyStatics[10]; /* 'version_info' */
    cpy_r_r62 = CPyObject_GetAttr(cpy_r_r60, cpy_r_r61);
    if (unlikely(cpy_r_r62 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 115, CPyStatic_globals);
        goto CPyL83;
    }
    if (likely(PyTuple_Check(cpy_r_r62)))
        cpy_r_r63 = cpy_r_r62;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 115, CPyStatic_globals, "tuple", cpy_r_r62);
        goto CPyL83;
    }
    cpy_r_r64.f0 = 6;
    cpy_r_r64.f1 = 28;
    cpy_r_r65 = PyTuple_New(2);
    if (unlikely(cpy_r_r65 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp7 = CPyTagged_StealAsObject(cpy_r_r64.f0);
    PyTuple_SET_ITEM(cpy_r_r65, 0, __tmp7);
    PyObject *__tmp8 = CPyTagged_StealAsObject(cpy_r_r64.f1);
    PyTuple_SET_ITEM(cpy_r_r65, 1, __tmp8);
    cpy_r_r66 = PyObject_RichCompare(cpy_r_r63, cpy_r_r65, 0);
    CPy_DECREF(cpy_r_r63);
    CPy_DECREF(cpy_r_r65);
    if (unlikely(cpy_r_r66 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 115, CPyStatic_globals);
        goto CPyL83;
    }
    if (unlikely(!PyBool_Check(cpy_r_r66))) {
        CPy_TypeError("bool", cpy_r_r66); cpy_r_r67 = 2;
    } else
        cpy_r_r67 = cpy_r_r66 == Py_True;
    CPy_DECREF(cpy_r_r66);
    if (unlikely(cpy_r_r67 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 115, CPyStatic_globals);
        goto CPyL83;
    }
    if (!cpy_r_r67) goto CPyL69;
    cpy_r_r68 = CPyStatic_globals;
    cpy_r_r69 = CPyStatics[11]; /* '_is_coroutine' */
    cpy_r_r70 = CPyDict_GetItem(cpy_r_r68, cpy_r_r69);
    if (unlikely(cpy_r_r70 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 116, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->__is_coroutine != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->__is_coroutine);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->__is_coroutine = cpy_r_r70;
    cpy_r_r71 = 1;
    if (unlikely(!cpy_r_r71)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 116, CPyStatic_globals);
        goto CPyL83;
    }
CPyL69: ;
    CPy_INCREF(cpy_r_fn);
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___wrapped__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___wrapped__);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___wrapped__ = cpy_r_fn;
    cpy_r_r72 = 1;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 117, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_maxsize);
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___maxsize != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___maxsize);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___maxsize = cpy_r_maxsize;
    cpy_r_r73 = 1;
    if (unlikely(!cpy_r_r73)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 118, CPyStatic_globals);
        goto CPyL83;
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___typed = cpy_r_typed;
    cpy_r_r74 = 1;
    if (unlikely(!cpy_r_r74)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 119, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_ttl);
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___ttl != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___ttl);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___ttl = cpy_r_ttl;
    cpy_r_r75 = 1;
    if (unlikely(!cpy_r_r75)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 120, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r76 = CPyStatic_globals;
    cpy_r_r77 = CPyStatics[12]; /* 'OrderedDict' */
    cpy_r_r78 = CPyDict_GetItem(cpy_r_r76, cpy_r_r77);
    if (unlikely(cpy_r_r78 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 121, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r79 = PyObject_Vectorcall(cpy_r_r78, 0, 0, 0);
    CPy_DECREF(cpy_r_r78);
    if (unlikely(cpy_r_r79 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 121, CPyStatic_globals);
        goto CPyL83;
    }
    if (likely(PyDict_Check(cpy_r_r79)))
        cpy_r_r80 = cpy_r_r79;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 121, CPyStatic_globals, "dict", cpy_r_r79);
        goto CPyL83;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache = cpy_r_r80;
    cpy_r_r81 = 1;
    if (unlikely(!cpy_r_r81)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 121, CPyStatic_globals);
        goto CPyL83;
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___closed = 0;
    cpy_r_r82 = 1;
    if (unlikely(!cpy_r_r82)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 122, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits = 0;
    cpy_r_r83 = 1;
    if (unlikely(!cpy_r_r83)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 123, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses = 0;
    cpy_r_r84 = 1;
    if (unlikely(!cpy_r_r84)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 124, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r85 = PySet_New(NULL);
    if (unlikely(cpy_r_r85 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 125, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks = cpy_r_r85;
    cpy_r_r86 = 1;
    if (unlikely(!cpy_r_r86)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 125, CPyStatic_globals);
        goto CPyL83;
    }
    return 1;
CPyL83: ;
    cpy_r_r87 = 2;
    return cpy_r_r87;
CPyL84: ;
    CPy_DecRef(cpy_r_r4.f0);
    CPy_DecRef(cpy_r_r4.f1);
    CPy_DecRef(cpy_r_r4.f2);
    goto CPyL7;
CPyL85: ;
    CPy_DecRef(cpy_r_r13.f0);
    CPy_DecRef(cpy_r_r13.f1);
    CPy_DecRef(cpy_r_r13.f2);
    goto CPyL17;
CPyL86: ;
    CPy_DecRef(cpy_r_r23.f0);
    CPy_DecRef(cpy_r_r23.f1);
    CPy_DecRef(cpy_r_r23.f2);
    goto CPyL27;
CPyL87: ;
    CPy_DecRef(cpy_r_r33.f0);
    CPy_DecRef(cpy_r_r33.f1);
    CPy_DecRef(cpy_r_r33.f2);
    goto CPyL37;
CPyL88: ;
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL47;
CPyL89: ;
    CPy_DecRef(cpy_r_r54.f0);
    CPy_DecRef(cpy_r_r54.f1);
    CPy_DecRef(cpy_r_r54.f2);
    goto CPyL58;
}

PyObject *CPyPy__LRUCacheWrapper_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fn", "maxsize", "typed", "ttl", 0};
    PyObject *obj_fn;
    PyObject *obj_maxsize;
    PyObject *obj_typed;
    PyObject *obj_ttl;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OOOO", "__init__", kwlist, &obj_fn, &obj_maxsize, &obj_typed, &obj_ttl)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_fn = obj_fn;
    PyObject *arg_maxsize;
    if (PyLong_Check(obj_maxsize))
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL9;
    if (obj_maxsize == Py_None)
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL9;
    CPy_TypeError("int or None", obj_maxsize); 
    goto fail;
__LL9: ;
    char arg_typed;
    if (unlikely(!PyBool_Check(obj_typed))) {
        CPy_TypeError("bool", obj_typed); goto fail;
    } else
        arg_typed = obj_typed == Py_True;
    PyObject *arg_ttl;
    if (CPyFloat_Check(obj_ttl))
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL10;
    if (obj_ttl == Py_None)
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL10;
    CPy_TypeError("float or None", obj_ttl); 
    goto fail;
__LL10: ;
    char retval = CPyDef__LRUCacheWrapper_____init__(arg_self, arg_fn, arg_maxsize, arg_typed, arg_ttl);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 82, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper___cache_invalidate(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    char cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    char cpy_r_r13;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___typed;
    if (unlikely(cpy_r_r0 == 2)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_invalidate", "_LRUCacheWrapper", "__typed", 128, CPyStatic_globals);
        goto CPyL10;
    }
CPyL1: ;
    cpy_r_r1 = CPyDef__make_key(cpy_r_args, cpy_r_kwargs, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 128, CPyStatic_globals);
        goto CPyL10;
    }
    cpy_r_r2 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_invalidate", "_LRUCacheWrapper", "__cache", 130, CPyStatic_globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = CPyStatics[13]; /* 'pop' */
    cpy_r_r4 = Py_None;
    PyObject *cpy_r_r5[3] = {cpy_r_r2, cpy_r_r1, cpy_r_r4};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r3, cpy_r_r6, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 130, CPyStatic_globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r1);
    if (Py_TYPE(cpy_r_r7) == CPyType__CacheItem)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL11;
    if (cpy_r_r7 == Py_None)
        cpy_r_r8 = cpy_r_r7;
    else {
        cpy_r_r8 = NULL;
    }
    if (cpy_r_r8 != NULL) goto __LL11;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "cache_invalidate", 130, CPyStatic_globals, "faster_async_lru._CacheItem or None", cpy_r_r7);
    goto CPyL10;
__LL11: ;
    cpy_r_r9 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r10 = cpy_r_r8 == cpy_r_r9;
    if (cpy_r_r10) {
        goto CPyL13;
    } else
        goto CPyL7;
CPyL6: ;
    return 0;
CPyL7: ;
    if (likely(cpy_r_r8 != Py_None))
        cpy_r_r11 = cpy_r_r8;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "cache_invalidate", 134, CPyStatic_globals, "faster_async_lru._CacheItem", cpy_r_r8);
        goto CPyL10;
    }
    cpy_r_r12 = CPyDef__CacheItem___cancel(cpy_r_r11);
    CPy_DECREF_NO_IMM(cpy_r_r11);
    if (unlikely(cpy_r_r12 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 134, CPyStatic_globals);
        goto CPyL10;
    }
    return 1;
CPyL10: ;
    cpy_r_r13 = 2;
    return cpy_r_r13;
CPyL11: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL10;
CPyL12: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r8);
    goto CPyL6;
}

PyObject *CPyPy__LRUCacheWrapper___cache_invalidate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:cache_invalidate", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    char retval = CPyDef__LRUCacheWrapper___cache_invalidate(arg_self, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 127, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper___cache_clear(PyObject *cpy_r_self) {
    char cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyTagged cpy_r_r3;
    int64_t cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3CIO cpy_r_r6;
    CPyTagged cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    int32_t cpy_r_r15;
    char cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject **cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    char cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    int32_t cpy_r_r30;
    char cpy_r_r31;
    char cpy_r_r32;
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits = 0;
    cpy_r_r0 = 1;
    if (unlikely(!cpy_r_r0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 138, CPyStatic_globals);
        goto CPyL22;
    }
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses = 0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 139, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r2 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_clear", "_LRUCacheWrapper", "__cache", 141, CPyStatic_globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = 0;
    cpy_r_r4 = PyDict_Size(cpy_r_r2);
    cpy_r_r5 = CPyDict_GetValuesIter(cpy_r_r2);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 141, CPyStatic_globals);
        goto CPyL23;
    }
CPyL4: ;
    cpy_r_r6 = CPyDict_NextValue(cpy_r_r5, cpy_r_r3);
    cpy_r_r7 = cpy_r_r6.f1;
    cpy_r_r3 = cpy_r_r7;
    cpy_r_r8 = cpy_r_r6.f0;
    if (!cpy_r_r8) goto CPyL24;
    cpy_r_r9 = cpy_r_r6.f2;
    CPy_INCREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r6.f2);
    if (likely(Py_TYPE(cpy_r_r9) == CPyType__CacheItem))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "cache_clear", 141, CPyStatic_globals, "faster_async_lru._CacheItem", cpy_r_r9);
        goto CPyL25;
    }
    cpy_r_r11 = ((faster_async_lru____CacheItemObject *)cpy_r_r10)->_later_call;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_clear", "_CacheItem", "later_call", 142, CPyStatic_globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r11);
CPyL7: ;
    cpy_r_r12 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r13 = cpy_r_r11 != cpy_r_r12;
    if (!cpy_r_r13) goto CPyL27;
    cpy_r_r14 = cpy_r_r11;
    cpy_r_r15 = PyObject_IsTrue(cpy_r_r14);
    CPy_DECREF(cpy_r_r14);
    cpy_r_r16 = cpy_r_r15 >= 0;
    if (unlikely(!cpy_r_r16)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 142, CPyStatic_globals);
        goto CPyL26;
    }
    cpy_r_r17 = cpy_r_r15;
    if (!cpy_r_r17) goto CPyL28;
    cpy_r_r18 = ((faster_async_lru____CacheItemObject *)cpy_r_r10)->_later_call;
    if (unlikely(cpy_r_r18 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'later_call' of '_CacheItem' undefined");
    } else {
        CPy_INCREF(cpy_r_r18);
    }
    CPy_DECREF_NO_IMM(cpy_r_r10);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 143, CPyStatic_globals);
        goto CPyL25;
    }
CPyL12: ;
    cpy_r_r19 = cpy_r_r18;
    cpy_r_r20 = CPyStatics[3]; /* 'cancel' */
    PyObject *cpy_r_r21[1] = {cpy_r_r19};
    cpy_r_r22 = (PyObject **)&cpy_r_r21;
    cpy_r_r23 = PyObject_VectorcallMethod(cpy_r_r20, cpy_r_r22, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 143, CPyStatic_globals);
        goto CPyL29;
    }
    CPy_DECREF(cpy_r_r19);
    if (unlikely(cpy_r_r23 != Py_None)) {
        CPy_TypeError("None", cpy_r_r23); cpy_r_r24 = 2;
    } else
        cpy_r_r24 = 1;
    CPy_DECREF(cpy_r_r23);
    if (unlikely(cpy_r_r24 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 143, CPyStatic_globals);
        goto CPyL25;
    }
CPyL15: ;
    cpy_r_r25 = CPyDict_CheckSize(cpy_r_r2, cpy_r_r4);
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 141, CPyStatic_globals);
        goto CPyL25;
    } else
        goto CPyL4;
CPyL16: ;
    cpy_r_r26 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 141, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r27 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_clear", "_LRUCacheWrapper", "__cache", 144, CPyStatic_globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r27);
CPyL18: ;
    cpy_r_r28 = CPyDict_Clear(cpy_r_r27);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 144, CPyStatic_globals);
        goto CPyL22;
    }
    cpy_r_r29 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_clear", "_LRUCacheWrapper", "__tasks", 145, CPyStatic_globals);
        goto CPyL22;
    }
    CPy_INCREF(cpy_r_r29);
CPyL20: ;
    cpy_r_r30 = PySet_Clear(cpy_r_r29);
    CPy_DECREF(cpy_r_r29);
    cpy_r_r31 = cpy_r_r30 >= 0;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 145, CPyStatic_globals);
        goto CPyL22;
    }
    return 1;
CPyL22: ;
    cpy_r_r32 = 2;
    return cpy_r_r32;
CPyL23: ;
    CPy_DecRef(cpy_r_r2);
    goto CPyL22;
CPyL24: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL16;
CPyL25: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    goto CPyL22;
CPyL26: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r10);
    goto CPyL22;
CPyL27: ;
    CPy_DECREF_NO_IMM(cpy_r_r10);
    CPy_DECREF(cpy_r_r11);
    goto CPyL15;
CPyL28: ;
    CPy_DECREF_NO_IMM(cpy_r_r10);
    goto CPyL15;
CPyL29: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r19);
    goto CPyL22;
}

PyObject *CPyPy__LRUCacheWrapper___cache_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_clear", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    char retval = CPyDef__LRUCacheWrapper___cache_clear(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 137, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    CPyPtr cpy_r_r12;
    int64_t cpy_r_r13;
    CPyTagged cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    char cpy_r_r21;
    PyObject *cpy_r_r22;
    CPyPtr cpy_r_r23;
    int64_t cpy_r_r24;
    int64_t cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    int64_t cpy_r_r28;
    CPyPtr cpy_r_r29;
    CPyPtr cpy_r_r30;
    int64_t cpy_r_r31;
    CPyPtr cpy_r_r32;
    PyObject *cpy_r_r33;
    char cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    char cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject **cpy_r_r44;
    PyObject *cpy_r_r45;
    int64_t cpy_r_r46;
    int64_t cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    char cpy_r_r51;
    PyObject *cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    char cpy_r_r72;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    tuple_T3OOO cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    char cpy_r_r84;
    char cpy_r_r85;
    char cpy_r_r86;
    char cpy_r_r87;
    PyObject *cpy_r_r88;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL79;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "self", 148, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r5);
CPyL5: ;
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r5)->___closed = 1;
    cpy_r_r6 = 1;
    CPy_DECREF_NO_IMM(cpy_r_r5);
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 148, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r7 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "self", 150, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r7);
CPyL7: ;
    cpy_r_r8 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r7)->___tasks;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__tasks' of '_LRUCacheWrapper' undefined");
    } else {
        CPy_INCREF(cpy_r_r8);
    }
    CPy_DECREF_NO_IMM(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 150, CPyStatic_globals);
        goto CPyL83;
    }
CPyL8: ;
    cpy_r_r9 = PySequence_List(cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 150, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks = cpy_r_r9;
    cpy_r_r10 = 1;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 150, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r11 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks;
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "tasks", 151, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r11);
CPyL11: ;
    cpy_r_r12 = (CPyPtr)&((PyVarObject *)cpy_r_r11)->ob_size;
    cpy_r_r13 = *(int64_t *)cpy_r_r12;
    CPy_DECREF_NO_IMM(cpy_r_r11);
    cpy_r_r14 = cpy_r_r13 << 1;
    cpy_r_r15 = cpy_r_r14 != 0;
    if (cpy_r_r15) goto CPyL17;
    cpy_r_r16 = Py_None;
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL16;
    CPyGen_SetStopIterationValue(cpy_r_r16);
    if (!0) goto CPyL83;
    CPy_Unreachable();
CPyL16: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r16;
    return 0;
CPyL17: ;
    cpy_r_r18 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__wait;
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "wait", 154, CPyStatic_globals);
        goto CPyL83;
    }
CPyL18: ;
    if (cpy_r_r18) goto CPyL37;
CPyL19: ;
    cpy_r_r19 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks;
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "tasks", 155, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r19);
CPyL20: ;
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0 = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL83;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = 0;
    cpy_r_r21 = 1;
    if (unlikely(!cpy_r_r21)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL83;
    }
CPyL22: ;
    cpy_r_r22 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r22 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__0", 155, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r22);
CPyL23: ;
    cpy_r_r23 = (CPyPtr)&((PyVarObject *)cpy_r_r22)->ob_size;
    cpy_r_r24 = *(int64_t *)cpy_r_r23;
    CPy_DECREF_NO_IMM(cpy_r_r22);
    cpy_r_r25 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r25 == -113)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__1", 155, CPyStatic_globals);
        goto CPyL83;
    }
CPyL24: ;
    cpy_r_r26 = cpy_r_r25 < cpy_r_r24;
    if (!cpy_r_r26) goto CPyL37;
    cpy_r_r27 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__0;
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__0", 155, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r27);
CPyL26: ;
    cpy_r_r28 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r28 == -113)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__1", 155, CPyStatic_globals);
        goto CPyL84;
    }
CPyL27: ;
    cpy_r_r29 = (CPyPtr)&((PyListObject *)cpy_r_r27)->ob_item;
    cpy_r_r30 = *(CPyPtr *)cpy_r_r29;
    cpy_r_r31 = cpy_r_r28 * 8;
    cpy_r_r32 = cpy_r_r30 + cpy_r_r31;
    cpy_r_r33 = *(PyObject * *)cpy_r_r32;
    CPy_INCREF(cpy_r_r33);
    CPy_DECREF_NO_IMM(cpy_r_r27);
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task != NULL) {
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 155, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r35 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "task", 156, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r35);
CPyL29: ;
    cpy_r_r36 = CPyStatics[14]; /* 'done' */
    PyObject *cpy_r_r37[1] = {cpy_r_r35};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r38, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 156, CPyStatic_globals);
        goto CPyL85;
    }
    CPy_DECREF(cpy_r_r35);
    if (unlikely(!PyBool_Check(cpy_r_r39))) {
        CPy_TypeError("bool", cpy_r_r39); cpy_r_r40 = 2;
    } else
        cpy_r_r40 = cpy_r_r39 == Py_True;
    CPy_DECREF(cpy_r_r39);
    if (unlikely(cpy_r_r40 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 156, CPyStatic_globals);
        goto CPyL83;
    }
    if (cpy_r_r40) goto CPyL35;
    cpy_r_r41 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "task", 157, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r41);
CPyL33: ;
    cpy_r_r42 = CPyStatics[3]; /* 'cancel' */
    PyObject *cpy_r_r43[1] = {cpy_r_r41};
    cpy_r_r44 = (PyObject **)&cpy_r_r43;
    cpy_r_r45 = PyObject_VectorcallMethod(cpy_r_r42, cpy_r_r44, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 157, CPyStatic_globals);
        goto CPyL86;
    } else
        goto CPyL87;
CPyL34: ;
    CPy_DECREF(cpy_r_r41);
CPyL35: ;
    cpy_r_r46 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1;
    if (unlikely(cpy_r_r46 == -113)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__1", 155, CPyStatic_globals);
        goto CPyL83;
    }
CPyL36: ;
    cpy_r_r47 = cpy_r_r46 + 1;
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__1 = cpy_r_r47;
    cpy_r_r48 = 1;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 155, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL22;
CPyL37: ;
    cpy_r_r49 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__tasks;
    if (unlikely(cpy_r_r49 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "tasks", 159, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF_NO_IMM(cpy_r_r49);
CPyL38: ;
    cpy_r_r50 = CPyStatic_gather;
    if (unlikely(cpy_r_r50 == NULL)) {
        goto CPyL88;
    } else
        goto CPyL41;
CPyL39: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"gather\" was not set");
    cpy_r_r51 = 0;
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL41: ;
    cpy_r_r52 = PyList_New(0);
    if (unlikely(cpy_r_r52 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL89;
    }
    cpy_r_r53 = CPyList_Extend(cpy_r_r52, cpy_r_r49);
    CPy_DECREF_NO_IMM(cpy_r_r49);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL90;
    } else
        goto CPyL91;
CPyL43: ;
    cpy_r_r54 = CPyStatics[15]; /* 'return_exceptions' */
    cpy_r_r55 = PyList_AsTuple(cpy_r_r52);
    CPy_DECREF_NO_IMM(cpy_r_r52);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r56 = 1 ? Py_True : Py_False;
    cpy_r_r57 = CPyDict_Build(1, cpy_r_r54, cpy_r_r56);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL92;
    }
    cpy_r_r58 = PyObject_Call(cpy_r_r50, cpy_r_r55, cpy_r_r57);
    CPy_DECREF(cpy_r_r55);
    CPy_DECREF(cpy_r_r57);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r59 = CPy_GetCoro(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r61 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__2", -1, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r61);
CPyL49: ;
    cpy_r_r62 = CPyIter_Next(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (cpy_r_r62 != NULL) goto CPyL52;
    cpy_r_r63 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r64 = cpy_r_r63;
    CPy_DECREF(cpy_r_r64);
    cpy_r_r65 = NULL;
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 != NULL) {
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2 = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    } else
        goto CPyL74;
CPyL52: ;
    cpy_r_r67 = cpy_r_r62;
CPyL53: ;
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r67;
CPyL54: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_type != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL93;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL58;
    } else
        goto CPyL94;
CPyL56: ;
    CPy_Unreachable();
CPyL57: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL69;
CPyL58: ;
    cpy_r_r71 = CPy_CatchError();
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f0 != NULL) {
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f0);
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f1);
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3.f2);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3 = cpy_r_r71;
    cpy_r_r72 = 1;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL95;
    }
    cpy_r_r73 = (PyObject **)&cpy_r_r1;
    cpy_r_r74 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__2", -1, CPyStatic_globals);
        goto CPyL95;
    }
    CPy_INCREF(cpy_r_r74);
CPyL60: ;
    cpy_r_r75 = CPy_YieldFromErrorHandle(cpy_r_r74, cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL95;
    }
    if (cpy_r_r75) goto CPyL64;
    cpy_r_r67 = cpy_r_r1;
    cpy_r_r76 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__3", -1, CPyStatic_globals);
        goto CPyL96;
    }
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_INCREF(cpy_r_r76.f2);
CPyL63: ;
    CPy_RestoreExcInfo(cpy_r_r76);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    goto CPyL53;
CPyL64: ;
    cpy_r_r64 = cpy_r_r1;
    CPy_DecRef(cpy_r_r64);
    cpy_r_r77 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__3", -1, CPyStatic_globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPy_INCREF(cpy_r_r77.f2);
CPyL65: ;
    CPy_RestoreExcInfo(cpy_r_r77);
    CPy_DecRef(cpy_r_r77.f0);
    CPy_DecRef(cpy_r_r77.f1);
    CPy_DecRef(cpy_r_r77.f2);
    goto CPyL74;
CPyL66: ;
    cpy_r_r78 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__3;
    if (unlikely(cpy_r_r78.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__3", -1, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_INCREF(cpy_r_r78.f0);
    CPy_INCREF(cpy_r_r78.f1);
    CPy_INCREF(cpy_r_r78.f2);
CPyL67: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) goto CPyL83;
    CPy_Unreachable();
CPyL69: ;
    cpy_r_r80 = ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__2;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapper_gen", "__mypyc_temp__2", -1, CPyStatic_globals);
        goto CPyL97;
    }
    CPy_INCREF(cpy_r_r80);
CPyL70: ;
    cpy_r_r81 = CPyIter_Send(cpy_r_r80, cpy_r_arg);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r81 == NULL) goto CPyL72;
    cpy_r_r67 = cpy_r_r81;
    goto CPyL53;
CPyL72: ;
    cpy_r_r82 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 159, CPyStatic_globals);
        goto CPyL83;
    }
    cpy_r_r64 = cpy_r_r82;
    CPy_DECREF(cpy_r_r64);
CPyL74: ;
    cpy_r_r83 = Py_None;
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL78;
    CPyGen_SetStopIterationValue(cpy_r_r83);
    if (!0) goto CPyL83;
    CPy_Unreachable();
CPyL78: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r83;
    return 0;
CPyL79: ;
    cpy_r_r85 = cpy_r_r2 == 0;
    if (cpy_r_r85) goto CPyL98;
    cpy_r_r86 = cpy_r_r2 == 1;
    if (cpy_r_r86) {
        goto CPyL54;
    } else
        goto CPyL99;
CPyL81: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r87 = 0;
    if (unlikely(!cpy_r_r87)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
        goto CPyL83;
    }
    CPy_Unreachable();
CPyL83: ;
    cpy_r_r88 = NULL;
    return cpy_r_r88;
CPyL84: ;
    CPy_DecRef(cpy_r_r27);
    goto CPyL83;
CPyL85: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL83;
CPyL86: ;
    CPy_DecRef(cpy_r_r41);
    goto CPyL83;
CPyL87: ;
    CPy_DECREF(cpy_r_r45);
    goto CPyL34;
CPyL88: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL39;
CPyL89: ;
    CPy_DecRef(cpy_r_r49);
    goto CPyL83;
CPyL90: ;
    CPy_DecRef(cpy_r_r52);
    goto CPyL83;
CPyL91: ;
    CPy_DECREF(cpy_r_r53);
    goto CPyL43;
CPyL92: ;
    CPy_DecRef(cpy_r_r55);
    goto CPyL83;
CPyL93: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL57;
CPyL94: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL56;
CPyL95: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL66;
CPyL96: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL66;
CPyL97: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL83;
CPyL98: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL99: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL81;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__next__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "send", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__iter__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "throw", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_cache_close__LRUCacheWrapper_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp12 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp12);
    PyObject *__tmp13 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp13);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "close", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapper_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__await__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapper___cache_close(PyObject *cpy_r_self, char cpy_r_wait) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    PyObject *cpy_r_r4;
    if (cpy_r_wait != 2) goto CPyL2;
    cpy_r_wait = 0;
CPyL2: ;
    cpy_r_r0 = CPyDef_cache_close__LRUCacheWrapper_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
        goto CPyL6;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
        goto CPyL7;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__wait = cpy_r_wait;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
        goto CPyL7;
    }
    return cpy_r_r0;
CPyL6: ;
    cpy_r_r4 = NULL;
    return cpy_r_r4;
CPyL7: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL6;
}

PyObject *CPyPy__LRUCacheWrapper___cache_close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"wait", 0};
    static CPyArg_Parser parser = {"|$O:cache_close", kwlist, 0};
    PyObject *obj_wait = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_wait)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    char arg_wait;
    if (obj_wait == NULL) {
        arg_wait = 2;
    } else if (unlikely(!PyBool_Check(obj_wait))) {
        CPy_TypeError("bool", obj_wait); goto fail;
    } else
        arg_wait = obj_wait == Py_True;
    PyObject *retval = CPyDef__LRUCacheWrapper___cache_close(arg_self, arg_wait);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 147, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapper___cache_info(PyObject *cpy_r_self) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject **cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_info", "_LRUCacheWrapper", "__hits", 163, CPyStatic_globals);
        goto CPyL8;
    }
    CPyTagged_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses;
    if (unlikely(cpy_r_r1 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_info", "_LRUCacheWrapper", "__misses", 164, CPyStatic_globals);
        goto CPyL9;
    }
    CPyTagged_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___maxsize;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_info", "_LRUCacheWrapper", "__maxsize", 165, CPyStatic_globals);
        goto CPyL10;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_info", "_LRUCacheWrapper", "__cache", 166, CPyStatic_globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_r3);
CPyL4: ;
    cpy_r_r4 = PyDict_Size(cpy_r_r3);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = CPyStatic_globals;
    cpy_r_r7 = CPyStatics[18]; /* '_CacheInfo' */
    cpy_r_r8 = CPyDict_GetItem(cpy_r_r6, cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_info", 162, CPyStatic_globals);
        goto CPyL11;
    }
    cpy_r_r9 = CPyTagged_StealAsObject(cpy_r_r0);
    cpy_r_r10 = CPyTagged_StealAsObject(cpy_r_r1);
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r5);
    PyObject *cpy_r_r12[4] = {cpy_r_r9, cpy_r_r10, cpy_r_r2, cpy_r_r11};
    cpy_r_r13 = (PyObject **)&cpy_r_r12;
    cpy_r_r14 = PyObject_Vectorcall(cpy_r_r8, cpy_r_r13, 4, 0);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_info", 162, CPyStatic_globals);
        goto CPyL12;
    }
    CPy_DECREF(cpy_r_r9);
    CPy_DECREF(cpy_r_r10);
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r11);
    if (likely(PyTuple_Check(cpy_r_r14)))
        cpy_r_r15 = cpy_r_r14;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "cache_info", 162, CPyStatic_globals, "tuple", cpy_r_r14);
        goto CPyL8;
    }
    return cpy_r_r15;
CPyL8: ;
    cpy_r_r16 = NULL;
    return cpy_r_r16;
CPyL9: ;
    CPyTagged_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPyTagged_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    goto CPyL8;
CPyL11: ;
    CPyTagged_DecRef(cpy_r_r0);
    CPyTagged_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r2);
    goto CPyL8;
CPyL12: ;
    CPy_DecRef(cpy_r_r2);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r10);
    CPy_DecRef(cpy_r_r11);
    goto CPyL8;
}

PyObject *CPyPy__LRUCacheWrapper___cache_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_info", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__LRUCacheWrapper___cache_info(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_info", 161, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapper___cache_parameters(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    CPyPtr cpy_r_r3;
    int64_t cpy_r_r4;
    CPyTagged cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject **cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___maxsize;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_parameters", "_LRUCacheWrapper", "__maxsize", 171, CPyStatic_globals);
        goto CPyL8;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___typed;
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_parameters", "_LRUCacheWrapper", "__typed", 172, CPyStatic_globals);
        goto CPyL9;
    }
CPyL2: ;
    cpy_r_r2 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks;
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_parameters", "_LRUCacheWrapper", "__tasks", 173, CPyStatic_globals);
        goto CPyL9;
    }
    CPy_INCREF(cpy_r_r2);
CPyL3: ;
    cpy_r_r3 = (CPyPtr)&((PySetObject *)cpy_r_r2)->used;
    cpy_r_r4 = *(int64_t *)cpy_r_r3;
    CPy_DECREF(cpy_r_r2);
    cpy_r_r5 = cpy_r_r4 << 1;
    cpy_r_r6 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___closed;
    if (unlikely(cpy_r_r6 == 2)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_parameters", "_LRUCacheWrapper", "__closed", 174, CPyStatic_globals);
        goto CPyL9;
    }
CPyL4: ;
    cpy_r_r7 = CPyStatic_globals;
    cpy_r_r8 = CPyStatics[19]; /* '_CacheParameters' */
    cpy_r_r9 = CPyDict_GetItem(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_parameters", 170, CPyStatic_globals);
        goto CPyL9;
    }
    cpy_r_r10 = cpy_r_r1 ? Py_True : Py_False;
    cpy_r_r11 = CPyTagged_StealAsObject(cpy_r_r5);
    cpy_r_r12 = cpy_r_r6 ? Py_True : Py_False;
    PyObject *cpy_r_r13[4] = {cpy_r_r0, cpy_r_r10, cpy_r_r11, cpy_r_r12};
    cpy_r_r14 = (PyObject **)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[137]; /* ('maxsize', 'typed', 'tasks', 'closed') */
    cpy_r_r16 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r14, 0, cpy_r_r15);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_parameters", 170, CPyStatic_globals);
        goto CPyL10;
    }
    CPy_DECREF(cpy_r_r0);
    CPy_DECREF(cpy_r_r11);
    if (likely(PyDict_Check(cpy_r_r16)))
        cpy_r_r17 = cpy_r_r16;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "cache_parameters", 170, CPyStatic_globals, "dict", cpy_r_r16);
        goto CPyL8;
    }
    return cpy_r_r17;
CPyL8: ;
    cpy_r_r18 = NULL;
    return cpy_r_r18;
CPyL9: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL8;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r11);
    goto CPyL8;
}

PyObject *CPyPy__LRUCacheWrapper___cache_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_parameters", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__LRUCacheWrapper___cache_parameters(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_parameters", 169, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper____cache_hit(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_cache_hit", "_LRUCacheWrapper", "__hits", 178, CPyStatic_globals);
        goto CPyL5;
    }
CPyL1: ;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___hits = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_cache_hit", 178, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r3 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_cache_hit", "_LRUCacheWrapper", "__cache", 179, CPyStatic_globals);
        goto CPyL5;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyStatics[24]; /* 'move_to_end' */
    PyObject *cpy_r_r5[2] = {cpy_r_r3, cpy_r_key};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_cache_hit", 179, CPyStatic_globals);
        goto CPyL6;
    } else
        goto CPyL7;
CPyL4: ;
    CPy_DECREF(cpy_r_r3);
    return 1;
CPyL5: ;
    cpy_r_r8 = 2;
    return cpy_r_r8;
CPyL6: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL5;
CPyL7: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL4;
}

PyObject *CPyPy__LRUCacheWrapper____cache_hit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_cache_hit", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    char retval = CPyDef__LRUCacheWrapper____cache_hit(arg_self, arg_key);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "_cache_hit", 177, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper____cache_miss(PyObject *cpy_r_self, PyObject *cpy_r_key) {
    CPyTagged cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses;
    if (unlikely(cpy_r_r0 == CPY_INT_TAG)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_cache_miss", "_LRUCacheWrapper", "__misses", 182, CPyStatic_globals);
        goto CPyL3;
    }
CPyL1: ;
    cpy_r_r1 = CPyTagged_Add(cpy_r_r0, 2);
    if (((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses != CPY_INT_TAG) {
        CPyTagged_DECREF(((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses);
    }
    ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___misses = cpy_r_r1;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_cache_miss", 182, CPyStatic_globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r3 = 2;
    return cpy_r_r3;
}

PyObject *CPyPy__LRUCacheWrapper____cache_miss(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"key", 0};
    static CPyArg_Parser parser = {"O:_cache_miss", kwlist, 0};
    PyObject *obj_key;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_key)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_key = obj_key;
    char retval = CPyDef__LRUCacheWrapper____cache_miss(arg_self, arg_key);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "_cache_miss", 181, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapper____task_done_callback(PyObject *cpy_r_self, PyObject *cpy_r_fut, PyObject *cpy_r_key, PyObject *cpy_r_task) {
    PyObject *cpy_r_r0;
    int32_t cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_exc;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject **cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject **cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    double cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject **cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject **cpy_r_r58;
    PyObject *cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject **cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___tasks;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_task_done_callback", "_LRUCacheWrapper", "__tasks", 187, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = PySet_Discard(cpy_r_r0, cpy_r_task);
    CPy_DECREF(cpy_r_r0);
    cpy_r_r2 = cpy_r_r1 >= 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 187, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r3 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___cache;
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_task_done_callback", "_LRUCacheWrapper", "__cache", 189, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_INCREF(cpy_r_r3);
CPyL3: ;
    cpy_r_r4 = CPyStatics[25]; /* 'cancelled' */
    PyObject *cpy_r_r5[1] = {cpy_r_task};
    cpy_r_r6 = (PyObject **)&cpy_r_r5;
    cpy_r_r7 = PyObject_VectorcallMethod(cpy_r_r4, cpy_r_r6, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 191, CPyStatic_globals);
        goto CPyL34;
    }
    if (unlikely(!PyBool_Check(cpy_r_r7))) {
        CPy_TypeError("bool", cpy_r_r7); cpy_r_r8 = 2;
    } else
        cpy_r_r8 = cpy_r_r7 == Py_True;
    CPy_DECREF(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 191, CPyStatic_globals);
        goto CPyL34;
    }
    if (!cpy_r_r8) goto CPyL9;
    cpy_r_r9 = CPyStatics[3]; /* 'cancel' */
    PyObject *cpy_r_r10[1] = {cpy_r_fut};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_VectorcallMethod(cpy_r_r9, cpy_r_r11, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 192, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL35;
CPyL7: ;
    cpy_r_r13 = CPyStatics[13]; /* 'pop' */
    cpy_r_r14 = Py_None;
    PyObject *cpy_r_r15[3] = {cpy_r_r3, cpy_r_key, cpy_r_r14};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_VectorcallMethod(cpy_r_r13, cpy_r_r16, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 193, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL36;
CPyL8: ;
    CPy_DECREF(cpy_r_r3);
    return 1;
CPyL9: ;
    cpy_r_r18 = CPyStatics[26]; /* 'exception' */
    PyObject *cpy_r_r19[1] = {cpy_r_task};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_VectorcallMethod(cpy_r_r18, cpy_r_r20, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 196, CPyStatic_globals);
        goto CPyL34;
    }
    cpy_r_exc = cpy_r_r21;
    cpy_r_r22 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r23 = cpy_r_exc != cpy_r_r22;
    if (!cpy_r_r23) goto CPyL37;
    cpy_r_r24 = CPyStatics[27]; /* 'set_exception' */
    PyObject *cpy_r_r25[2] = {cpy_r_fut, cpy_r_exc};
    cpy_r_r26 = (PyObject **)&cpy_r_r25;
    cpy_r_r27 = PyObject_VectorcallMethod(cpy_r_r24, cpy_r_r26, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 198, CPyStatic_globals);
        goto CPyL38;
    } else
        goto CPyL39;
CPyL12: ;
    CPy_DECREF(cpy_r_exc);
    cpy_r_r28 = CPyStatics[13]; /* 'pop' */
    cpy_r_r29 = Py_None;
    PyObject *cpy_r_r30[3] = {cpy_r_r3, cpy_r_key, cpy_r_r29};
    cpy_r_r31 = (PyObject **)&cpy_r_r30;
    cpy_r_r32 = PyObject_VectorcallMethod(cpy_r_r28, cpy_r_r31, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 199, CPyStatic_globals);
        goto CPyL34;
    } else
        goto CPyL40;
CPyL13: ;
    CPy_DECREF(cpy_r_r3);
    return 1;
CPyL14: ;
    cpy_r_r33 = CPyDict_GetWithNone(cpy_r_r3, cpy_r_key);
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 202, CPyStatic_globals);
        goto CPyL34;
    }
    if (Py_TYPE(cpy_r_r33) == CPyType__CacheItem)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL14;
    if (cpy_r_r33 == Py_None)
        cpy_r_r34 = cpy_r_r33;
    else {
        cpy_r_r34 = NULL;
    }
    if (cpy_r_r34 != NULL) goto __LL14;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_task_done_callback", 202, CPyStatic_globals, "faster_async_lru._CacheItem or None", cpy_r_r33);
    goto CPyL34;
__LL14: ;
    cpy_r_r35 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_self)->___ttl;
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "_task_done_callback", "_LRUCacheWrapper", "__ttl", 203, CPyStatic_globals);
        goto CPyL41;
    }
    CPy_INCREF(cpy_r_r35);
CPyL17: ;
    cpy_r_r36 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r37 = cpy_r_r35 != cpy_r_r36;
    if (!cpy_r_r37) goto CPyL42;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r34 != cpy_r_r38;
    if (!cpy_r_r39) goto CPyL42;
    cpy_r_r40 = CPyStatic_get_running_loop;
    if (unlikely(cpy_r_r40 == NULL)) {
        goto CPyL43;
    } else
        goto CPyL22;
CPyL20: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_running_loop\" was not set");
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 205, CPyStatic_globals);
        goto CPyL33;
    }
    CPy_Unreachable();
CPyL22: ;
    cpy_r_r42 = PyObject_Vectorcall(cpy_r_r40, 0, 0, 0);
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 205, CPyStatic_globals);
        goto CPyL44;
    }
    cpy_r_r43 = PyFloat_AsDouble(cpy_r_r35);
    if (cpy_r_r43 == -1.0 && PyErr_Occurred()) {
        CPy_TypeError("float", cpy_r_r35); cpy_r_r43 = -113.0;
    }
    CPy_DECREF(cpy_r_r35);
    cpy_r_r44 = cpy_r_r43 == -113.0;
    if (unlikely(cpy_r_r44)) goto CPyL25;
CPyL24: ;
    cpy_r_r45 = CPyStatics[13]; /* 'pop' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r45);
    CPy_DECREF(cpy_r_r3);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 207, CPyStatic_globals);
        goto CPyL45;
    } else
        goto CPyL26;
CPyL25: ;
    cpy_r_r47 = PyErr_Occurred();
    if (unlikely(cpy_r_r47 != NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 207, CPyStatic_globals);
        goto CPyL46;
    } else
        goto CPyL24;
CPyL26: ;
    cpy_r_r48 = CPyStatics[28]; /* 'call_later' */
    cpy_r_r49 = PyFloat_FromDouble(cpy_r_r43);
    cpy_r_r50 = Py_None;
    PyObject *cpy_r_r51[5] = {cpy_r_r42, cpy_r_r49, cpy_r_r46, cpy_r_key, cpy_r_r50};
    cpy_r_r52 = (PyObject **)&cpy_r_r51;
    cpy_r_r53 = PyObject_VectorcallMethod(cpy_r_r48, cpy_r_r52, 9223372036854775813ULL, 0);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 206, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_r49);
    CPy_DECREF(cpy_r_r46);
    if (likely(cpy_r_r34 != Py_None))
        cpy_r_r54 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_task_done_callback", 206, CPyStatic_globals, "faster_async_lru._CacheItem", cpy_r_r34);
        goto CPyL48;
    }
    if (((faster_async_lru____CacheItemObject *)cpy_r_r54)->_later_call != NULL) {
        CPy_DECREF(((faster_async_lru____CacheItemObject *)cpy_r_r54)->_later_call);
    }
    ((faster_async_lru____CacheItemObject *)cpy_r_r54)->_later_call = cpy_r_r53;
    cpy_r_r55 = 1;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 206, CPyStatic_globals);
        goto CPyL49;
    }
    CPy_DECREF(cpy_r_r34);
CPyL30: ;
    cpy_r_r56 = CPyStatics[29]; /* 'result' */
    PyObject *cpy_r_r57[1] = {cpy_r_task};
    cpy_r_r58 = (PyObject **)&cpy_r_r57;
    cpy_r_r59 = PyObject_VectorcallMethod(cpy_r_r56, cpy_r_r58, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 210, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r60 = CPyStatics[30]; /* 'set_result' */
    PyObject *cpy_r_r61[2] = {cpy_r_fut, cpy_r_r59};
    cpy_r_r62 = (PyObject **)&cpy_r_r61;
    cpy_r_r63 = PyObject_VectorcallMethod(cpy_r_r60, cpy_r_r62, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 210, CPyStatic_globals);
        goto CPyL50;
    } else
        goto CPyL51;
CPyL32: ;
    CPy_DECREF(cpy_r_r59);
    return 1;
CPyL33: ;
    cpy_r_r64 = 2;
    return cpy_r_r64;
CPyL34: ;
    CPy_DecRef(cpy_r_r3);
    goto CPyL33;
CPyL35: ;
    CPy_DECREF(cpy_r_r12);
    goto CPyL7;
CPyL36: ;
    CPy_DECREF(cpy_r_r17);
    goto CPyL8;
CPyL37: ;
    CPy_DECREF(cpy_r_exc);
    goto CPyL14;
CPyL38: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_exc);
    goto CPyL33;
CPyL39: ;
    CPy_DECREF(cpy_r_r27);
    goto CPyL12;
CPyL40: ;
    CPy_DECREF(cpy_r_r32);
    goto CPyL13;
CPyL41: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r34);
    goto CPyL33;
CPyL42: ;
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r34);
    CPy_DECREF(cpy_r_r35);
    goto CPyL30;
CPyL43: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL20;
CPyL44: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r35);
    goto CPyL33;
CPyL45: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r42);
    goto CPyL33;
CPyL46: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r42);
    goto CPyL33;
CPyL47: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r42);
    CPy_DecRef(cpy_r_r46);
    CPy_DecRef(cpy_r_r49);
    goto CPyL33;
CPyL48: ;
    CPy_DecRef(cpy_r_r34);
    CPy_DecRef(cpy_r_r53);
    goto CPyL33;
CPyL49: ;
    CPy_DecRef(cpy_r_r34);
    goto CPyL33;
CPyL50: ;
    CPy_DecRef(cpy_r_r59);
    goto CPyL33;
CPyL51: ;
    CPy_DECREF(cpy_r_r63);
    goto CPyL32;
}

PyObject *CPyPy__LRUCacheWrapper____task_done_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"fut", "key", "task", 0};
    static CPyArg_Parser parser = {"OOO:_task_done_callback", kwlist, 0};
    PyObject *obj_fut;
    PyObject *obj_key;
    PyObject *obj_task;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_fut, &obj_key, &obj_task)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_fut = obj_fut;
    PyObject *arg_key = obj_key;
    PyObject *arg_task = obj_task;
    char retval = CPyDef__LRUCacheWrapper____task_done_callback(arg_self, arg_fut, arg_key, arg_task);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "_task_done_callback", 184, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    char cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject **cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    char cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    char cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    char cpy_r_r55;
    PyObject **cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    char cpy_r_r70;
    tuple_T3OOO cpy_r_r71;
    char cpy_r_r72;
    PyObject **cpy_r_r73;
    PyObject *cpy_r_r74;
    char cpy_r_r75;
    tuple_T3OOO cpy_r_r76;
    tuple_T3OOO cpy_r_r77;
    tuple_T3OOO cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    char cpy_r_r83;
    PyObject *cpy_r_r84;
    PyObject *cpy_r_r85;
    PyObject **cpy_r_r87;
    PyObject *cpy_r_r88;
    char cpy_r_r89;
    PyObject *cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject **cpy_r_r93;
    PyObject *cpy_r_r94;
    char cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    char cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject **cpy_r_r108;
    PyObject *cpy_r_r109;
    char cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    int32_t cpy_r_r114;
    char cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    PyObject *cpy_r_r121;
    PyObject *cpy_r_r122;
    char cpy_r_r123;
    PyObject **cpy_r_r125;
    PyObject *cpy_r_r126;
    PyObject *cpy_r_r127;
    PyObject **cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    int32_t cpy_r_r138;
    char cpy_r_r139;
    PyObject *cpy_r_r140;
    PyObject *cpy_r_r141;
    char cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    char cpy_r_r145;
    PyObject *cpy_r_r146;
    int64_t cpy_r_r147;
    CPyTagged cpy_r_r148;
    PyObject *cpy_r_r149;
    CPyTagged cpy_r_r150;
    int64_t cpy_r_r151;
    char cpy_r_r152;
    int64_t cpy_r_r153;
    char cpy_r_r154;
    char cpy_r_r155;
    char cpy_r_r156;
    char cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    tuple_T2OO cpy_r_r165;
    PyObject *cpy_r_r166;
    PyObject *cpy_r_r167;
    PyObject *cpy_r_r168;
    char cpy_r_r169;
    PyObject *cpy_r_r170;
    char cpy_r_r171;
    PyObject *cpy_r_r172;
    PyObject *cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    char cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    char cpy_r_r180;
    PyObject **cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    char cpy_r_r185;
    PyObject *cpy_r_r186;
    PyObject *cpy_r_r187;
    PyObject *cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    char cpy_r_r191;
    PyObject *cpy_r_r192;
    char cpy_r_r193;
    PyObject *cpy_r_r194;
    char cpy_r_r195;
    tuple_T3OOO cpy_r_r196;
    char cpy_r_r197;
    PyObject **cpy_r_r198;
    PyObject *cpy_r_r199;
    char cpy_r_r200;
    tuple_T3OOO cpy_r_r201;
    tuple_T3OOO cpy_r_r202;
    tuple_T3OOO cpy_r_r203;
    char cpy_r_r204;
    PyObject *cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    char cpy_r_r208;
    char cpy_r_r209;
    char cpy_r_r210;
    char cpy_r_r211;
    char cpy_r_r212;
    PyObject *cpy_r_r213;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL188;
CPyL1: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_type != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 213, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r7)->___closed;
    if (unlikely(cpy_r_r8 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__closed' of '_LRUCacheWrapper' undefined");
    }
    CPy_DECREF_NO_IMM(cpy_r_r7);
    if (unlikely(cpy_r_r8 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 213, CPyStatic_globals);
        goto CPyL193;
    }
CPyL6: ;
    if (!cpy_r_r8) goto CPyL14;
CPyL7: ;
    cpy_r_r9 = CPyStatics[31]; /* 'alru_cache is closed for ' */
    cpy_r_r10 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 214, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r10);
CPyL8: ;
    cpy_r_r11 = PyObject_Str(cpy_r_r10);
    CPy_DECREF_NO_IMM(cpy_r_r10);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 214, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r12 = CPyStr_Build(2, cpy_r_r9, cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 214, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r13 = CPyModule_builtins;
    cpy_r_r14 = CPyStatics[32]; /* 'RuntimeError' */
    cpy_r_r15 = CPyObject_GetAttr(cpy_r_r13, cpy_r_r14);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 214, CPyStatic_globals);
        goto CPyL194;
    }
    PyObject *cpy_r_r16[1] = {cpy_r_r12};
    cpy_r_r17 = (PyObject **)&cpy_r_r16;
    cpy_r_r18 = PyObject_Vectorcall(cpy_r_r15, cpy_r_r17, 1, 0);
    CPy_DECREF(cpy_r_r15);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 214, CPyStatic_globals);
        goto CPyL194;
    }
    CPy_DECREF(cpy_r_r12);
    CPy_Raise(cpy_r_r18);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 214, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL14: ;
    cpy_r_r19 = CPyStatic_get_running_loop;
    if (likely(cpy_r_r19 != NULL)) goto CPyL17;
    PyErr_SetString(PyExc_NameError, "value for final name \"get_running_loop\" was not set");
    cpy_r_r20 = 0;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 216, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL17: ;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r19, 0, 0, 0);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 216, CPyStatic_globals);
        goto CPyL193;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__loop != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__loop);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__loop = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 216, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r23 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_args;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fn_args", 218, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r23);
CPyL20: ;
    cpy_r_r24 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_kwargs;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fn_kwargs", 218, CPyStatic_globals);
        goto CPyL195;
    }
    CPy_INCREF(cpy_r_r24);
CPyL21: ;
    cpy_r_r25 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 218, CPyStatic_globals);
        goto CPyL196;
    }
    CPy_INCREF_NO_IMM(cpy_r_r25);
CPyL22: ;
    cpy_r_r26 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r25)->___typed;
    if (unlikely(cpy_r_r26 == 2)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__typed' of '_LRUCacheWrapper' undefined");
    }
    CPy_DECREF_NO_IMM(cpy_r_r25);
    if (unlikely(cpy_r_r26 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 218, CPyStatic_globals);
        goto CPyL196;
    }
CPyL23: ;
    cpy_r_r27 = CPyDef__make_key(cpy_r_r23, cpy_r_r24, cpy_r_r26);
    CPy_DECREF(cpy_r_r23);
    CPy_DECREF(cpy_r_r24);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 218, CPyStatic_globals);
        goto CPyL193;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 218, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r29 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 220, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r29);
CPyL26: ;
    cpy_r_r30 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r29)->___cache;
    if (unlikely(cpy_r_r30 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__cache' of '_LRUCacheWrapper' undefined");
    } else {
        CPy_INCREF(cpy_r_r30);
    }
    CPy_DECREF_NO_IMM(cpy_r_r29);
    if (unlikely(cpy_r_r30 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 220, CPyStatic_globals);
        goto CPyL193;
    }
CPyL27: ;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache = cpy_r_r30;
    cpy_r_r31 = 1;
    if (unlikely(!cpy_r_r31)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 220, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r32 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache", 222, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r32);
CPyL29: ;
    cpy_r_r33 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key;
    if (unlikely(cpy_r_r33 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "key", 222, CPyStatic_globals);
        goto CPyL197;
    }
    CPy_INCREF(cpy_r_r33);
CPyL30: ;
    cpy_r_r34 = CPyDict_GetWithNone(cpy_r_r32, cpy_r_r33);
    CPy_DECREF(cpy_r_r32);
    CPy_DECREF(cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 222, CPyStatic_globals);
        goto CPyL193;
    }
    if (Py_TYPE(cpy_r_r34) == CPyType__CacheItem)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL15;
    if (cpy_r_r34 == Py_None)
        cpy_r_r35 = cpy_r_r34;
    else {
        cpy_r_r35 = NULL;
    }
    if (cpy_r_r35 != NULL) goto __LL15;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__call__", 222, CPyStatic_globals, "faster_async_lru._CacheItem or None", cpy_r_r34);
    goto CPyL193;
__LL15: ;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item = cpy_r_r35;
    cpy_r_r36 = 1;
    if (unlikely(!cpy_r_r36)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 222, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r37 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item;
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache_item", 224, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r37);
CPyL34: ;
    cpy_r_r38 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r39 = cpy_r_r37 != cpy_r_r38;
    CPy_DECREF(cpy_r_r37);
    if (!cpy_r_r39) goto CPyL91;
    cpy_r_r40 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 225, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r40);
CPyL36: ;
    cpy_r_r41 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key;
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "key", 225, CPyStatic_globals);
        goto CPyL198;
    }
    CPy_INCREF(cpy_r_r41);
CPyL37: ;
    cpy_r_r42 = CPyDef__LRUCacheWrapper____cache_hit(cpy_r_r40, cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    CPy_DECREF_NO_IMM(cpy_r_r40);
    if (unlikely(cpy_r_r42 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 225, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r43 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item;
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache_item", 227, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r43);
CPyL39: ;
    if (likely(cpy_r_r43 != Py_None))
        cpy_r_r44 = cpy_r_r43;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__call__", 227, CPyStatic_globals, "faster_async_lru._CacheItem", cpy_r_r43);
        goto CPyL199;
    }
    cpy_r_r45 = ((faster_async_lru____CacheItemObject *)cpy_r_r44)->_fut;
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "_CacheItem", "fut", 227, CPyStatic_globals);
        goto CPyL199;
    }
    CPy_INCREF(cpy_r_r45);
CPyL41: ;
    CPy_DECREF(cpy_r_r43);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut = cpy_r_r45;
    cpy_r_r46 = 1;
    if (unlikely(!cpy_r_r46)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 227, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r47 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 228, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r47);
CPyL43: ;
    cpy_r_r48 = CPyStatics[14]; /* 'done' */
    PyObject *cpy_r_r49[1] = {cpy_r_r47};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_VectorcallMethod(cpy_r_r48, cpy_r_r50, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 228, CPyStatic_globals);
        goto CPyL200;
    }
    CPy_DECREF(cpy_r_r47);
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 228, CPyStatic_globals);
        goto CPyL193;
    }
    if (cpy_r_r52) goto CPyL84;
    cpy_r_r53 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 229, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r53);
CPyL47: ;
    cpy_r_r54 = CPyStatic_shield;
    if (unlikely(cpy_r_r54 == NULL)) {
        goto CPyL201;
    } else
        goto CPyL50;
CPyL48: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"shield\" was not set");
    cpy_r_r55 = 0;
    if (unlikely(!cpy_r_r55)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL50: ;
    PyObject *cpy_r_r56[1] = {cpy_r_r53};
    cpy_r_r57 = (PyObject **)&cpy_r_r56;
    cpy_r_r58 = PyObject_Vectorcall(cpy_r_r54, cpy_r_r57, 1, 0);
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL202;
    }
    CPy_DECREF(cpy_r_r53);
    cpy_r_r59 = CPy_GetCoro(cpy_r_r58);
    CPy_DECREF(cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL193;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r61 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__4", -1, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r61);
CPyL54: ;
    cpy_r_r62 = CPyIter_Next(cpy_r_r61);
    CPy_DECREF(cpy_r_r61);
    if (cpy_r_r62 != NULL) goto CPyL57;
    cpy_r_r63 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r63 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r64 = cpy_r_r63;
    cpy_r_r65 = NULL;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4 = cpy_r_r65;
    cpy_r_r66 = 1;
    if (unlikely(!cpy_r_r66)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL203;
    } else
        goto CPyL79;
CPyL57: ;
    cpy_r_r67 = cpy_r_r62;
CPyL58: ;
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r67;
CPyL59: ;
    cpy_r_r69 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r70 = cpy_r_type != cpy_r_r69;
    if (!cpy_r_r70) goto CPyL204;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL205;
CPyL61: ;
    CPy_Unreachable();
CPyL62: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL74;
CPyL63: ;
    cpy_r_r71 = CPy_CatchError();
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f0);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f1);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5.f2);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5 = cpy_r_r71;
    cpy_r_r72 = 1;
    if (unlikely(!cpy_r_r72)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL206;
    }
    cpy_r_r73 = (PyObject **)&cpy_r_r1;
    cpy_r_r74 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r74 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__4", -1, CPyStatic_globals);
        goto CPyL206;
    }
    CPy_INCREF(cpy_r_r74);
CPyL65: ;
    cpy_r_r75 = CPy_YieldFromErrorHandle(cpy_r_r74, cpy_r_r73);
    CPy_DecRef(cpy_r_r74);
    if (unlikely(cpy_r_r75 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL206;
    }
    if (cpy_r_r75) goto CPyL69;
    cpy_r_r67 = cpy_r_r1;
    cpy_r_r76 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r76.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__5", -1, CPyStatic_globals);
        goto CPyL207;
    }
    CPy_INCREF(cpy_r_r76.f0);
    CPy_INCREF(cpy_r_r76.f1);
    CPy_INCREF(cpy_r_r76.f2);
CPyL68: ;
    CPy_RestoreExcInfo(cpy_r_r76);
    CPy_DecRef(cpy_r_r76.f0);
    CPy_DecRef(cpy_r_r76.f1);
    CPy_DecRef(cpy_r_r76.f2);
    goto CPyL58;
CPyL69: ;
    cpy_r_r64 = cpy_r_r1;
    cpy_r_r77 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r77.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__5", -1, CPyStatic_globals);
        goto CPyL208;
    }
    CPy_INCREF(cpy_r_r77.f0);
    CPy_INCREF(cpy_r_r77.f1);
    CPy_INCREF(cpy_r_r77.f2);
CPyL70: ;
    CPy_RestoreExcInfo(cpy_r_r77);
    CPy_DecRef(cpy_r_r77.f0);
    CPy_DecRef(cpy_r_r77.f1);
    CPy_DecRef(cpy_r_r77.f2);
    goto CPyL79;
CPyL71: ;
    cpy_r_r78 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__5;
    if (unlikely(cpy_r_r78.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__5", -1, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r78.f0);
    CPy_INCREF(cpy_r_r78.f1);
    CPy_INCREF(cpy_r_r78.f2);
CPyL72: ;
    CPy_RestoreExcInfo(cpy_r_r78);
    CPy_DecRef(cpy_r_r78.f0);
    CPy_DecRef(cpy_r_r78.f1);
    CPy_DecRef(cpy_r_r78.f2);
    cpy_r_r79 = CPy_KeepPropagating();
    if (!cpy_r_r79) goto CPyL193;
    CPy_Unreachable();
CPyL74: ;
    cpy_r_r80 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__4;
    if (unlikely(cpy_r_r80 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__4", -1, CPyStatic_globals);
        goto CPyL209;
    }
    CPy_INCREF(cpy_r_r80);
CPyL75: ;
    cpy_r_r81 = CPyIter_Send(cpy_r_r80, cpy_r_arg);
    CPy_DECREF(cpy_r_r80);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r81 == NULL) goto CPyL77;
    cpy_r_r67 = cpy_r_r81;
    goto CPyL58;
CPyL77: ;
    cpy_r_r82 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r82 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 229, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r64 = cpy_r_r82;
CPyL79: ;
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL83;
    CPyGen_SetStopIterationValue(cpy_r_r64);
    CPy_DECREF(cpy_r_r64);
    if (!0) goto CPyL193;
    CPy_Unreachable();
CPyL83: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r64;
    return 0;
CPyL84: ;
    cpy_r_r84 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r84 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 231, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r84);
CPyL85: ;
    cpy_r_r85 = CPyStatics[29]; /* 'result' */
    PyObject *cpy_r_r86[1] = {cpy_r_r84};
    cpy_r_r87 = (PyObject **)&cpy_r_r86;
    cpy_r_r88 = PyObject_VectorcallMethod(cpy_r_r85, cpy_r_r87, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r88 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 231, CPyStatic_globals);
        goto CPyL210;
    }
    CPy_DECREF(cpy_r_r84);
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL90;
    CPyGen_SetStopIterationValue(cpy_r_r88);
    CPy_DECREF(cpy_r_r88);
    if (!0) goto CPyL193;
    CPy_Unreachable();
CPyL90: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r88;
    return 0;
CPyL91: ;
    cpy_r_r90 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__loop;
    if (unlikely(cpy_r_r90 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "loop", 233, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r90);
CPyL92: ;
    cpy_r_r91 = CPyStatics[33]; /* 'create_future' */
    PyObject *cpy_r_r92[1] = {cpy_r_r90};
    cpy_r_r93 = (PyObject **)&cpy_r_r92;
    cpy_r_r94 = PyObject_VectorcallMethod(cpy_r_r91, cpy_r_r93, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r94 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 233, CPyStatic_globals);
        goto CPyL211;
    }
    CPy_DECREF(cpy_r_r90);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut = cpy_r_r94;
    cpy_r_r95 = 1;
    if (unlikely(!cpy_r_r95)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 233, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r96 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 234, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r96);
CPyL95: ;
    cpy_r_r97 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_args;
    if (unlikely(cpy_r_r97 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fn_args", 234, CPyStatic_globals);
        goto CPyL212;
    }
    CPy_INCREF(cpy_r_r97);
CPyL96: ;
    cpy_r_r98 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_kwargs;
    if (unlikely(cpy_r_r98 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fn_kwargs", 234, CPyStatic_globals);
        goto CPyL213;
    }
    CPy_INCREF(cpy_r_r98);
CPyL97: ;
    cpy_r_r99 = CPyStatics[34]; /* '__wrapped__' */
    cpy_r_r100 = CPyObject_GetAttr(cpy_r_r96, cpy_r_r99);
    CPy_DECREF_NO_IMM(cpy_r_r96);
    if (unlikely(cpy_r_r100 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 234, CPyStatic_globals);
        goto CPyL214;
    }
    cpy_r_r101 = PyDict_Copy(cpy_r_r98);
    CPy_DECREF(cpy_r_r98);
    if (unlikely(cpy_r_r101 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 234, CPyStatic_globals);
        goto CPyL215;
    }
    cpy_r_r102 = PyObject_Call(cpy_r_r100, cpy_r_r97, cpy_r_r101);
    CPy_DECREF(cpy_r_r100);
    CPy_DECREF(cpy_r_r97);
    CPy_DECREF(cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 234, CPyStatic_globals);
        goto CPyL193;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__coro != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__coro);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__coro = cpy_r_r102;
    cpy_r_r103 = 1;
    if (unlikely(!cpy_r_r103)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 234, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r104 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__loop;
    if (unlikely(cpy_r_r104 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "loop", 235, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r104);
CPyL102: ;
    cpy_r_r105 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__coro;
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "coro", 235, CPyStatic_globals);
        goto CPyL216;
    }
    CPy_INCREF(cpy_r_r105);
CPyL103: ;
    cpy_r_r106 = CPyStatics[35]; /* 'create_task' */
    PyObject *cpy_r_r107[2] = {cpy_r_r104, cpy_r_r105};
    cpy_r_r108 = (PyObject **)&cpy_r_r107;
    cpy_r_r109 = PyObject_VectorcallMethod(cpy_r_r106, cpy_r_r108, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r109 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 235, CPyStatic_globals);
        goto CPyL217;
    }
    CPy_DECREF(cpy_r_r104);
    CPy_DECREF(cpy_r_r105);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task = cpy_r_r109;
    cpy_r_r110 = 1;
    if (unlikely(!cpy_r_r110)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 235, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r111 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r111 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 236, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r111);
CPyL106: ;
    cpy_r_r112 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r111)->___tasks;
    if (unlikely(cpy_r_r112 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__tasks' of '_LRUCacheWrapper' undefined");
    } else {
        CPy_INCREF(cpy_r_r112);
    }
    CPy_DECREF_NO_IMM(cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 236, CPyStatic_globals);
        goto CPyL193;
    }
CPyL107: ;
    cpy_r_r113 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task;
    if (unlikely(cpy_r_r113 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "task", 236, CPyStatic_globals);
        goto CPyL218;
    }
    CPy_INCREF(cpy_r_r113);
CPyL108: ;
    cpy_r_r114 = PySet_Add(cpy_r_r112, cpy_r_r113);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r113);
    cpy_r_r115 = cpy_r_r114 >= 0;
    if (unlikely(!cpy_r_r115)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 236, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r116 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__task;
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "task", 237, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r116);
CPyL110: ;
    cpy_r_r117 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r117 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 237, CPyStatic_globals);
        goto CPyL219;
    }
    CPy_INCREF_NO_IMM(cpy_r_r117);
CPyL111: ;
    cpy_r_r118 = CPyStatics[36]; /* '_task_done_callback' */
    cpy_r_r119 = CPyObject_GetAttr(cpy_r_r117, cpy_r_r118);
    CPy_DECREF_NO_IMM(cpy_r_r117);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 237, CPyStatic_globals);
        goto CPyL219;
    }
    cpy_r_r120 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 237, CPyStatic_globals);
        goto CPyL220;
    }
    CPy_INCREF(cpy_r_r120);
CPyL113: ;
    cpy_r_r121 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key;
    if (unlikely(cpy_r_r121 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "key", 237, CPyStatic_globals);
        goto CPyL221;
    }
    CPy_INCREF(cpy_r_r121);
CPyL114: ;
    cpy_r_r122 = CPyStatic_partial;
    if (unlikely(cpy_r_r122 == NULL)) {
        goto CPyL222;
    } else
        goto CPyL117;
CPyL115: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"partial\" was not set");
    cpy_r_r123 = 0;
    if (unlikely(!cpy_r_r123)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 237, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL117: ;
    PyObject *cpy_r_r124[3] = {cpy_r_r119, cpy_r_r120, cpy_r_r121};
    cpy_r_r125 = (PyObject **)&cpy_r_r124;
    cpy_r_r126 = PyObject_Vectorcall(cpy_r_r122, cpy_r_r125, 3, 0);
    if (unlikely(cpy_r_r126 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 237, CPyStatic_globals);
        goto CPyL223;
    }
    CPy_DECREF(cpy_r_r119);
    CPy_DECREF(cpy_r_r120);
    CPy_DECREF(cpy_r_r121);
    cpy_r_r127 = CPyStatics[37]; /* 'add_done_callback' */
    PyObject *cpy_r_r128[2] = {cpy_r_r116, cpy_r_r126};
    cpy_r_r129 = (PyObject **)&cpy_r_r128;
    cpy_r_r130 = PyObject_VectorcallMethod(cpy_r_r127, cpy_r_r129, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 237, CPyStatic_globals);
        goto CPyL224;
    } else
        goto CPyL225;
CPyL119: ;
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r126);
    cpy_r_r131 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r131 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 239, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r131);
CPyL120: ;
    cpy_r_r132 = Py_None;
    cpy_r_r133 = PyTuple_Pack(2, cpy_r_r131, cpy_r_r132);
    CPy_DECREF(cpy_r_r131);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 239, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r134 = PyDict_New();
    if (unlikely(cpy_r_r134 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 239, CPyStatic_globals);
        goto CPyL226;
    }
    cpy_r_r135 = CPyDef__CacheItem(cpy_r_r133, cpy_r_r134);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r134);
    if (unlikely(cpy_r_r135 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 239, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r136 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache;
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache", 239, CPyStatic_globals);
        goto CPyL227;
    }
    CPy_INCREF(cpy_r_r136);
CPyL124: ;
    cpy_r_r137 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key;
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "key", 239, CPyStatic_globals);
        goto CPyL228;
    }
    CPy_INCREF(cpy_r_r137);
CPyL125: ;
    cpy_r_r138 = CPyDict_SetItem(cpy_r_r136, cpy_r_r137, cpy_r_r135);
    CPy_DECREF(cpy_r_r136);
    CPy_DECREF(cpy_r_r137);
    CPy_DECREF_NO_IMM(cpy_r_r135);
    cpy_r_r139 = cpy_r_r138 >= 0;
    if (unlikely(!cpy_r_r139)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 239, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r140 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r140 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 241, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r140);
CPyL127: ;
    cpy_r_r141 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_r140)->___maxsize;
    if (unlikely(cpy_r_r141 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__maxsize' of '_LRUCacheWrapper' undefined");
    } else {
        CPy_INCREF(cpy_r_r141);
    }
    CPy_DECREF_NO_IMM(cpy_r_r140);
    if (unlikely(cpy_r_r141 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 241, CPyStatic_globals);
        goto CPyL193;
    }
CPyL128: ;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__maxsize != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__maxsize);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__maxsize = cpy_r_r141;
    cpy_r_r142 = 1;
    if (unlikely(!cpy_r_r142)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 241, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r143 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__maxsize;
    if (unlikely(cpy_r_r143 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "maxsize", 242, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r143);
CPyL130: ;
    cpy_r_r144 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r145 = cpy_r_r143 != cpy_r_r144;
    CPy_DECREF(cpy_r_r143);
    if (!cpy_r_r145) goto CPyL147;
    cpy_r_r146 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache;
    if (unlikely(cpy_r_r146 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache", 242, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r146);
CPyL132: ;
    cpy_r_r147 = PyDict_Size(cpy_r_r146);
    CPy_DECREF(cpy_r_r146);
    cpy_r_r148 = cpy_r_r147 << 1;
    cpy_r_r149 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__maxsize;
    if (unlikely(cpy_r_r149 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "maxsize", 242, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r149);
CPyL133: ;
    if (likely(PyLong_Check(cpy_r_r149)))
        cpy_r_r150 = CPyTagged_FromObject(cpy_r_r149);
    else {
        CPy_TypeError("int", cpy_r_r149); cpy_r_r150 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r149);
    if (unlikely(cpy_r_r150 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 242, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r151 = cpy_r_r148 & 1;
    cpy_r_r152 = cpy_r_r151 != 0;
    if (cpy_r_r152) goto CPyL136;
    cpy_r_r153 = cpy_r_r150 & 1;
    cpy_r_r154 = cpy_r_r153 != 0;
    if (!cpy_r_r154) goto CPyL137;
CPyL136: ;
    cpy_r_r155 = CPyTagged_IsLt_(cpy_r_r150, cpy_r_r148);
    cpy_r_r156 = cpy_r_r155;
    goto CPyL138;
CPyL137: ;
    cpy_r_r157 = (Py_ssize_t)cpy_r_r148 > (Py_ssize_t)cpy_r_r150;
    cpy_r_r156 = cpy_r_r157;
CPyL138: ;
    CPyTagged_DECREF(cpy_r_r150);
    if (!cpy_r_r156) goto CPyL147;
    cpy_r_r158 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache;
    if (unlikely(cpy_r_r158 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache", 243, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r158);
CPyL140: ;
    cpy_r_r159 = CPyStatics[38]; /* 'popitem' */
    cpy_r_r160 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r161[2] = {cpy_r_r158, cpy_r_r160};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = CPyStatics[138]; /* ('last',) */
    cpy_r_r164 = PyObject_VectorcallMethod(cpy_r_r159, cpy_r_r162, 9223372036854775809ULL, cpy_r_r163);
    if (unlikely(cpy_r_r164 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 243, CPyStatic_globals);
        goto CPyL229;
    }
    CPy_DECREF(cpy_r_r158);
    PyObject *__tmp16;
    if (unlikely(!(PyTuple_Check(cpy_r_r164) && PyTuple_GET_SIZE(cpy_r_r164) == 2))) {
        __tmp16 = NULL;
        goto __LL17;
    }
    __tmp16 = PyTuple_GET_ITEM(cpy_r_r164, 0);
    if (__tmp16 == NULL) goto __LL17;
    if (likely(Py_TYPE(PyTuple_GET_ITEM(cpy_r_r164, 1)) == CPyType__CacheItem))
        __tmp16 = PyTuple_GET_ITEM(cpy_r_r164, 1);
    else {
        __tmp16 = NULL;
    }
    if (__tmp16 == NULL) goto __LL17;
    __tmp16 = cpy_r_r164;
__LL17: ;
    if (unlikely(__tmp16 == NULL)) {
        CPy_TypeError("tuple[object, faster_async_lru._CacheItem]", cpy_r_r164); cpy_r_r165 = (tuple_T2OO) { NULL, NULL };
    } else {
        PyObject *__tmp18 = PyTuple_GET_ITEM(cpy_r_r164, 0);
        CPy_INCREF(__tmp18);
        PyObject *__tmp19;
        __tmp19 = __tmp18;
        cpy_r_r165.f0 = __tmp19;
        PyObject *__tmp20 = PyTuple_GET_ITEM(cpy_r_r164, 1);
        CPy_INCREF(__tmp20);
        PyObject *__tmp21;
        if (likely(Py_TYPE(__tmp20) == CPyType__CacheItem))
            __tmp21 = __tmp20;
        else {
            CPy_TypeError("faster_async_lru._CacheItem", __tmp20); 
            __tmp21 = NULL;
        }
        cpy_r_r165.f1 = __tmp21;
    }
    CPy_DECREF(cpy_r_r164);
    if (unlikely(cpy_r_r165.f0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 243, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r166 = cpy_r_r165.f0;
    cpy_r_r167 = cpy_r_r165.f1;
    cpy_r_r168 = cpy_r_r166;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__dropped_key != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__dropped_key);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__dropped_key = cpy_r_r168;
    cpy_r_r169 = 1;
    if (unlikely(!cpy_r_r169)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 243, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r170 = cpy_r_r167;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item = cpy_r_r170;
    cpy_r_r171 = 1;
    if (unlikely(!cpy_r_r171)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 243, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r172 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__cache_item;
    if (unlikely(cpy_r_r172 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "cache_item", 244, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r172);
CPyL145: ;
    if (likely(cpy_r_r172 != Py_None))
        cpy_r_r173 = cpy_r_r172;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__call__", 244, CPyStatic_globals, "faster_async_lru._CacheItem", cpy_r_r172);
        goto CPyL193;
    }
    cpy_r_r174 = CPyDef__CacheItem___cancel(cpy_r_r173);
    CPy_DECREF_NO_IMM(cpy_r_r173);
    if (unlikely(cpy_r_r174 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 244, CPyStatic_globals);
        goto CPyL193;
    }
CPyL147: ;
    cpy_r_r175 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r175 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "self", 246, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF_NO_IMM(cpy_r_r175);
CPyL148: ;
    cpy_r_r176 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__key;
    if (unlikely(cpy_r_r176 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "key", 246, CPyStatic_globals);
        goto CPyL230;
    }
    CPy_INCREF(cpy_r_r176);
CPyL149: ;
    cpy_r_r177 = CPyDef__LRUCacheWrapper____cache_miss(cpy_r_r175, cpy_r_r176);
    CPy_DECREF(cpy_r_r176);
    CPy_DECREF_NO_IMM(cpy_r_r175);
    if (unlikely(cpy_r_r177 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 246, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r178 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fut;
    if (unlikely(cpy_r_r178 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "fut", 247, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r178);
CPyL151: ;
    cpy_r_r179 = CPyStatic_shield;
    if (unlikely(cpy_r_r179 == NULL)) {
        goto CPyL231;
    } else
        goto CPyL154;
CPyL152: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"shield\" was not set");
    cpy_r_r180 = 0;
    if (unlikely(!cpy_r_r180)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL154: ;
    PyObject *cpy_r_r181[1] = {cpy_r_r178};
    cpy_r_r182 = (PyObject **)&cpy_r_r181;
    cpy_r_r183 = PyObject_Vectorcall(cpy_r_r179, cpy_r_r182, 1, 0);
    if (unlikely(cpy_r_r183 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL232;
    }
    CPy_DECREF(cpy_r_r178);
    cpy_r_r184 = CPy_GetCoro(cpy_r_r183);
    CPy_DECREF(cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL193;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r184;
    cpy_r_r185 = 1;
    if (unlikely(!cpy_r_r185)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r186 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r186 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__6", -1, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r186);
CPyL158: ;
    cpy_r_r187 = CPyIter_Next(cpy_r_r186);
    CPy_DECREF(cpy_r_r186);
    if (cpy_r_r187 != NULL) goto CPyL161;
    cpy_r_r188 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r188 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r189 = cpy_r_r188;
    cpy_r_r190 = NULL;
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6 = cpy_r_r190;
    cpy_r_r191 = 1;
    if (unlikely(!cpy_r_r191)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL233;
    } else
        goto CPyL183;
CPyL161: ;
    cpy_r_r192 = cpy_r_r187;
CPyL162: ;
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 2;
    return cpy_r_r192;
CPyL163: ;
    cpy_r_r194 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r195 = cpy_r_type != cpy_r_r194;
    if (!cpy_r_r195) goto CPyL234;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL167;
    } else
        goto CPyL235;
CPyL165: ;
    CPy_Unreachable();
CPyL166: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL178;
CPyL167: ;
    cpy_r_r196 = CPy_CatchError();
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f0);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f1);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7.f2);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7 = cpy_r_r196;
    cpy_r_r197 = 1;
    if (unlikely(!cpy_r_r197)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL236;
    }
    cpy_r_r198 = (PyObject **)&cpy_r_r3;
    cpy_r_r199 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r199 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__6", -1, CPyStatic_globals);
        goto CPyL236;
    }
    CPy_INCREF(cpy_r_r199);
CPyL169: ;
    cpy_r_r200 = CPy_YieldFromErrorHandle(cpy_r_r199, cpy_r_r198);
    CPy_DecRef(cpy_r_r199);
    if (unlikely(cpy_r_r200 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL236;
    }
    if (cpy_r_r200) goto CPyL173;
    cpy_r_r192 = cpy_r_r3;
    cpy_r_r201 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r201.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__7", -1, CPyStatic_globals);
        goto CPyL237;
    }
    CPy_INCREF(cpy_r_r201.f0);
    CPy_INCREF(cpy_r_r201.f1);
    CPy_INCREF(cpy_r_r201.f2);
CPyL172: ;
    CPy_RestoreExcInfo(cpy_r_r201);
    CPy_DecRef(cpy_r_r201.f0);
    CPy_DecRef(cpy_r_r201.f1);
    CPy_DecRef(cpy_r_r201.f2);
    goto CPyL162;
CPyL173: ;
    cpy_r_r189 = cpy_r_r3;
    cpy_r_r202 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r202.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__7", -1, CPyStatic_globals);
        goto CPyL238;
    }
    CPy_INCREF(cpy_r_r202.f0);
    CPy_INCREF(cpy_r_r202.f1);
    CPy_INCREF(cpy_r_r202.f2);
CPyL174: ;
    CPy_RestoreExcInfo(cpy_r_r202);
    CPy_DecRef(cpy_r_r202.f0);
    CPy_DecRef(cpy_r_r202.f1);
    CPy_DecRef(cpy_r_r202.f2);
    goto CPyL183;
CPyL175: ;
    cpy_r_r203 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__7;
    if (unlikely(cpy_r_r203.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__7", -1, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_INCREF(cpy_r_r203.f0);
    CPy_INCREF(cpy_r_r203.f1);
    CPy_INCREF(cpy_r_r203.f2);
CPyL176: ;
    CPy_RestoreExcInfo(cpy_r_r203);
    CPy_DecRef(cpy_r_r203.f0);
    CPy_DecRef(cpy_r_r203.f1);
    CPy_DecRef(cpy_r_r203.f2);
    cpy_r_r204 = CPy_KeepPropagating();
    if (!cpy_r_r204) goto CPyL193;
    CPy_Unreachable();
CPyL178: ;
    cpy_r_r205 = ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__6;
    if (unlikely(cpy_r_r205 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapper_gen", "__mypyc_temp__6", -1, CPyStatic_globals);
        goto CPyL239;
    }
    CPy_INCREF(cpy_r_r205);
CPyL179: ;
    cpy_r_r206 = CPyIter_Send(cpy_r_r205, cpy_r_arg);
    CPy_DECREF(cpy_r_r205);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r206 == NULL) goto CPyL181;
    cpy_r_r192 = cpy_r_r206;
    goto CPyL162;
CPyL181: ;
    cpy_r_r207 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 247, CPyStatic_globals);
        goto CPyL193;
    }
    cpy_r_r189 = cpy_r_r207;
CPyL183: ;
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL187;
    CPyGen_SetStopIterationValue(cpy_r_r189);
    CPy_DECREF(cpy_r_r189);
    if (!0) goto CPyL193;
    CPy_Unreachable();
CPyL187: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r189;
    return 0;
CPyL188: ;
    cpy_r_r209 = cpy_r_r4 == 0;
    if (cpy_r_r209) goto CPyL240;
    cpy_r_r210 = cpy_r_r4 == 1;
    if (cpy_r_r210) {
        goto CPyL241;
    } else
        goto CPyL242;
CPyL190: ;
    cpy_r_r211 = cpy_r_r4 == 2;
    if (cpy_r_r211) {
        goto CPyL163;
    } else
        goto CPyL243;
CPyL191: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r212 = 0;
    if (unlikely(!cpy_r_r212)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL193;
    }
    CPy_Unreachable();
CPyL193: ;
    cpy_r_r213 = NULL;
    return cpy_r_r213;
CPyL194: ;
    CPy_DecRef(cpy_r_r12);
    goto CPyL193;
CPyL195: ;
    CPy_DecRef(cpy_r_r23);
    goto CPyL193;
CPyL196: ;
    CPy_DecRef(cpy_r_r23);
    CPy_DecRef(cpy_r_r24);
    goto CPyL193;
CPyL197: ;
    CPy_DecRef(cpy_r_r32);
    goto CPyL193;
CPyL198: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL193;
CPyL199: ;
    CPy_DecRef(cpy_r_r43);
    goto CPyL193;
CPyL200: ;
    CPy_DecRef(cpy_r_r47);
    goto CPyL193;
CPyL201: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL48;
CPyL202: ;
    CPy_DecRef(cpy_r_r53);
    goto CPyL193;
CPyL203: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL193;
CPyL204: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL62;
CPyL205: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL61;
CPyL206: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL71;
CPyL207: ;
    CPy_DecRef(cpy_r_r67);
    goto CPyL71;
CPyL208: ;
    CPy_DecRef(cpy_r_r64);
    goto CPyL71;
CPyL209: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL193;
CPyL210: ;
    CPy_DecRef(cpy_r_r84);
    goto CPyL193;
CPyL211: ;
    CPy_DecRef(cpy_r_r90);
    goto CPyL193;
CPyL212: ;
    CPy_DecRef(cpy_r_r96);
    goto CPyL193;
CPyL213: ;
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r97);
    goto CPyL193;
CPyL214: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r98);
    goto CPyL193;
CPyL215: ;
    CPy_DecRef(cpy_r_r97);
    CPy_DecRef(cpy_r_r100);
    goto CPyL193;
CPyL216: ;
    CPy_DecRef(cpy_r_r104);
    goto CPyL193;
CPyL217: ;
    CPy_DecRef(cpy_r_r104);
    CPy_DecRef(cpy_r_r105);
    goto CPyL193;
CPyL218: ;
    CPy_DecRef(cpy_r_r112);
    goto CPyL193;
CPyL219: ;
    CPy_DecRef(cpy_r_r116);
    goto CPyL193;
CPyL220: ;
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    goto CPyL193;
CPyL221: ;
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    goto CPyL193;
CPyL222: ;
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL115;
CPyL223: ;
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r119);
    CPy_DecRef(cpy_r_r120);
    CPy_DecRef(cpy_r_r121);
    goto CPyL193;
CPyL224: ;
    CPy_DecRef(cpy_r_r116);
    CPy_DecRef(cpy_r_r126);
    goto CPyL193;
CPyL225: ;
    CPy_DECREF(cpy_r_r130);
    goto CPyL119;
CPyL226: ;
    CPy_DecRef(cpy_r_r133);
    goto CPyL193;
CPyL227: ;
    CPy_DecRef(cpy_r_r135);
    goto CPyL193;
CPyL228: ;
    CPy_DecRef(cpy_r_r135);
    CPy_DecRef(cpy_r_r136);
    goto CPyL193;
CPyL229: ;
    CPy_DecRef(cpy_r_r158);
    goto CPyL193;
CPyL230: ;
    CPy_DecRef(cpy_r_r175);
    goto CPyL193;
CPyL231: ;
    CPy_DecRef(cpy_r_r178);
    goto CPyL152;
CPyL232: ;
    CPy_DecRef(cpy_r_r178);
    goto CPyL193;
CPyL233: ;
    CPy_DecRef(cpy_r_r189);
    goto CPyL193;
CPyL234: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL166;
CPyL235: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL165;
CPyL236: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL175;
CPyL237: ;
    CPy_DecRef(cpy_r_r192);
    goto CPyL175;
CPyL238: ;
    CPy_DecRef(cpy_r_r189);
    goto CPyL175;
CPyL239: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL193;
CPyL240: ;
    CPy_XDECREF(cpy_r_r1);
    CPy_XDECREF(cpy_r_r3);
    goto CPyL1;
CPyL241: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL59;
CPyL242: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL190;
CPyL243: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL191;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__next__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "send", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__iter__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "throw", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef___call___3__LRUCacheWrapper_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp22 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp22);
    PyObject *__tmp23 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp23);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "close", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapper_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapper_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapper_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__await__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapper_____call__(PyObject *cpy_r_self, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef___call___3__LRUCacheWrapper_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL5;
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fn_args);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args = cpy_r_fn_args;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fn_kwargs);
    if (((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapper_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs = cpy_r_fn_kwargs;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
        goto CPyL6;
    }
    return cpy_r_r0;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy__LRUCacheWrapper_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_fn_args;
    PyObject *obj_fn_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fn_args, &obj_fn_kwargs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_fn_args = obj_fn_args;
    PyObject *arg_fn_kwargs = obj_fn_kwargs;
    PyObject *retval = CPyDef__LRUCacheWrapper_____call__(arg_self, arg_fn_args, arg_fn_kwargs);
    CPy_DECREF(obj_fn_args);
    CPy_DECREF(obj_fn_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_fn_args);
    CPy_DECREF(obj_fn_kwargs);
    CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 212, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapper_____get__(PyObject *cpy_r_self, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_owner == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF_NO_IMM(cpy_r_self);
    return cpy_r_self;
CPyL2: ;
    cpy_r_r2 = CPyDef__LRUCacheWrapperInstanceMethod(cpy_r_self, cpy_r_instance);
    if (unlikely(cpy_r_r2 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__get__", 255, CPyStatic_globals);
        goto CPyL4;
    }
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy__LRUCacheWrapper_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapper))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_self); 
        goto fail;
    }
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner;
    arg_owner = obj_owner;
    if (arg_owner != NULL) goto __LL24;
    if (obj_owner == Py_None)
        arg_owner = obj_owner;
    else {
        arg_owner = NULL;
    }
    if (arg_owner != NULL) goto __LL24;
    CPy_TypeError("object or None", obj_owner); 
    goto fail;
__LL24: ;
    PyObject *retval = CPyDef__LRUCacheWrapper_____get__(arg_self, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__get__", 249, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapperInstanceMethod_____init__(PyObject *cpy_r_self, PyObject *cpy_r_wrapper, PyObject *cpy_r_instance) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    tuple_T3OOO cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    char cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    tuple_T3OOO cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    tuple_T3OOO cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    char cpy_r_r23;
    PyObject *cpy_r_r24;
    char cpy_r_r25;
    tuple_T3OOO cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    char cpy_r_r33;
    tuple_T3OOO cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    char cpy_r_r42;
    tuple_T3OOO cpy_r_r43;
    PyObject *cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    tuple_T2II cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    char cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    char cpy_r_r60;
    PyObject *cpy_r_r61;
    char cpy_r_r62;
    char cpy_r_r63;
    char cpy_r_r64;
    char cpy_r_r65;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___module__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__module__", 266, CPyStatic_globals);
        goto CPyL3;
    }
    CPy_INCREF(cpy_r_r0);
CPyL2: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___module__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___module__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___module__ = cpy_r_r0;
    cpy_r_r1 = 1;
    if (unlikely(!cpy_r_r1)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 266, CPyStatic_globals);
    } else
        goto CPyL10;
CPyL3: ;
    cpy_r_r2 = CPy_CatchError();
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 267, CPyStatic_globals);
        goto CPyL8;
    }
    cpy_r_r6 = CPy_ExceptionMatches(cpy_r_r5);
    CPy_DecRef(cpy_r_r5);
    if (cpy_r_r6) goto CPyL7;
    CPy_Reraise();
    if (!0) {
        goto CPyL8;
    } else
        goto CPyL69;
CPyL6: ;
    CPy_Unreachable();
CPyL7: ;
    CPy_RestoreExcInfo(cpy_r_r2);
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    goto CPyL10;
CPyL8: ;
    CPy_RestoreExcInfo(cpy_r_r2);
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    cpy_r_r7 = CPy_KeepPropagating();
    if (!cpy_r_r7) goto CPyL68;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r8 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___name__;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__name__", 270, CPyStatic_globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r8);
CPyL11: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___name__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___name__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___name__ = cpy_r_r8;
    cpy_r_r9 = 1;
    if (unlikely(!cpy_r_r9)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 270, CPyStatic_globals);
    } else
        goto CPyL19;
CPyL12: ;
    cpy_r_r10 = CPy_CatchError();
    cpy_r_r11 = CPyModule_builtins;
    cpy_r_r12 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r13 = CPyObject_GetAttr(cpy_r_r11, cpy_r_r12);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 271, CPyStatic_globals);
        goto CPyL17;
    }
    cpy_r_r14 = CPy_ExceptionMatches(cpy_r_r13);
    CPy_DecRef(cpy_r_r13);
    if (cpy_r_r14) goto CPyL16;
    CPy_Reraise();
    if (!0) {
        goto CPyL17;
    } else
        goto CPyL70;
CPyL15: ;
    CPy_Unreachable();
CPyL16: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL19;
CPyL17: ;
    CPy_RestoreExcInfo(cpy_r_r10);
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    cpy_r_r15 = CPy_KeepPropagating();
    if (!cpy_r_r15) goto CPyL68;
    CPy_Unreachable();
CPyL19: ;
    cpy_r_r16 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___qualname__;
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__qualname__", 274, CPyStatic_globals);
        goto CPyL21;
    }
    CPy_INCREF(cpy_r_r16);
CPyL20: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___qualname__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___qualname__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___qualname__ = cpy_r_r16;
    cpy_r_r17 = 1;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 274, CPyStatic_globals);
    } else
        goto CPyL28;
CPyL21: ;
    cpy_r_r18 = CPy_CatchError();
    cpy_r_r19 = CPyModule_builtins;
    cpy_r_r20 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 275, CPyStatic_globals);
        goto CPyL26;
    }
    cpy_r_r22 = CPy_ExceptionMatches(cpy_r_r21);
    CPy_DecRef(cpy_r_r21);
    if (cpy_r_r22) goto CPyL25;
    CPy_Reraise();
    if (!0) {
        goto CPyL26;
    } else
        goto CPyL71;
CPyL24: ;
    CPy_Unreachable();
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r18);
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    goto CPyL28;
CPyL26: ;
    CPy_RestoreExcInfo(cpy_r_r18);
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    cpy_r_r23 = CPy_KeepPropagating();
    if (!cpy_r_r23) goto CPyL68;
    CPy_Unreachable();
CPyL28: ;
    cpy_r_r24 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___doc__;
    if (unlikely(cpy_r_r24 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__doc__", 278, CPyStatic_globals);
        goto CPyL30;
    }
    CPy_INCREF(cpy_r_r24);
CPyL29: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___doc__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___doc__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___doc__ = cpy_r_r24;
    cpy_r_r25 = 1;
    if (unlikely(!cpy_r_r25)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 278, CPyStatic_globals);
    } else
        goto CPyL37;
CPyL30: ;
    cpy_r_r26 = CPy_CatchError();
    cpy_r_r27 = CPyModule_builtins;
    cpy_r_r28 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r29 = CPyObject_GetAttr(cpy_r_r27, cpy_r_r28);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 279, CPyStatic_globals);
        goto CPyL35;
    }
    cpy_r_r30 = CPy_ExceptionMatches(cpy_r_r29);
    CPy_DecRef(cpy_r_r29);
    if (cpy_r_r30) goto CPyL34;
    CPy_Reraise();
    if (!0) {
        goto CPyL35;
    } else
        goto CPyL72;
CPyL33: ;
    CPy_Unreachable();
CPyL34: ;
    CPy_RestoreExcInfo(cpy_r_r26);
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    goto CPyL37;
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r26);
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    cpy_r_r31 = CPy_KeepPropagating();
    if (!cpy_r_r31) goto CPyL68;
    CPy_Unreachable();
CPyL37: ;
    cpy_r_r32 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___annotations__;
    if (unlikely(cpy_r_r32 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__annotations__", 282, CPyStatic_globals);
        goto CPyL39;
    }
    CPy_INCREF(cpy_r_r32);
CPyL38: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___annotations__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___annotations__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___annotations__ = cpy_r_r32;
    cpy_r_r33 = 1;
    if (unlikely(!cpy_r_r33)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 282, CPyStatic_globals);
    } else
        goto CPyL46;
CPyL39: ;
    cpy_r_r34 = CPy_CatchError();
    cpy_r_r35 = CPyModule_builtins;
    cpy_r_r36 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r37 = CPyObject_GetAttr(cpy_r_r35, cpy_r_r36);
    if (unlikely(cpy_r_r37 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 283, CPyStatic_globals);
        goto CPyL44;
    }
    cpy_r_r38 = CPy_ExceptionMatches(cpy_r_r37);
    CPy_DecRef(cpy_r_r37);
    if (cpy_r_r38) goto CPyL43;
    CPy_Reraise();
    if (!0) {
        goto CPyL44;
    } else
        goto CPyL73;
CPyL42: ;
    CPy_Unreachable();
CPyL43: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL46;
CPyL44: ;
    CPy_RestoreExcInfo(cpy_r_r34);
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    cpy_r_r39 = CPy_KeepPropagating();
    if (!cpy_r_r39) goto CPyL68;
    CPy_Unreachable();
CPyL46: ;
    cpy_r_r40 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___dict__;
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__dict__", 286, CPyStatic_globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r40);
CPyL47: ;
    cpy_r_r41 = PyDict_Copy(cpy_r_r40);
    CPy_DECREF(cpy_r_r40);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 286, CPyStatic_globals);
        goto CPyL49;
    }
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___dict__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___dict__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___dict__ = cpy_r_r41;
    cpy_r_r42 = 1;
    if (unlikely(!cpy_r_r42)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 286, CPyStatic_globals);
    } else
        goto CPyL56;
CPyL49: ;
    cpy_r_r43 = CPy_CatchError();
    cpy_r_r44 = CPyModule_builtins;
    cpy_r_r45 = CPyStatics[5]; /* 'AttributeError' */
    cpy_r_r46 = CPyObject_GetAttr(cpy_r_r44, cpy_r_r45);
    if (unlikely(cpy_r_r46 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 287, CPyStatic_globals);
        goto CPyL54;
    }
    cpy_r_r47 = CPy_ExceptionMatches(cpy_r_r46);
    CPy_DecRef(cpy_r_r46);
    if (cpy_r_r47) goto CPyL53;
    CPy_Reraise();
    if (!0) {
        goto CPyL54;
    } else
        goto CPyL74;
CPyL52: ;
    CPy_Unreachable();
CPyL53: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL56;
CPyL54: ;
    CPy_RestoreExcInfo(cpy_r_r43);
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    cpy_r_r48 = CPy_KeepPropagating();
    if (!cpy_r_r48) goto CPyL68;
    CPy_Unreachable();
CPyL56: ;
    cpy_r_r49 = CPyModule_sys;
    cpy_r_r50 = CPyStatics[10]; /* 'version_info' */
    cpy_r_r51 = CPyObject_GetAttr(cpy_r_r49, cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 291, CPyStatic_globals);
        goto CPyL68;
    }
    if (likely(PyTuple_Check(cpy_r_r51)))
        cpy_r_r52 = cpy_r_r51;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "__init__", 291, CPyStatic_globals, "tuple", cpy_r_r51);
        goto CPyL68;
    }
    cpy_r_r53.f0 = 6;
    cpy_r_r53.f1 = 28;
    cpy_r_r54 = PyTuple_New(2);
    if (unlikely(cpy_r_r54 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp25 = CPyTagged_StealAsObject(cpy_r_r53.f0);
    PyTuple_SET_ITEM(cpy_r_r54, 0, __tmp25);
    PyObject *__tmp26 = CPyTagged_StealAsObject(cpy_r_r53.f1);
    PyTuple_SET_ITEM(cpy_r_r54, 1, __tmp26);
    cpy_r_r55 = PyObject_RichCompare(cpy_r_r52, cpy_r_r54, 0);
    CPy_DECREF(cpy_r_r52);
    CPy_DECREF(cpy_r_r54);
    if (unlikely(cpy_r_r55 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 291, CPyStatic_globals);
        goto CPyL68;
    }
    if (unlikely(!PyBool_Check(cpy_r_r55))) {
        CPy_TypeError("bool", cpy_r_r55); cpy_r_r56 = 2;
    } else
        cpy_r_r56 = cpy_r_r55 == Py_True;
    CPy_DECREF(cpy_r_r55);
    if (unlikely(cpy_r_r56 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 291, CPyStatic_globals);
        goto CPyL68;
    }
    if (!cpy_r_r56) goto CPyL63;
    cpy_r_r57 = CPyStatic_globals;
    cpy_r_r58 = CPyStatics[11]; /* '_is_coroutine' */
    cpy_r_r59 = CPyDict_GetItem(cpy_r_r57, cpy_r_r58);
    if (unlikely(cpy_r_r59 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 292, CPyStatic_globals);
        goto CPyL68;
    }
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->__is_coroutine != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->__is_coroutine);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->__is_coroutine = cpy_r_r59;
    cpy_r_r60 = 1;
    if (unlikely(!cpy_r_r60)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 292, CPyStatic_globals);
        goto CPyL68;
    }
CPyL63: ;
    cpy_r_r61 = ((faster_async_lru____LRUCacheWrapperObject *)cpy_r_wrapper)->___wrapped__;
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__init__", "_LRUCacheWrapper", "__wrapped__", 293, CPyStatic_globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r61);
CPyL64: ;
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapped__ != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapped__);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapped__ = cpy_r_r61;
    cpy_r_r62 = 1;
    if (unlikely(!cpy_r_r62)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 293, CPyStatic_globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_instance);
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___instance != NULL) {
        CPy_DECREF(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___instance);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___instance = cpy_r_instance;
    cpy_r_r63 = 1;
    if (unlikely(!cpy_r_r63)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 294, CPyStatic_globals);
        goto CPyL68;
    }
    CPy_INCREF_NO_IMM(cpy_r_wrapper);
    if (((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper);
    }
    ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper = cpy_r_wrapper;
    cpy_r_r64 = 1;
    if (unlikely(!cpy_r_r64)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 295, CPyStatic_globals);
        goto CPyL68;
    }
    return 1;
CPyL68: ;
    cpy_r_r65 = 2;
    return cpy_r_r65;
CPyL69: ;
    CPy_DecRef(cpy_r_r2.f0);
    CPy_DecRef(cpy_r_r2.f1);
    CPy_DecRef(cpy_r_r2.f2);
    goto CPyL6;
CPyL70: ;
    CPy_DecRef(cpy_r_r10.f0);
    CPy_DecRef(cpy_r_r10.f1);
    CPy_DecRef(cpy_r_r10.f2);
    goto CPyL15;
CPyL71: ;
    CPy_DecRef(cpy_r_r18.f0);
    CPy_DecRef(cpy_r_r18.f1);
    CPy_DecRef(cpy_r_r18.f2);
    goto CPyL24;
CPyL72: ;
    CPy_DecRef(cpy_r_r26.f0);
    CPy_DecRef(cpy_r_r26.f1);
    CPy_DecRef(cpy_r_r26.f2);
    goto CPyL33;
CPyL73: ;
    CPy_DecRef(cpy_r_r34.f0);
    CPy_DecRef(cpy_r_r34.f1);
    CPy_DecRef(cpy_r_r34.f2);
    goto CPyL42;
CPyL74: ;
    CPy_DecRef(cpy_r_r43.f0);
    CPy_DecRef(cpy_r_r43.f1);
    CPy_DecRef(cpy_r_r43.f2);
    goto CPyL52;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod_____init__(PyObject *self, PyObject *args, PyObject *kw) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"wrapper", "instance", 0};
    PyObject *obj_wrapper;
    PyObject *obj_instance;
    if (!CPyArg_ParseTupleAndKeywords(args, kw, "OO", "__init__", kwlist, &obj_wrapper, &obj_instance)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    PyObject *arg_wrapper;
    if (likely(Py_TYPE(obj_wrapper) == CPyType__LRUCacheWrapper))
        arg_wrapper = obj_wrapper;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapper", obj_wrapper); 
        goto fail;
    }
    PyObject *arg_instance = obj_instance;
    char retval = CPyDef__LRUCacheWrapperInstanceMethod_____init__(arg_self, arg_wrapper, arg_instance);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 260, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapperInstanceMethod___cache_invalidate(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    CPyPtr cpy_r_r5;
    CPyPtr cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    char cpy_r_r14;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_invalidate", "_LRUCacheWrapperInstanceMethod", "__wrapper", 298, CPyStatic_globals);
        goto CPyL11;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___instance;
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_invalidate", "_LRUCacheWrapperInstanceMethod", "__instance", 298, CPyStatic_globals);
        goto CPyL12;
    }
    CPy_INCREF(cpy_r_r1);
CPyL2: ;
    cpy_r_r2 = CPyStatics[40]; /* 'cache_invalidate' */
    cpy_r_r3 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r2);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r4 = PyList_New(1);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_r5 = (CPyPtr)&((PyListObject *)cpy_r_r4)->ob_item;
    cpy_r_r6 = *(CPyPtr *)cpy_r_r5;
    *(PyObject * *)cpy_r_r6 = cpy_r_r1;
    cpy_r_r7 = CPyList_Extend(cpy_r_r4, cpy_r_args);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL15;
    } else
        goto CPyL16;
CPyL5: ;
    cpy_r_r8 = PyDict_New();
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL15;
    }
    cpy_r_r9 = CPyDict_UpdateInDisplay(cpy_r_r8, cpy_r_kwargs);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL17;
    }
    cpy_r_r11 = PyList_AsTuple(cpy_r_r4);
    CPy_DECREF_NO_IMM(cpy_r_r4);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL18;
    }
    cpy_r_r12 = PyObject_Call(cpy_r_r3, cpy_r_r11, cpy_r_r8);
    CPy_DECREF(cpy_r_r3);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL11;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 298, CPyStatic_globals);
        goto CPyL11;
    }
    return cpy_r_r13;
CPyL11: ;
    cpy_r_r14 = 2;
    return cpy_r_r14;
CPyL12: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL11;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL11;
CPyL14: ;
    CPy_DecRef(cpy_r_r1);
    CPy_DecRef(cpy_r_r3);
    goto CPyL11;
CPyL15: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    goto CPyL11;
CPyL16: ;
    CPy_DECREF(cpy_r_r7);
    goto CPyL5;
CPyL17: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r4);
    CPy_DecRef(cpy_r_r8);
    goto CPyL11;
CPyL18: ;
    CPy_DecRef(cpy_r_r3);
    CPy_DecRef(cpy_r_r8);
    goto CPyL11;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_invalidate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:cache_invalidate", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_args, &obj_kwargs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    PyObject *arg_args = obj_args;
    PyObject *arg_kwargs = obj_kwargs;
    char retval = CPyDef__LRUCacheWrapperInstanceMethod___cache_invalidate(arg_self, arg_args, arg_kwargs);
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = retval ? Py_True : Py_False;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_DECREF(obj_args);
    CPy_DECREF(obj_kwargs);
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_invalidate", 297, CPyStatic_globals);
    return NULL;
}

char CPyDef__LRUCacheWrapperInstanceMethod___cache_clear(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_clear", "_LRUCacheWrapperInstanceMethod", "__wrapper", 301, CPyStatic_globals);
        goto CPyL3;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef__LRUCacheWrapper___cache_clear(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 301, CPyStatic_globals);
        goto CPyL3;
    }
    return 1;
CPyL3: ;
    cpy_r_r2 = 2;
    return cpy_r_r2;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_clear", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    char retval = CPyDef__LRUCacheWrapperInstanceMethod___cache_clear(arg_self);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_clear", 300, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    char cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r15;
    PyObject *cpy_r_r16;
    char cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject *cpy_r_r19;
    char cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    char cpy_r_r24;
    tuple_T3OOO cpy_r_r25;
    char cpy_r_r26;
    PyObject **cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    tuple_T3OOO cpy_r_r30;
    tuple_T3OOO cpy_r_r31;
    tuple_T3OOO cpy_r_r32;
    char cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    char cpy_r_r38;
    char cpy_r_r39;
    char cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    CPy_XDECREF(cpy_r_r1);
    cpy_r_r2 = NULL;
    cpy_r_r3 = cpy_r_r2;
    cpy_r_r4 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL39;
CPyL1: ;
    cpy_r_r5 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r6 = cpy_r_type != cpy_r_r5;
    if (!cpy_r_r6) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r7 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "self", 306, CPyStatic_globals);
        goto CPyL43;
    }
    CPy_INCREF_NO_IMM(cpy_r_r7);
CPyL5: ;
    cpy_r_r8 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_r7)->___wrapper;
    if (unlikely(cpy_r_r8 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__wrapper' of '_LRUCacheWrapperInstanceMethod' undefined");
    } else {
        CPy_INCREF_NO_IMM(cpy_r_r8);
    }
    CPy_DECREF_NO_IMM(cpy_r_r7);
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL43;
    }
CPyL6: ;
    cpy_r_r9 = 2;
    cpy_r_r10 = CPyDef__LRUCacheWrapper___cache_close(cpy_r_r8, cpy_r_r9);
    CPy_DECREF_NO_IMM(cpy_r_r8);
    if (unlikely(cpy_r_r10 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL43;
    }
    if (((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r10;
    cpy_r_r11 = 1;
    if (unlikely(!cpy_r_r11)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL43;
    }
    cpy_r_r12 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__8", -1, CPyStatic_globals);
        goto CPyL43;
    }
    CPy_INCREF_NO_IMM(cpy_r_r12);
CPyL9: ;
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r14 = NULL;
    cpy_r_r1 = cpy_r_r14;
    cpy_r_r15 = (PyObject **)&cpy_r_r1;
    cpy_r_r16 = CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(cpy_r_r12, cpy_r_r13, cpy_r_r13, cpy_r_r13, cpy_r_r13, cpy_r_r15);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (cpy_r_r16 != NULL) goto CPyL44;
    cpy_r_r17 = cpy_r_r1 != 0;
    if (unlikely(!cpy_r_r17)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL45;
    }
    cpy_r_r18 = cpy_r_r1;
    CPy_DECREF(cpy_r_r18);
    cpy_r_r19 = NULL;
    if (((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8 = cpy_r_r19;
    cpy_r_r20 = 1;
    if (unlikely(!cpy_r_r20)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL43;
    } else
        goto CPyL34;
CPyL12: ;
    cpy_r_r21 = cpy_r_r16;
CPyL13: ;
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r21;
CPyL14: ;
    cpy_r_r23 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r24 = cpy_r_type != cpy_r_r23;
    if (!cpy_r_r24) goto CPyL46;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL18;
    } else
        goto CPyL47;
CPyL16: ;
    CPy_Unreachable();
CPyL17: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL29;
CPyL18: ;
    cpy_r_r25 = CPy_CatchError();
    if (((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0 != NULL) {
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f0);
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f1);
        CPy_DECREF(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9.f2);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9 = cpy_r_r25;
    cpy_r_r26 = 1;
    if (unlikely(!cpy_r_r26)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", -1, CPyStatic_globals);
        goto CPyL48;
    }
    cpy_r_r27 = (PyObject **)&cpy_r_r3;
    cpy_r_r28 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r28 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__8", -1, CPyStatic_globals);
        goto CPyL48;
    }
    CPy_INCREF_NO_IMM(cpy_r_r28);
CPyL20: ;
    cpy_r_r29 = CPy_YieldFromErrorHandle(cpy_r_r28, cpy_r_r27);
    CPy_DecRef(cpy_r_r28);
    if (unlikely(cpy_r_r29 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL48;
    }
    if (cpy_r_r29) goto CPyL24;
    cpy_r_r21 = cpy_r_r3;
    cpy_r_r30 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r30.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__9", -1, CPyStatic_globals);
        goto CPyL49;
    }
    CPy_INCREF(cpy_r_r30.f0);
    CPy_INCREF(cpy_r_r30.f1);
    CPy_INCREF(cpy_r_r30.f2);
CPyL23: ;
    CPy_RestoreExcInfo(cpy_r_r30);
    CPy_DecRef(cpy_r_r30.f0);
    CPy_DecRef(cpy_r_r30.f1);
    CPy_DecRef(cpy_r_r30.f2);
    goto CPyL13;
CPyL24: ;
    cpy_r_r18 = cpy_r_r3;
    CPy_DecRef(cpy_r_r18);
    cpy_r_r31 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r31.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__9", -1, CPyStatic_globals);
        goto CPyL26;
    }
    CPy_INCREF(cpy_r_r31.f0);
    CPy_INCREF(cpy_r_r31.f1);
    CPy_INCREF(cpy_r_r31.f2);
CPyL25: ;
    CPy_RestoreExcInfo(cpy_r_r31);
    CPy_DecRef(cpy_r_r31.f0);
    CPy_DecRef(cpy_r_r31.f1);
    CPy_DecRef(cpy_r_r31.f2);
    goto CPyL34;
CPyL26: ;
    cpy_r_r32 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__9;
    if (unlikely(cpy_r_r32.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__9", -1, CPyStatic_globals);
        goto CPyL43;
    }
    CPy_INCREF(cpy_r_r32.f0);
    CPy_INCREF(cpy_r_r32.f1);
    CPy_INCREF(cpy_r_r32.f2);
CPyL27: ;
    CPy_RestoreExcInfo(cpy_r_r32);
    CPy_DecRef(cpy_r_r32.f0);
    CPy_DecRef(cpy_r_r32.f1);
    CPy_DecRef(cpy_r_r32.f2);
    cpy_r_r33 = CPy_KeepPropagating();
    if (!cpy_r_r33) goto CPyL43;
    CPy_Unreachable();
CPyL29: ;
    cpy_r_r34 = ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__8;
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_close", "cache_close__LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__8", -1, CPyStatic_globals);
        goto CPyL50;
    }
    CPy_INCREF_NO_IMM(cpy_r_r34);
CPyL30: ;
    cpy_r_r35 = CPyIter_Send(cpy_r_r34, cpy_r_arg);
    CPy_DECREF_NO_IMM(cpy_r_r34);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r35 == NULL) goto CPyL32;
    cpy_r_r21 = cpy_r_r35;
    goto CPyL13;
CPyL32: ;
    cpy_r_r36 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 306, CPyStatic_globals);
        goto CPyL43;
    }
    cpy_r_r18 = cpy_r_r36;
    CPy_DECREF(cpy_r_r18);
CPyL34: ;
    cpy_r_r37 = Py_None;
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL38;
    CPyGen_SetStopIterationValue(cpy_r_r37);
    if (!0) goto CPyL43;
    CPy_Unreachable();
CPyL38: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r37;
    return 0;
CPyL39: ;
    cpy_r_r39 = cpy_r_r4 == 0;
    if (cpy_r_r39) goto CPyL51;
    cpy_r_r40 = cpy_r_r4 == 1;
    if (cpy_r_r40) {
        goto CPyL14;
    } else
        goto CPyL52;
CPyL41: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r41 = 0;
    if (unlikely(!cpy_r_r41)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL43;
    }
    CPy_Unreachable();
CPyL43: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL44: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL12;
CPyL45: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL43;
CPyL46: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL17;
CPyL47: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL16;
CPyL48: ;
    CPy_XDecRef(cpy_r_r3);
    goto CPyL26;
CPyL49: ;
    CPy_DecRef(cpy_r_r21);
    goto CPyL26;
CPyL50: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL43;
CPyL51: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL1;
CPyL52: ;
    CPy_XDECREF(cpy_r_r3);
    goto CPyL41;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__next__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "send", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__iter__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "throw", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp27 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp27);
    PyObject *__tmp28 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp28);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "close", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.cache_close__LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__await__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_close(PyObject *cpy_r_self, char cpy_r_cancel, char cpy_r_return_exceptions) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    if (cpy_r_cancel != 2) goto CPyL2;
    cpy_r_cancel = 0;
CPyL2: ;
    if (cpy_r_return_exceptions != 2) goto CPyL4;
    cpy_r_return_exceptions = 1;
CPyL4: ;
    cpy_r_r0 = CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL9;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL10;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__cancel = cpy_r_cancel;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL10;
    }
    ((faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__return_exceptions = cpy_r_return_exceptions;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
        goto CPyL10;
    }
    return cpy_r_r0;
CPyL9: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL10: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL9;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {"cancel", "return_exceptions", 0};
    static CPyArg_Parser parser = {"|$OO:cache_close", kwlist, 0};
    PyObject *obj_cancel = NULL;
    PyObject *obj_return_exceptions = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_cancel, &obj_return_exceptions)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    char arg_cancel;
    if (obj_cancel == NULL) {
        arg_cancel = 2;
    } else if (unlikely(!PyBool_Check(obj_cancel))) {
        CPy_TypeError("bool", obj_cancel); goto fail;
    } else
        arg_cancel = obj_cancel == Py_True;
    char arg_return_exceptions;
    if (obj_return_exceptions == NULL) {
        arg_return_exceptions = 2;
    } else if (unlikely(!PyBool_Check(obj_return_exceptions))) {
        CPy_TypeError("bool", obj_return_exceptions); goto fail;
    } else
        arg_return_exceptions = obj_return_exceptions == Py_True;
    PyObject *retval = CPyDef__LRUCacheWrapperInstanceMethod___cache_close(arg_self, arg_cancel, arg_return_exceptions);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_close", 303, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_info(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_info", "_LRUCacheWrapperInstanceMethod", "__wrapper", 309, CPyStatic_globals);
        goto CPyL3;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef__LRUCacheWrapper___cache_info(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_info", 309, CPyStatic_globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_info", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__LRUCacheWrapperInstanceMethod___cache_info(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_info", 308, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_parameters(PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_self)->___wrapper;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "cache_parameters", "_LRUCacheWrapperInstanceMethod", "__wrapper", 312, CPyStatic_globals);
        goto CPyL3;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    cpy_r_r1 = CPyDef__LRUCacheWrapper___cache_parameters(cpy_r_r0);
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "cache_parameters", 312, CPyStatic_globals);
        goto CPyL3;
    }
    return cpy_r_r1;
CPyL3: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":cache_parameters", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    PyObject *retval = CPyDef__LRUCacheWrapperInstanceMethod___cache_parameters(arg_self);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "cache_parameters", 311, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    int32_t cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    CPyPtr cpy_r_r13;
    CPyPtr cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    int32_t cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    char cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    char cpy_r_r28;
    PyObject *cpy_r_r29;
    char cpy_r_r30;
    PyObject *cpy_r_r31;
    char cpy_r_r32;
    tuple_T3OOO cpy_r_r33;
    char cpy_r_r34;
    PyObject **cpy_r_r35;
    PyObject *cpy_r_r36;
    char cpy_r_r37;
    tuple_T3OOO cpy_r_r38;
    tuple_T3OOO cpy_r_r39;
    tuple_T3OOO cpy_r_r40;
    char cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    PyObject *cpy_r_r44;
    char cpy_r_r45;
    char cpy_r_r46;
    char cpy_r_r47;
    char cpy_r_r48;
    PyObject *cpy_r_r49;
    cpy_r_r0 = NULL;
    cpy_r_r1 = cpy_r_r0;
    cpy_r_r2 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__;
    goto CPyL49;
CPyL1: ;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = cpy_r_type != cpy_r_r3;
    if (!cpy_r_r4) goto CPyL4;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL4: ;
    cpy_r_r5 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "self", 315, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_INCREF_NO_IMM(cpy_r_r5);
CPyL5: ;
    cpy_r_r6 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__self;
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "self", 315, CPyStatic_globals);
        goto CPyL54;
    }
    CPy_INCREF_NO_IMM(cpy_r_r6);
CPyL6: ;
    cpy_r_r7 = ((faster_async_lru____LRUCacheWrapperInstanceMethodObject *)cpy_r_r6)->___instance;
    if (unlikely(cpy_r_r7 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute '__instance' of '_LRUCacheWrapperInstanceMethod' undefined");
    } else {
        CPy_INCREF(cpy_r_r7);
    }
    CPy_DECREF_NO_IMM(cpy_r_r6);
    if (unlikely(cpy_r_r7 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL54;
    }
CPyL7: ;
    cpy_r_r8 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_args;
    if (unlikely(cpy_r_r8 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "fn_args", 315, CPyStatic_globals);
        goto CPyL55;
    }
    CPy_INCREF(cpy_r_r8);
CPyL8: ;
    cpy_r_r9 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_generator_attribute__fn_kwargs;
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "fn_kwargs", 315, CPyStatic_globals);
        goto CPyL56;
    }
    CPy_INCREF(cpy_r_r9);
CPyL9: ;
    cpy_r_r10 = CPyStatics[41]; /* '__wrapper' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_r5, cpy_r_r10);
    CPy_DECREF_NO_IMM(cpy_r_r5);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL57;
    }
    cpy_r_r12 = PyList_New(1);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL58;
    }
    cpy_r_r13 = (CPyPtr)&((PyListObject *)cpy_r_r12)->ob_item;
    cpy_r_r14 = *(CPyPtr *)cpy_r_r13;
    *(PyObject * *)cpy_r_r14 = cpy_r_r7;
    cpy_r_r15 = CPyList_Extend(cpy_r_r12, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r15 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL59;
    } else
        goto CPyL60;
CPyL12: ;
    cpy_r_r16 = PyDict_New();
    if (unlikely(cpy_r_r16 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL59;
    }
    cpy_r_r17 = CPyDict_UpdateInDisplay(cpy_r_r16, cpy_r_r9);
    CPy_DECREF(cpy_r_r9);
    cpy_r_r18 = cpy_r_r17 >= 0;
    if (unlikely(!cpy_r_r18)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL61;
    }
    cpy_r_r19 = PyList_AsTuple(cpy_r_r12);
    CPy_DECREF_NO_IMM(cpy_r_r12);
    if (unlikely(cpy_r_r19 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL62;
    }
    cpy_r_r20 = PyObject_Call(cpy_r_r11, cpy_r_r19, cpy_r_r16);
    CPy_DECREF(cpy_r_r11);
    CPy_DECREF(cpy_r_r19);
    CPy_DECREF(cpy_r_r16);
    if (unlikely(cpy_r_r20 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL53;
    }
    cpy_r_r21 = CPy_GetCoro(cpy_r_r20);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL53;
    }
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r21;
    cpy_r_r22 = 1;
    if (unlikely(!cpy_r_r22)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL53;
    }
    cpy_r_r23 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__10", -1, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r23);
CPyL19: ;
    cpy_r_r24 = CPyIter_Next(cpy_r_r23);
    CPy_DECREF(cpy_r_r23);
    if (cpy_r_r24 != NULL) goto CPyL22;
    cpy_r_r25 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r25 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL53;
    }
    cpy_r_r26 = cpy_r_r25;
    cpy_r_r27 = NULL;
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10 = cpy_r_r27;
    cpy_r_r28 = 1;
    if (unlikely(!cpy_r_r28)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL63;
    } else
        goto CPyL44;
CPyL22: ;
    cpy_r_r29 = cpy_r_r24;
CPyL23: ;
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = 1;
    return cpy_r_r29;
CPyL24: ;
    cpy_r_r31 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r32 = cpy_r_type != cpy_r_r31;
    if (!cpy_r_r32) goto CPyL64;
    CPyErr_SetObjectAndTraceback(cpy_r_type, cpy_r_value, cpy_r_traceback);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL28;
    } else
        goto CPyL65;
CPyL26: ;
    CPy_Unreachable();
CPyL27: ;
    CPy_INCREF(cpy_r_arg);
    goto CPyL39;
CPyL28: ;
    cpy_r_r33 = CPy_CatchError();
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0 != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f0);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f1);
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11.f2);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11 = cpy_r_r33;
    cpy_r_r34 = 1;
    if (unlikely(!cpy_r_r34)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", -1, CPyStatic_globals);
        goto CPyL66;
    }
    cpy_r_r35 = (PyObject **)&cpy_r_r1;
    cpy_r_r36 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r36 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__10", -1, CPyStatic_globals);
        goto CPyL66;
    }
    CPy_INCREF(cpy_r_r36);
CPyL30: ;
    cpy_r_r37 = CPy_YieldFromErrorHandle(cpy_r_r36, cpy_r_r35);
    CPy_DecRef(cpy_r_r36);
    if (unlikely(cpy_r_r37 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL66;
    }
    if (cpy_r_r37) goto CPyL34;
    cpy_r_r29 = cpy_r_r1;
    cpy_r_r38 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r38.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__11", -1, CPyStatic_globals);
        goto CPyL67;
    }
    CPy_INCREF(cpy_r_r38.f0);
    CPy_INCREF(cpy_r_r38.f1);
    CPy_INCREF(cpy_r_r38.f2);
CPyL33: ;
    CPy_RestoreExcInfo(cpy_r_r38);
    CPy_DecRef(cpy_r_r38.f0);
    CPy_DecRef(cpy_r_r38.f1);
    CPy_DecRef(cpy_r_r38.f2);
    goto CPyL23;
CPyL34: ;
    cpy_r_r26 = cpy_r_r1;
    cpy_r_r39 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r39.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__11", -1, CPyStatic_globals);
        goto CPyL68;
    }
    CPy_INCREF(cpy_r_r39.f0);
    CPy_INCREF(cpy_r_r39.f1);
    CPy_INCREF(cpy_r_r39.f2);
CPyL35: ;
    CPy_RestoreExcInfo(cpy_r_r39);
    CPy_DecRef(cpy_r_r39.f0);
    CPy_DecRef(cpy_r_r39.f1);
    CPy_DecRef(cpy_r_r39.f2);
    goto CPyL44;
CPyL36: ;
    cpy_r_r40 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__11;
    if (unlikely(cpy_r_r40.f0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__11", -1, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_INCREF(cpy_r_r40.f0);
    CPy_INCREF(cpy_r_r40.f1);
    CPy_INCREF(cpy_r_r40.f2);
CPyL37: ;
    CPy_RestoreExcInfo(cpy_r_r40);
    CPy_DecRef(cpy_r_r40.f0);
    CPy_DecRef(cpy_r_r40.f1);
    CPy_DecRef(cpy_r_r40.f2);
    cpy_r_r41 = CPy_KeepPropagating();
    if (!cpy_r_r41) goto CPyL53;
    CPy_Unreachable();
CPyL39: ;
    cpy_r_r42 = ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_temp__10;
    if (unlikely(cpy_r_r42 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "__call__", "__call____LRUCacheWrapperInstanceMethod_gen", "__mypyc_temp__10", -1, CPyStatic_globals);
        goto CPyL69;
    }
    CPy_INCREF(cpy_r_r42);
CPyL40: ;
    cpy_r_r43 = CPyIter_Send(cpy_r_r42, cpy_r_arg);
    CPy_DECREF(cpy_r_r42);
    CPy_DECREF(cpy_r_arg);
    if (cpy_r_r43 == NULL) goto CPyL42;
    cpy_r_r29 = cpy_r_r43;
    goto CPyL23;
CPyL42: ;
    cpy_r_r44 = CPy_FetchStopIterationValue();
    if (unlikely(cpy_r_r44 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 315, CPyStatic_globals);
        goto CPyL53;
    }
    cpy_r_r26 = cpy_r_r44;
CPyL44: ;
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r___mypyc_self__)->___mypyc_next_label__ = -1;
    if (cpy_r_stop_iter_ptr != NULL) goto CPyL48;
    CPyGen_SetStopIterationValue(cpy_r_r26);
    CPy_DECREF(cpy_r_r26);
    if (!0) goto CPyL53;
    CPy_Unreachable();
CPyL48: ;
    *(PyObject * *)cpy_r_stop_iter_ptr = cpy_r_r26;
    return 0;
CPyL49: ;
    cpy_r_r46 = cpy_r_r2 == 0;
    if (cpy_r_r46) goto CPyL70;
    cpy_r_r47 = cpy_r_r2 == 1;
    if (cpy_r_r47) {
        goto CPyL24;
    } else
        goto CPyL71;
CPyL51: ;
    PyErr_SetNone(PyExc_StopIteration);
    cpy_r_r48 = 0;
    if (unlikely(!cpy_r_r48)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL53;
    }
    CPy_Unreachable();
CPyL53: ;
    cpy_r_r49 = NULL;
    return cpy_r_r49;
CPyL54: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL53;
CPyL55: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    goto CPyL53;
CPyL56: ;
    CPy_DecRef(cpy_r_r5);
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    goto CPyL53;
CPyL57: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    goto CPyL53;
CPyL58: ;
    CPy_DecRef(cpy_r_r7);
    CPy_DecRef(cpy_r_r8);
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    goto CPyL53;
CPyL59: ;
    CPy_DecRef(cpy_r_r9);
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    goto CPyL53;
CPyL60: ;
    CPy_DECREF(cpy_r_r15);
    goto CPyL12;
CPyL61: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r12);
    CPy_DecRef(cpy_r_r16);
    goto CPyL53;
CPyL62: ;
    CPy_DecRef(cpy_r_r11);
    CPy_DecRef(cpy_r_r16);
    goto CPyL53;
CPyL63: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL53;
CPyL64: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL27;
CPyL65: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL26;
CPyL66: ;
    CPy_XDecRef(cpy_r_r1);
    goto CPyL36;
CPyL67: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL36;
CPyL68: ;
    CPy_DecRef(cpy_r_r26);
    goto CPyL36;
CPyL69: ;
    CPy_DecRef(cpy_r_arg);
    goto CPyL53;
CPyL70: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL1;
CPyL71: ;
    CPy_XDECREF(cpy_r_r1);
    goto CPyL51;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_r0, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__next__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____next__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__next__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_r0, cpy_r_r0, cpy_r_r0, cpy_r_arg, 0);
    if (cpy_r_r1 == NULL) goto CPyL2;
    return cpy_r_r1;
CPyL2: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"arg", 0};
    static CPyArg_Parser parser = {"O:send", kwlist, 0};
    PyObject *obj_arg;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, nargs, kwnames, &parser, &obj_arg)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_arg = obj_arg;
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___send(arg___mypyc_self__, arg_arg);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "send", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__iter__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__iter__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    if (cpy_r_value != NULL) goto CPyL7;
    CPy_INCREF(cpy_r_r0);
    cpy_r_value = cpy_r_r0;
CPyL2: ;
    if (cpy_r_traceback != NULL) goto CPyL8;
    CPy_INCREF(cpy_r_r0);
    cpy_r_traceback = cpy_r_r0;
CPyL4: ;
    cpy_r_r1 = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(cpy_r___mypyc_self__, cpy_r_type, cpy_r_value, cpy_r_traceback, cpy_r_r0, 0);
    CPy_DECREF(cpy_r_value);
    CPy_DECREF(cpy_r_traceback);
    if (cpy_r_r1 == NULL) goto CPyL6;
    return cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = NULL;
    return cpy_r_r2;
CPyL7: ;
    CPy_INCREF(cpy_r_value);
    goto CPyL2;
CPyL8: ;
    CPy_INCREF(cpy_r_traceback);
    goto CPyL4;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"type", "value", "traceback", 0};
    static CPyArg_Parser parser = {"O|OO:throw", kwlist, 0};
    PyObject *obj_type;
    PyObject *obj_value = NULL;
    PyObject *obj_traceback = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_type, &obj_value, &obj_traceback)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *arg_type = obj_type;
    PyObject *arg_value;
    if (obj_value == NULL) {
        arg_value = NULL;
    } else {
        arg_value = obj_value; 
    }
    PyObject *arg_traceback;
    if (obj_traceback == NULL) {
        arg_traceback = NULL;
    } else {
        arg_traceback = obj_traceback; 
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___throw(arg___mypyc_self__, arg_type, arg_value, arg_traceback);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "throw", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___close(PyObject *cpy_r___mypyc_self__) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    tuple_T3OOO cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    tuple_T2OO cpy_r_r10;
    PyObject *cpy_r_r11;
    char cpy_r_r12;
    PyObject *cpy_r_r13;
    char cpy_r_r14;
    PyObject *cpy_r_r15;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = CPyStatics[16]; /* 'GeneratorExit' */
    cpy_r_r2 = CPyObject_GetAttr(cpy_r_r0, cpy_r_r1);
    if (cpy_r_r2 == NULL) goto CPyL3;
    cpy_r_r3 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r4 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r5 = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___throw(cpy_r___mypyc_self__, cpy_r_r2, cpy_r_r3, cpy_r_r4);
    if (cpy_r_r5 != NULL) goto CPyL11;
CPyL3: ;
    cpy_r_r6 = CPy_CatchError();
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[17]; /* 'StopIteration' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (cpy_r_r9 == NULL) goto CPyL12;
    cpy_r_r10.f0 = cpy_r_r2;
    cpy_r_r10.f1 = cpy_r_r9;
    cpy_r_r11 = PyTuple_New(2);
    if (unlikely(cpy_r_r11 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp29 = cpy_r_r10.f0;
    PyTuple_SET_ITEM(cpy_r_r11, 0, __tmp29);
    PyObject *__tmp30 = cpy_r_r10.f1;
    PyTuple_SET_ITEM(cpy_r_r11, 1, __tmp30);
    cpy_r_r12 = CPy_ExceptionMatches(cpy_r_r11);
    CPy_DECREF(cpy_r_r11);
    if (!cpy_r_r12) goto CPyL13;
    CPy_RestoreExcInfo(cpy_r_r6);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    cpy_r_r13 = (PyObject *)&_Py_NoneStruct;
    CPy_INCREF(cpy_r_r13);
    return cpy_r_r13;
CPyL6: ;
    CPy_Reraise();
    if (!0) goto CPyL10;
    CPy_Unreachable();
CPyL8: ;
    PyErr_SetString(PyExc_RuntimeError, "generator ignored GeneratorExit");
    cpy_r_r14 = 0;
    if (!cpy_r_r14) goto CPyL10;
    CPy_Unreachable();
CPyL10: ;
    cpy_r_r15 = NULL;
    return cpy_r_r15;
CPyL11: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r5);
    goto CPyL8;
CPyL12: ;
    CPy_DECREF(cpy_r_r2);
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL10;
CPyL13: ;
    CPy_DECREF(cpy_r_r6.f0);
    CPy_DECREF(cpy_r_r6.f1);
    CPy_DECREF(cpy_r_r6.f2);
    goto CPyL6;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":close", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___close(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "close", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *cpy_r___mypyc_self__) {
    CPy_INCREF_NO_IMM(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
}

PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {":__await__", kwlist, 0};
    if (!CPyArg_ParseStackAndKeywordsNoArgs(args, nargs, kwnames, &parser)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__;
    if (likely(Py_TYPE(obj___mypyc_self__) == CPyType___call___3__LRUCacheWrapperInstanceMethod_gen))
        arg___mypyc_self__ = obj___mypyc_self__;
    else {
        CPy_TypeError("faster_async_lru.__call____LRUCacheWrapperInstanceMethod_gen", obj___mypyc_self__); 
        goto fail;
    }
    PyObject *retval = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____await__(arg___mypyc_self__);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__await__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__LRUCacheWrapperInstanceMethod_____call__(PyObject *cpy_r_self, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    cpy_r_r0 = CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen();
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL5;
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_next_label__ = 0;
    CPy_INCREF_NO_IMM(cpy_r_self);
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__self = cpy_r_self;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fn_args);
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_args = cpy_r_fn_args;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL6;
    }
    CPy_INCREF(cpy_r_fn_kwargs);
    if (((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs != NULL) {
        CPy_DECREF(((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs);
    }
    ((faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *)cpy_r_r0)->___mypyc_generator_attribute__fn_kwargs = cpy_r_fn_kwargs;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
        goto CPyL6;
    }
    return cpy_r_r0;
CPyL5: ;
    cpy_r_r5 = NULL;
    return cpy_r_r5;
CPyL6: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL5;
}

PyObject *CPyPy__LRUCacheWrapperInstanceMethod_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj_self = self;
    static const char * const kwlist[] = {0};
    static CPyArg_Parser parser = {"%:__call__", kwlist, 0};
    PyObject *obj_fn_args;
    PyObject *obj_fn_kwargs;
    if (!CPyArg_ParseStackAndKeywords(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fn_args, &obj_fn_kwargs)) {
        return NULL;
    }
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__LRUCacheWrapperInstanceMethod))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._LRUCacheWrapperInstanceMethod", obj_self); 
        goto fail;
    }
    PyObject *arg_fn_args = obj_fn_args;
    PyObject *arg_fn_kwargs = obj_fn_kwargs;
    PyObject *retval = CPyDef__LRUCacheWrapperInstanceMethod_____call__(arg_self, arg_fn_args, arg_fn_kwargs);
    CPy_DECREF(obj_fn_args);
    CPy_DECREF(obj_fn_kwargs);
    return retval;
fail: ;
    CPy_DECREF(obj_fn_args);
    CPy_DECREF(obj_fn_kwargs);
    CPy_AddTraceback("faster_async_lru/__init__.py", "__call__", 314, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_wrapper__make_wrapper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy_wrapper__make_wrapper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef_wrapper__make_wrapper_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__get__", -1, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_wrapper__make_wrapper_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fn) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_origin;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    char cpy_r_r4;
    tuple_T2OO cpy_r_r5;
    PyObject *cpy_r_r6;
    int32_t cpy_r_r7;
    char cpy_r_r8;
    char cpy_r_r9;
    PyObject *cpy_r_r10;
    PyObject *cpy_r_r11;
    PyObject *cpy_r_r12;
    PyObject *cpy_r_r13;
    PyObject *cpy_r_r14;
    PyObject **cpy_r_r16;
    PyObject *cpy_r_r17;
    char cpy_r_r18;
    PyObject *cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject **cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    char cpy_r_r29;
    PyObject *cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject **cpy_r_r38;
    PyObject *cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    CPyPtr cpy_r_r42;
    CPyPtr cpy_r_r43;
    CPyPtr cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    PyObject **cpy_r_r50;
    PyObject *cpy_r_r51;
    PyObject *cpy_r_r52;
    char cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject **cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    char cpy_r_r59;
    PyObject *cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    tuple_T2II cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    char cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    cpy_r_r0 = ((faster_async_lru___wrapper__make_wrapper_objObject *)cpy_r___mypyc_self__)->___mypyc_env__;
    if (unlikely(cpy_r_r0 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "wrapper", "wrapper__make_wrapper_obj", "__mypyc_env__", 323, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_INCREF_NO_IMM(cpy_r_r0);
CPyL1: ;
    CPy_INCREF(cpy_r_fn);
    cpy_r_origin = cpy_r_fn;
CPyL2: ;
    cpy_r_r1 = CPyStatic_partial;
    if (unlikely(cpy_r_r1 == NULL)) {
        goto CPyL48;
    } else
        goto CPyL5;
CPyL3: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"partial\" was not set");
    cpy_r_r2 = 0;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 326, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL5: ;
    cpy_r_r3 = CPyStatic_partialmethod;
    if (unlikely(cpy_r_r3 == NULL)) {
        goto CPyL49;
    } else
        goto CPyL8;
CPyL6: ;
    PyErr_SetString(PyExc_NameError, "value for final name \"partialmethod\" was not set");
    cpy_r_r4 = 0;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 326, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL8: ;
    CPy_INCREF(cpy_r_r1);
    CPy_INCREF(cpy_r_r3);
    cpy_r_r5.f0 = cpy_r_r1;
    cpy_r_r5.f1 = cpy_r_r3;
    cpy_r_r6 = PyTuple_New(2);
    if (unlikely(cpy_r_r6 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp31 = cpy_r_r5.f0;
    PyTuple_SET_ITEM(cpy_r_r6, 0, __tmp31);
    PyObject *__tmp32 = cpy_r_r5.f1;
    PyTuple_SET_ITEM(cpy_r_r6, 1, __tmp32);
    cpy_r_r7 = PyObject_IsInstance(cpy_r_origin, cpy_r_r6);
    CPy_DECREF(cpy_r_r6);
    cpy_r_r8 = cpy_r_r7 >= 0;
    if (unlikely(!cpy_r_r8)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 326, CPyStatic_globals);
        goto CPyL50;
    }
    cpy_r_r9 = cpy_r_r7;
    if (!cpy_r_r9) goto CPyL12;
    cpy_r_r10 = CPyStatics[42]; /* 'func' */
    cpy_r_r11 = CPyObject_GetAttr(cpy_r_origin, cpy_r_r10);
    CPy_DECREF(cpy_r_origin);
    if (unlikely(cpy_r_r11 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 327, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_origin = cpy_r_r11;
    goto CPyL2;
CPyL12: ;
    cpy_r_r12 = CPyModule_inspect;
    cpy_r_r13 = CPyStatics[43]; /* 'iscoroutinefunction' */
    cpy_r_r14 = CPyObject_GetAttr(cpy_r_r12, cpy_r_r13);
    if (unlikely(cpy_r_r14 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals);
        goto CPyL50;
    }
    PyObject *cpy_r_r15[1] = {cpy_r_origin};
    cpy_r_r16 = (PyObject **)&cpy_r_r15;
    cpy_r_r17 = PyObject_Vectorcall(cpy_r_r14, cpy_r_r16, 1, 0);
    CPy_DECREF(cpy_r_r14);
    if (unlikely(cpy_r_r17 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals);
        goto CPyL50;
    }
    CPy_DECREF(cpy_r_origin);
    if (unlikely(!PyBool_Check(cpy_r_r17))) {
        CPy_TypeError("bool", cpy_r_r17); cpy_r_r18 = 2;
    } else
        cpy_r_r18 = cpy_r_r17 == Py_True;
    CPy_DECREF(cpy_r_r17);
    if (unlikely(cpy_r_r18 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals);
        goto CPyL51;
    }
    if (cpy_r_r18) goto CPyL30;
    cpy_r_r19 = CPyModule_os;
    cpy_r_r20 = CPyStatics[44]; /* 'environ' */
    cpy_r_r21 = CPyObject_GetAttr(cpy_r_r19, cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_r22 = CPyStatics[45]; /* 'ASYNC_LRU_ALLOW_SYNC' */
    cpy_r_r23 = CPyStatics[46]; /* 'get' */
    PyObject *cpy_r_r24[2] = {cpy_r_r21, cpy_r_r22};
    cpy_r_r25 = (PyObject **)&cpy_r_r24;
    cpy_r_r26 = PyObject_VectorcallMethod(cpy_r_r23, cpy_r_r25, 9223372036854775810ULL, 0);
    if (unlikely(cpy_r_r26 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals);
        goto CPyL52;
    }
    CPy_DECREF(cpy_r_r21);
    if (PyUnicode_Check(cpy_r_r26))
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL33;
    if (cpy_r_r26 == Py_None)
        cpy_r_r27 = cpy_r_r26;
    else {
        cpy_r_r27 = NULL;
    }
    if (cpy_r_r27 != NULL) goto __LL33;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals, "str or None", cpy_r_r26);
    goto CPyL51;
__LL33: ;
    cpy_r_r28 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r29 = cpy_r_r27 != cpy_r_r28;
    if (!cpy_r_r29) goto CPyL53;
    if (likely(cpy_r_r27 != Py_None))
        cpy_r_r30 = cpy_r_r27;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "wrapper", 329, CPyStatic_globals, "str", cpy_r_r27);
        goto CPyL51;
    }
    cpy_r_r31 = CPyStr_IsTrue(cpy_r_r30);
    CPy_DECREF(cpy_r_r30);
    if (cpy_r_r31) {
        goto CPyL30;
    } else
        goto CPyL54;
CPyL22: ;
    cpy_r_r32 = CPyStatics[47]; /* '' */
    cpy_r_r33 = CPyStatics[48]; /* 'Coroutine function is required, got ' */
    cpy_r_r34 = CPyStatics[49]; /* '{!r:{}}' */
    cpy_r_r35 = CPyStatics[47]; /* '' */
    cpy_r_r36 = CPyStatics[50]; /* 'format' */
    PyObject *cpy_r_r37[3] = {cpy_r_r34, cpy_r_fn, cpy_r_r35};
    cpy_r_r38 = (PyObject **)&cpy_r_r37;
    cpy_r_r39 = PyObject_VectorcallMethod(cpy_r_r36, cpy_r_r38, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r39 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL47;
    }
    if (likely(PyUnicode_Check(cpy_r_r39)))
        cpy_r_r40 = cpy_r_r39;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals, "str", cpy_r_r39);
        goto CPyL47;
    }
    cpy_r_r41 = PyList_New(2);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL55;
    }
    cpy_r_r42 = (CPyPtr)&((PyListObject *)cpy_r_r41)->ob_item;
    cpy_r_r43 = *(CPyPtr *)cpy_r_r42;
    CPy_INCREF(cpy_r_r33);
    *(PyObject * *)cpy_r_r43 = cpy_r_r33;
    cpy_r_r44 = cpy_r_r43 + 8;
    *(PyObject * *)cpy_r_r44 = cpy_r_r40;
    cpy_r_r45 = PyUnicode_Join(cpy_r_r32, cpy_r_r41);
    CPy_DECREF_NO_IMM(cpy_r_r41);
    if (unlikely(cpy_r_r45 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL47;
    }
    cpy_r_r46 = CPyModule_builtins;
    cpy_r_r47 = CPyStatics[32]; /* 'RuntimeError' */
    cpy_r_r48 = CPyObject_GetAttr(cpy_r_r46, cpy_r_r47);
    if (unlikely(cpy_r_r48 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL56;
    }
    PyObject *cpy_r_r49[1] = {cpy_r_r45};
    cpy_r_r50 = (PyObject **)&cpy_r_r49;
    cpy_r_r51 = PyObject_Vectorcall(cpy_r_r48, cpy_r_r50, 1, 0);
    CPy_DECREF(cpy_r_r48);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL56;
    }
    CPy_DECREF(cpy_r_r45);
    CPy_Raise(cpy_r_r51);
    CPy_DECREF(cpy_r_r51);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 330, CPyStatic_globals);
        goto CPyL47;
    }
    CPy_Unreachable();
CPyL30: ;
    cpy_r_r52 = CPyStatics[51]; /* '_make_unbound_method' */
    cpy_r_r53 = PyObject_HasAttr(cpy_r_fn, cpy_r_r52);
    if (!cpy_r_r53) goto CPyL57;
    cpy_r_r54 = CPyStatics[51]; /* '_make_unbound_method' */
    PyObject *cpy_r_r55[1] = {cpy_r_fn};
    cpy_r_r56 = (PyObject **)&cpy_r_r55;
    cpy_r_r57 = PyObject_VectorcallMethod(cpy_r_r54, cpy_r_r56, 9223372036854775809ULL, 0);
    if (unlikely(cpy_r_r57 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 334, CPyStatic_globals);
        goto CPyL51;
    }
    cpy_r_fn = cpy_r_r57;
CPyL33: ;
    cpy_r_r58 = ((faster_async_lru____make_wrapper_envObject *)cpy_r_r0)->_maxsize;
    if (unlikely(cpy_r_r58 == NULL)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "wrapper", "_make_wrapper_env", "maxsize", 336, CPyStatic_globals);
        goto CPyL58;
    }
    CPy_INCREF(cpy_r_r58);
CPyL34: ;
    cpy_r_r59 = ((faster_async_lru____make_wrapper_envObject *)cpy_r_r0)->_typed;
    if (unlikely(cpy_r_r59 == 2)) {
        CPy_AttributeError("faster_async_lru/__init__.py", "wrapper", "_make_wrapper_env", "typed", 336, CPyStatic_globals);
        goto CPyL59;
    }
CPyL35: ;
    cpy_r_r60 = ((faster_async_lru____make_wrapper_envObject *)cpy_r_r0)->_ttl;
    if (unlikely(cpy_r_r60 == NULL)) {
        PyErr_SetString(PyExc_AttributeError, "attribute 'ttl' of '_make_wrapper_env' undefined");
    } else {
        CPy_INCREF(cpy_r_r60);
    }
    CPy_DECREF_NO_IMM(cpy_r_r0);
    if (unlikely(cpy_r_r60 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 336, CPyStatic_globals);
        goto CPyL60;
    }
CPyL36: ;
    cpy_r_r61 = CPyDef__LRUCacheWrapper(cpy_r_fn, cpy_r_r58, cpy_r_r59, cpy_r_r60);
    CPy_DECREF(cpy_r_fn);
    CPy_DECREF(cpy_r_r58);
    CPy_DECREF(cpy_r_r60);
    if (unlikely(cpy_r_r61 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 336, CPyStatic_globals);
        goto CPyL47;
    }
    cpy_r_wrapper = cpy_r_r61;
    cpy_r_r62 = CPyModule_sys;
    cpy_r_r63 = CPyStatics[10]; /* 'version_info' */
    cpy_r_r64 = CPyObject_GetAttr(cpy_r_r62, cpy_r_r63);
    if (unlikely(cpy_r_r64 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 337, CPyStatic_globals);
        goto CPyL61;
    }
    if (likely(PyTuple_Check(cpy_r_r64)))
        cpy_r_r65 = cpy_r_r64;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "wrapper", 337, CPyStatic_globals, "tuple", cpy_r_r64);
        goto CPyL61;
    }
    cpy_r_r66.f0 = 6;
    cpy_r_r66.f1 = 24;
    cpy_r_r67 = PyTuple_New(2);
    if (unlikely(cpy_r_r67 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp34 = CPyTagged_StealAsObject(cpy_r_r66.f0);
    PyTuple_SET_ITEM(cpy_r_r67, 0, __tmp34);
    PyObject *__tmp35 = CPyTagged_StealAsObject(cpy_r_r66.f1);
    PyTuple_SET_ITEM(cpy_r_r67, 1, __tmp35);
    cpy_r_r68 = PyObject_RichCompare(cpy_r_r65, cpy_r_r67, 5);
    CPy_DECREF(cpy_r_r65);
    CPy_DECREF(cpy_r_r67);
    if (unlikely(cpy_r_r68 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 337, CPyStatic_globals);
        goto CPyL61;
    }
    if (unlikely(!PyBool_Check(cpy_r_r68))) {
        CPy_TypeError("bool", cpy_r_r68); cpy_r_r69 = 2;
    } else
        cpy_r_r69 = cpy_r_r68 == Py_True;
    CPy_DECREF(cpy_r_r68);
    if (unlikely(cpy_r_r69 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 337, CPyStatic_globals);
        goto CPyL61;
    }
    if (!cpy_r_r69) goto CPyL46;
    cpy_r_r70 = CPyModule_inspect;
    cpy_r_r71 = CPyStatics[52]; /* 'markcoroutinefunction' */
    cpy_r_r72 = CPyObject_GetAttr(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 338, CPyStatic_globals);
        goto CPyL61;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_wrapper};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 338, CPyStatic_globals);
        goto CPyL61;
    }
    CPy_DECREF_NO_IMM(cpy_r_wrapper);
    if (likely(Py_TYPE(cpy_r_r75) == CPyType__LRUCacheWrapper))
        cpy_r_r76 = cpy_r_r75;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "wrapper", 338, CPyStatic_globals, "faster_async_lru._LRUCacheWrapper", cpy_r_r75);
        goto CPyL47;
    }
    cpy_r_wrapper = cpy_r_r76;
CPyL46: ;
    return cpy_r_wrapper;
CPyL47: ;
    cpy_r_r77 = NULL;
    return cpy_r_r77;
CPyL48: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_origin);
    goto CPyL3;
CPyL49: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_origin);
    goto CPyL6;
CPyL50: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_origin);
    goto CPyL47;
CPyL51: ;
    CPy_DecRef(cpy_r_r0);
    goto CPyL47;
CPyL52: ;
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r21);
    goto CPyL47;
CPyL53: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    CPy_DECREF(cpy_r_r27);
    goto CPyL22;
CPyL54: ;
    CPy_DECREF_NO_IMM(cpy_r_r0);
    goto CPyL22;
CPyL55: ;
    CPy_DecRef(cpy_r_r40);
    goto CPyL47;
CPyL56: ;
    CPy_DecRef(cpy_r_r45);
    goto CPyL47;
CPyL57: ;
    CPy_INCREF(cpy_r_fn);
    goto CPyL33;
CPyL58: ;
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r0);
    goto CPyL47;
CPyL59: ;
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r0);
    CPy_DecRef(cpy_r_r58);
    goto CPyL47;
CPyL60: ;
    CPy_DecRef(cpy_r_fn);
    CPy_DecRef(cpy_r_r58);
    goto CPyL47;
CPyL61: ;
    CPy_DecRef(cpy_r_wrapper);
    goto CPyL47;
}

PyObject *CPyPy_wrapper__make_wrapper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"fn", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_fn;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_fn)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_fn = obj_fn;
    PyObject *retval = CPyDef_wrapper__make_wrapper_obj_____call__(arg___mypyc_self__, arg_fn);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "wrapper", 323, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__make_wrapper(PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    char cpy_r_r6;
    PyObject *cpy_r_wrapper;
    PyObject *cpy_r_r7;
    if (cpy_r_ttl != NULL) goto CPyL10;
    cpy_r_r0 = Py_None;
    cpy_r_ttl = cpy_r_r0;
CPyL2: ;
    cpy_r_r1 = CPyDef__make_wrapper_env();
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 318, CPyStatic_globals);
        goto CPyL11;
    }
    CPy_INCREF(cpy_r_maxsize);
    if (((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_maxsize != NULL) {
        CPy_DECREF(((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_maxsize);
    }
    ((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_maxsize = cpy_r_maxsize;
    cpy_r_r2 = 1;
    if (unlikely(!cpy_r_r2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 318, CPyStatic_globals);
        goto CPyL12;
    }
    ((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_typed = cpy_r_typed;
    cpy_r_r3 = 1;
    if (unlikely(!cpy_r_r3)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 318, CPyStatic_globals);
        goto CPyL12;
    }
    if (((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_ttl != NULL) {
        CPy_DECREF(((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_ttl);
    }
    ((faster_async_lru____make_wrapper_envObject *)cpy_r_r1)->_ttl = cpy_r_ttl;
    cpy_r_r4 = 1;
    if (unlikely(!cpy_r_r4)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 318, CPyStatic_globals);
        goto CPyL13;
    }
    cpy_r_r5 = CPyDef_wrapper__make_wrapper_obj();
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 323, CPyStatic_globals);
        goto CPyL13;
    }
    if (((faster_async_lru___wrapper__make_wrapper_objObject *)cpy_r_r5)->___mypyc_env__ != NULL) {
        CPy_DECREF_NO_IMM(((faster_async_lru___wrapper__make_wrapper_objObject *)cpy_r_r5)->___mypyc_env__);
    }
    ((faster_async_lru___wrapper__make_wrapper_objObject *)cpy_r_r5)->___mypyc_env__ = cpy_r_r1;
    cpy_r_r6 = 1;
    if (unlikely(!cpy_r_r6)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 323, CPyStatic_globals);
        goto CPyL14;
    }
    cpy_r_wrapper = cpy_r_r5;
    return cpy_r_wrapper;
CPyL9: ;
    cpy_r_r7 = NULL;
    return cpy_r_r7;
CPyL10: ;
    CPy_INCREF(cpy_r_ttl);
    goto CPyL2;
CPyL11: ;
    CPy_DecRef(cpy_r_ttl);
    goto CPyL9;
CPyL12: ;
    CPy_DecRef(cpy_r_ttl);
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL13: ;
    CPy_DecRef(cpy_r_r1);
    goto CPyL9;
CPyL14: ;
    CPy_DecRef(cpy_r_r5);
    goto CPyL9;
}

PyObject *CPyPy__make_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"maxsize", "typed", "ttl", 0};
    static CPyArg_Parser parser = {"OO|O:_make_wrapper", kwlist, 0};
    PyObject *obj_maxsize;
    PyObject *obj_typed;
    PyObject *obj_ttl = NULL;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_maxsize, &obj_typed, &obj_ttl)) {
        return NULL;
    }
    PyObject *arg_maxsize;
    if (PyLong_Check(obj_maxsize))
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL36;
    if (obj_maxsize == Py_None)
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL36;
    CPy_TypeError("int or None", obj_maxsize); 
    goto fail;
__LL36: ;
    char arg_typed;
    if (unlikely(!PyBool_Check(obj_typed))) {
        CPy_TypeError("bool", obj_typed); goto fail;
    } else
        arg_typed = obj_typed == Py_True;
    PyObject *arg_ttl;
    if (obj_ttl == NULL) {
        arg_ttl = NULL;
        goto __LL37;
    }
    if (CPyFloat_Check(obj_ttl))
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL37;
    if (obj_ttl == Py_None)
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL37;
    CPy_TypeError("float or None", obj_ttl); 
    goto fail;
__LL37: ;
    PyObject *retval = CPyDef__make_wrapper(arg_maxsize, arg_typed, arg_ttl);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "_make_wrapper", 318, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef_alru_cache(PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    char cpy_r_r3;
    char cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    PyObject *cpy_r_fn;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject **cpy_r_r11;
    PyObject *cpy_r_r12;
    char cpy_r_r13;
    PyObject *cpy_r_r14;
    char cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    PyObject **cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject **cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    CPyPtr cpy_r_r32;
    CPyPtr cpy_r_r33;
    CPyPtr cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    PyObject **cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    if (cpy_r_maxsize != NULL) goto CPyL28;
    cpy_r_r0 = CPyStatics[136]; /* 128 */
    cpy_r_maxsize = cpy_r_r0;
CPyL2: ;
    if (cpy_r_typed != 2) goto CPyL4;
    cpy_r_typed = 0;
CPyL4: ;
    if (cpy_r_ttl != NULL) goto CPyL29;
    cpy_r_r1 = Py_None;
    cpy_r_ttl = cpy_r_r1;
CPyL6: ;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = cpy_r_maxsize == cpy_r_r2;
    if (cpy_r_r3) goto CPyL8;
    cpy_r_r4 = PyLong_Check(cpy_r_maxsize);
    if (!cpy_r_r4) goto CPyL30;
CPyL8: ;
    if (PyLong_Check(cpy_r_maxsize))
        cpy_r_r5 = cpy_r_maxsize;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL38;
    if (cpy_r_maxsize == Py_None)
        cpy_r_r5 = cpy_r_maxsize;
    else {
        cpy_r_r5 = NULL;
    }
    if (cpy_r_r5 != NULL) goto __LL38;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "alru_cache", 369, CPyStatic_globals, "int or None", cpy_r_maxsize);
    goto CPyL31;
__LL38: ;
    cpy_r_r6 = CPyDef__make_wrapper(cpy_r_r5, cpy_r_typed, cpy_r_ttl);
    CPy_DECREF(cpy_r_r5);
    CPy_DECREF(cpy_r_ttl);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 369, CPyStatic_globals);
        goto CPyL27;
    }
    return cpy_r_r6;
CPyL11: ;
    cpy_r_fn = cpy_r_maxsize;
    cpy_r_r7 = CPyModule_builtins;
    cpy_r_r8 = CPyStatics[53]; /* 'callable' */
    cpy_r_r9 = CPyObject_GetAttr(cpy_r_r7, cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 373, CPyStatic_globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r10[1] = {cpy_r_fn};
    cpy_r_r11 = (PyObject **)&cpy_r_r10;
    cpy_r_r12 = PyObject_Vectorcall(cpy_r_r9, cpy_r_r11, 1, 0);
    CPy_DECREF(cpy_r_r9);
    if (unlikely(cpy_r_r12 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 373, CPyStatic_globals);
        goto CPyL32;
    }
    if (unlikely(!PyBool_Check(cpy_r_r12))) {
        CPy_TypeError("bool", cpy_r_r12); cpy_r_r13 = 2;
    } else
        cpy_r_r13 = cpy_r_r12 == Py_True;
    CPy_DECREF(cpy_r_r12);
    if (unlikely(cpy_r_r13 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 373, CPyStatic_globals);
        goto CPyL32;
    }
    if (cpy_r_r13) goto CPyL16;
    cpy_r_r14 = CPyStatics[51]; /* '_make_unbound_method' */
    cpy_r_r15 = PyObject_HasAttr(cpy_r_fn, cpy_r_r14);
    if (!cpy_r_r15) goto CPyL20;
CPyL16: ;
    cpy_r_r16 = CPyStatics[136]; /* 128 */
    cpy_r_r17 = Py_None;
    cpy_r_r18 = CPyDef__make_wrapper(cpy_r_r16, 0, cpy_r_r17);
    if (unlikely(cpy_r_r18 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 374, CPyStatic_globals);
        goto CPyL32;
    }
    PyObject *cpy_r_r19[1] = {cpy_r_fn};
    cpy_r_r20 = (PyObject **)&cpy_r_r19;
    cpy_r_r21 = PyObject_Vectorcall(cpy_r_r18, cpy_r_r20, 1, 0);
    CPy_DECREF(cpy_r_r18);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 374, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_fn);
    if (likely(Py_TYPE(cpy_r_r21) == CPyType__LRUCacheWrapper))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "alru_cache", 374, CPyStatic_globals, "faster_async_lru._LRUCacheWrapper", cpy_r_r21);
        goto CPyL27;
    }
    return cpy_r_r22;
CPyL20: ;
    cpy_r_r23 = CPyStatics[47]; /* '' */
    cpy_r_r24 = CPyStatics[49]; /* '{!r:{}}' */
    cpy_r_r25 = CPyStatics[47]; /* '' */
    cpy_r_r26 = CPyStatics[50]; /* 'format' */
    PyObject *cpy_r_r27[3] = {cpy_r_r24, cpy_r_fn, cpy_r_r25};
    cpy_r_r28 = (PyObject **)&cpy_r_r27;
    cpy_r_r29 = PyObject_VectorcallMethod(cpy_r_r26, cpy_r_r28, 9223372036854775811ULL, 0);
    if (unlikely(cpy_r_r29 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL32;
    }
    CPy_DECREF(cpy_r_fn);
    cpy_r_r30 = CPyStatics[54]; /* ' decorating is not supported' */
    cpy_r_r31 = PyList_New(2);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL33;
    }
    cpy_r_r32 = (CPyPtr)&((PyListObject *)cpy_r_r31)->ob_item;
    cpy_r_r33 = *(CPyPtr *)cpy_r_r32;
    *(PyObject * *)cpy_r_r33 = cpy_r_r29;
    CPy_INCREF(cpy_r_r30);
    cpy_r_r34 = cpy_r_r33 + 8;
    *(PyObject * *)cpy_r_r34 = cpy_r_r30;
    cpy_r_r35 = PyUnicode_Join(cpy_r_r23, cpy_r_r31);
    CPy_DECREF_NO_IMM(cpy_r_r31);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL27;
    }
    cpy_r_r36 = CPyModule_builtins;
    cpy_r_r37 = CPyStatics[55]; /* 'NotImplementedError' */
    cpy_r_r38 = CPyObject_GetAttr(cpy_r_r36, cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL34;
    }
    PyObject *cpy_r_r39[1] = {cpy_r_r35};
    cpy_r_r40 = (PyObject **)&cpy_r_r39;
    cpy_r_r41 = PyObject_Vectorcall(cpy_r_r38, cpy_r_r40, 1, 0);
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r41 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL34;
    }
    CPy_DECREF(cpy_r_r35);
    CPy_Raise(cpy_r_r41);
    CPy_DECREF(cpy_r_r41);
    if (unlikely(!0)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 376, CPyStatic_globals);
        goto CPyL27;
    }
    CPy_Unreachable();
CPyL27: ;
    cpy_r_r42 = NULL;
    return cpy_r_r42;
CPyL28: ;
    CPy_INCREF(cpy_r_maxsize);
    goto CPyL2;
CPyL29: ;
    CPy_INCREF(cpy_r_ttl);
    goto CPyL6;
CPyL30: ;
    CPy_DECREF(cpy_r_ttl);
    goto CPyL11;
CPyL31: ;
    CPy_DecRef(cpy_r_ttl);
    goto CPyL27;
CPyL32: ;
    CPy_DecRef(cpy_r_fn);
    goto CPyL27;
CPyL33: ;
    CPy_DecRef(cpy_r_r29);
    goto CPyL27;
CPyL34: ;
    CPy_DecRef(cpy_r_r35);
    goto CPyL27;
}

PyObject *CPyPy_alru_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"maxsize", "typed", "ttl", 0};
    static CPyArg_Parser parser = {"|OO$O:alru_cache", kwlist, 0};
    PyObject *obj_maxsize = NULL;
    PyObject *obj_typed = NULL;
    PyObject *obj_ttl = NULL;
    if (!CPyArg_ParseStackAndKeywords(args, nargs, kwnames, &parser, &obj_maxsize, &obj_typed, &obj_ttl)) {
        return NULL;
    }
    PyObject *arg_maxsize;
    if (obj_maxsize == NULL) {
        arg_maxsize = NULL;
        goto __LL39;
    }
    if (PyLong_Check(obj_maxsize))
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL39;
    if (obj_maxsize == Py_None)
        arg_maxsize = obj_maxsize;
    else {
        arg_maxsize = NULL;
    }
    if (arg_maxsize != NULL) goto __LL39;
    arg_maxsize = obj_maxsize;
    if (arg_maxsize != NULL) goto __LL39;
    CPy_TypeError("union[int, None, object]", obj_maxsize); 
    goto fail;
__LL39: ;
    char arg_typed;
    if (obj_typed == NULL) {
        arg_typed = 2;
    } else if (unlikely(!PyBool_Check(obj_typed))) {
        CPy_TypeError("bool", obj_typed); goto fail;
    } else
        arg_typed = obj_typed == Py_True;
    PyObject *arg_ttl;
    if (obj_ttl == NULL) {
        arg_ttl = NULL;
        goto __LL40;
    }
    if (CPyFloat_Check(obj_ttl))
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL40;
    if (obj_ttl == Py_None)
        arg_ttl = obj_ttl;
    else {
        arg_ttl = NULL;
    }
    if (arg_ttl != NULL) goto __LL40;
    CPy_TypeError("float or None", obj_ttl); 
    goto fail;
__LL40: ;
    PyObject *retval = CPyDef_alru_cache(arg_maxsize, arg_typed, arg_ttl);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "alru_cache", 362, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___init___3__HashedSeq_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy___init___3__HashedSeq_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef___init___3__HashedSeq_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__get__", -1, CPyStatic_globals);
    return NULL;
}

char CPyDef___init___3__HashedSeq_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_tup) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    int32_t cpy_r_r4;
    char cpy_r_r5;
    CPyTagged cpy_r_r6;
    PyObject *cpy_r_r7;
    PyObject *cpy_r_r8;
    int32_t cpy_r_r9;
    char cpy_r_r10;
    char cpy_r_r11;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r3 = PySlice_New(cpy_r_r0, cpy_r_r1, cpy_r_r2);
    if (unlikely(cpy_r_r3 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 394, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r4 = PyObject_SetItem(cpy_r_self, cpy_r_r3, cpy_r_tup);
    CPy_DECREF(cpy_r_r3);
    cpy_r_r5 = cpy_r_r4 >= 0;
    if (unlikely(!cpy_r_r5)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 394, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r6 = CPyObject_Hash(cpy_r_tup);
    if (unlikely(cpy_r_r6 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 395, CPyStatic_globals);
        goto CPyL5;
    }
    cpy_r_r7 = CPyStatics[56]; /* 'hashvalue' */
    cpy_r_r8 = CPyTagged_StealAsObject(cpy_r_r6);
    cpy_r_r9 = PyObject_SetAttr(cpy_r_self, cpy_r_r7, cpy_r_r8);
    CPy_DECREF(cpy_r_r8);
    cpy_r_r10 = cpy_r_r9 >= 0;
    if (unlikely(!cpy_r_r10)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 395, CPyStatic_globals);
        goto CPyL5;
    }
    return 1;
CPyL5: ;
    cpy_r_r11 = 2;
    return cpy_r_r11;
}

PyObject *CPyPy___init___3__HashedSeq_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", "tup", 0};
    static CPyArg_Parser parser = {"OO:__call__", kwlist, 0};
    PyObject *obj_self;
    PyObject *obj_tup;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self, &obj_tup)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__HashedSeq))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._HashedSeq", obj_self); 
        goto fail;
    }
    PyObject * arg_tup;
    if (likely(PyTuple_Check(obj_tup)))
        arg_tup = obj_tup;
    else {
        CPy_TypeError("tuple", obj_tup); 
        goto fail;
    }
    char retval = CPyDef___init___3__HashedSeq_obj_____call__(arg___mypyc_self__, arg_self, arg_tup);
    if (retval == 2) {
        return NULL;
    }
    PyObject *retbox = Py_None;
    CPy_INCREF(retbox);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__init__", 393, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef___hash___3__HashedSeq_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner) {
    PyObject *cpy_r_r0;
    char cpy_r_r1;
    PyObject *cpy_r_r2;
    PyObject *cpy_r_r3;
    cpy_r_r0 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r1 = cpy_r_instance == cpy_r_r0;
    if (!cpy_r_r1) goto CPyL2;
    CPy_INCREF(cpy_r___mypyc_self__);
    return cpy_r___mypyc_self__;
CPyL2: ;
    cpy_r_r2 = PyMethod_New(cpy_r___mypyc_self__, cpy_r_instance);
    if (cpy_r_r2 == NULL) goto CPyL4;
    return cpy_r_r2;
CPyL4: ;
    cpy_r_r3 = NULL;
    return cpy_r_r3;
}

PyObject *CPyPy___hash___3__HashedSeq_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"instance", "owner", 0};
    static CPyArg_Parser parser = {"OO:__get__", kwlist, 0};
    PyObject *obj_instance;
    PyObject *obj_owner;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_instance, &obj_owner)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_instance = obj_instance;
    PyObject *arg_owner = obj_owner;
    PyObject *retval = CPyDef___hash___3__HashedSeq_obj_____get__(arg___mypyc_self__, arg_instance, arg_owner);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__get__", -1, CPyStatic_globals);
    return NULL;
}

CPyTagged CPyDef___hash___3__HashedSeq_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    CPyTagged cpy_r_r2;
    CPyTagged cpy_r_r3;
    cpy_r_r0 = CPyStatics[56]; /* 'hashvalue' */
    cpy_r_r1 = CPyObject_GetAttr(cpy_r_self, cpy_r_r0);
    if (unlikely(cpy_r_r1 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__hash__", 398, CPyStatic_globals);
        goto CPyL3;
    }
    if (likely(PyLong_Check(cpy_r_r1)))
        cpy_r_r2 = CPyTagged_FromObject(cpy_r_r1);
    else {
        CPy_TypeError("int", cpy_r_r1); cpy_r_r2 = CPY_INT_TAG;
    }
    CPy_DECREF(cpy_r_r1);
    if (unlikely(cpy_r_r2 == CPY_INT_TAG)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "__hash__", 398, CPyStatic_globals);
        goto CPyL3;
    }
    return cpy_r_r2;
CPyL3: ;
    cpy_r_r3 = CPY_INT_TAG;
    return cpy_r_r3;
}

PyObject *CPyPy___hash___3__HashedSeq_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    PyObject *obj___mypyc_self__ = self;
    static const char * const kwlist[] = {"self", 0};
    static CPyArg_Parser parser = {"O:__call__", kwlist, 0};
    PyObject *obj_self;
    if (!CPyArg_ParseStackAndKeywordsOneArg(args, PyVectorcall_NARGS(nargs), kwnames, &parser, &obj_self)) {
        return NULL;
    }
    PyObject *arg___mypyc_self__ = obj___mypyc_self__;
    PyObject *arg_self;
    if (likely(Py_TYPE(obj_self) == CPyType__HashedSeq))
        arg_self = obj_self;
    else {
        CPy_TypeError("faster_async_lru._HashedSeq", obj_self); 
        goto fail;
    }
    CPyTagged retval = CPyDef___hash___3__HashedSeq_obj_____call__(arg___mypyc_self__, arg_self);
    if (retval == CPY_INT_TAG) {
        return NULL;
    }
    PyObject *retbox = CPyTagged_StealAsObject(retval);
    return retbox;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "__hash__", 397, CPyStatic_globals);
    return NULL;
}

PyObject *CPyDef__make_key(PyObject *cpy_r_args, PyObject *cpy_r_kwds, char cpy_r_typed) {
    PyObject *cpy_r_key;
    int64_t cpy_r_r0;
    CPyTagged cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject *cpy_r_r5;
    PyObject *cpy_r_r6;
    tuple_T1O cpy_r_r7;
    PyObject *cpy_r_r8;
    PyObject *cpy_r_r9;
    PyObject *cpy_r_r10;
    CPyTagged cpy_r_r11;
    int64_t cpy_r_r12;
    PyObject *cpy_r_r13;
    tuple_T4CIOO cpy_r_r14;
    CPyTagged cpy_r_r15;
    char cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    tuple_T2OO cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    char cpy_r_r23;
    char cpy_r_r24;
    CPyPtr cpy_r_r25;
    int64_t cpy_r_r26;
    PyObject *cpy_r_r27;
    CPyPtr cpy_r_r28;
    int64_t cpy_r_r29;
    int64_t cpy_r_r30;
    char cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    int64_t cpy_r_r34;
    PyObject *cpy_r_r35;
    PyObject *cpy_r_r36;
    int64_t cpy_r_r37;
    CPyTagged cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    CPyTagged cpy_r_r41;
    int64_t cpy_r_r42;
    PyObject *cpy_r_r43;
    tuple_T3CIO cpy_r_r44;
    CPyTagged cpy_r_r45;
    char cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    int32_t cpy_r_r49;
    char cpy_r_r50;
    char cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    CPyPtr cpy_r_r56;
    int64_t cpy_r_r57;
    CPyTagged cpy_r_r58;
    char cpy_r_r59;
    tuple_T1O cpy_r_r60;
    PyObject *cpy_r_r61;
    PyObject *cpy_r_r62;
    PyObject *cpy_r_r63;
    char cpy_r_r64;
    PyObject *cpy_r_r65;
    char cpy_r_r66;
    PyObject *cpy_r_r67;
    PyObject *cpy_r_r68;
    PyObject **cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject *cpy_r_r73;
    CPy_INCREF(cpy_r_args);
    cpy_r_key = cpy_r_args;
    cpy_r_r0 = PyDict_Size(cpy_r_kwds);
    cpy_r_r1 = cpy_r_r0 << 1;
    cpy_r_r2 = cpy_r_r1 != 0;
    if (!cpy_r_r2) goto CPyL12;
    cpy_r_r3 = CPyModule_builtins;
    cpy_r_r4 = CPyStatics[57]; /* 'object' */
    cpy_r_r5 = CPyObject_GetAttr(cpy_r_r3, cpy_r_r4);
    if (unlikely(cpy_r_r5 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 418, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r6 = PyObject_Vectorcall(cpy_r_r5, 0, 0, 0);
    CPy_DECREF(cpy_r_r5);
    if (unlikely(cpy_r_r6 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 418, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r7.f0 = cpy_r_r6;
    cpy_r_r8 = PyTuple_New(1);
    if (unlikely(cpy_r_r8 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp41 = cpy_r_r7.f0;
    PyTuple_SET_ITEM(cpy_r_r8, 0, __tmp41);
    cpy_r_r9 = PyNumber_InPlaceAdd(cpy_r_key, cpy_r_r8);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r8);
    if (unlikely(cpy_r_r9 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 418, CPyStatic_globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r9)))
        cpy_r_r10 = cpy_r_r9;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 418, CPyStatic_globals, "tuple", cpy_r_r9);
        goto CPyL40;
    }
    cpy_r_key = cpy_r_r10;
    cpy_r_r11 = 0;
    cpy_r_r12 = PyDict_Size(cpy_r_kwds);
    cpy_r_r13 = CPyDict_GetItemsIter(cpy_r_kwds);
    if (unlikely(cpy_r_r13 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 419, CPyStatic_globals);
        goto CPyL41;
    }
CPyL6: ;
    cpy_r_r14 = CPyDict_NextItem(cpy_r_r13, cpy_r_r11);
    cpy_r_r15 = cpy_r_r14.f1;
    cpy_r_r11 = cpy_r_r15;
    cpy_r_r16 = cpy_r_r14.f0;
    if (!cpy_r_r16) goto CPyL42;
    cpy_r_r17 = cpy_r_r14.f2;
    CPy_INCREF(cpy_r_r17);
    cpy_r_r18 = cpy_r_r14.f3;
    CPy_INCREF(cpy_r_r18);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    cpy_r_r19.f0 = cpy_r_r17;
    cpy_r_r19.f1 = cpy_r_r18;
    cpy_r_r20 = PyTuple_New(2);
    if (unlikely(cpy_r_r20 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp42 = cpy_r_r19.f0;
    PyTuple_SET_ITEM(cpy_r_r20, 0, __tmp42);
    PyObject *__tmp43 = cpy_r_r19.f1;
    PyTuple_SET_ITEM(cpy_r_r20, 1, __tmp43);
    cpy_r_r21 = PyNumber_InPlaceAdd(cpy_r_key, cpy_r_r20);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r20);
    if (unlikely(cpy_r_r21 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 420, CPyStatic_globals);
        goto CPyL43;
    }
    if (likely(PyTuple_Check(cpy_r_r21)))
        cpy_r_r22 = cpy_r_r21;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 420, CPyStatic_globals, "tuple", cpy_r_r21);
        goto CPyL43;
    }
    cpy_r_key = cpy_r_r22;
    cpy_r_r23 = CPyDict_CheckSize(cpy_r_kwds, cpy_r_r12);
    if (unlikely(!cpy_r_r23)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 419, CPyStatic_globals);
        goto CPyL44;
    } else
        goto CPyL6;
CPyL11: ;
    cpy_r_r24 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r24)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 419, CPyStatic_globals);
        goto CPyL41;
    }
CPyL12: ;
    if (!cpy_r_typed) goto CPyL31;
    cpy_r_r25 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r26 = *(int64_t *)cpy_r_r25;
    cpy_r_r27 = PyTuple_New(cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 422, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r28 = (CPyPtr)&((PyVarObject *)cpy_r_args)->ob_size;
    cpy_r_r29 = *(int64_t *)cpy_r_r28;
    cpy_r_r30 = 0;
CPyL15: ;
    cpy_r_r31 = cpy_r_r30 < cpy_r_r29;
    if (!cpy_r_r31) goto CPyL18;
    cpy_r_r32 = CPySequenceTuple_GetItemUnsafe(cpy_r_args, cpy_r_r30);
    cpy_r_r33 = CPy_TYPE(cpy_r_r32);
    CPy_DECREF(cpy_r_r32);
    CPySequenceTuple_SetItemUnsafe(cpy_r_r27, cpy_r_r30, cpy_r_r33);
    cpy_r_r34 = cpy_r_r30 + 1;
    cpy_r_r30 = cpy_r_r34;
    goto CPyL15;
CPyL18: ;
    cpy_r_r35 = PyNumber_InPlaceAdd(cpy_r_key, cpy_r_r27);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r27);
    if (unlikely(cpy_r_r35 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 422, CPyStatic_globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r35)))
        cpy_r_r36 = cpy_r_r35;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 422, CPyStatic_globals, "tuple", cpy_r_r35);
        goto CPyL40;
    }
    cpy_r_key = cpy_r_r36;
    cpy_r_r37 = PyDict_Size(cpy_r_kwds);
    cpy_r_r38 = cpy_r_r37 << 1;
    cpy_r_r39 = cpy_r_r38 != 0;
    if (!cpy_r_r39) goto CPyL37;
    cpy_r_r40 = PyList_New(0);
    if (unlikely(cpy_r_r40 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r41 = 0;
    cpy_r_r42 = PyDict_Size(cpy_r_kwds);
    cpy_r_r43 = CPyDict_GetValuesIter(cpy_r_kwds);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL45;
    }
CPyL23: ;
    cpy_r_r44 = CPyDict_NextValue(cpy_r_r43, cpy_r_r41);
    cpy_r_r45 = cpy_r_r44.f1;
    cpy_r_r41 = cpy_r_r45;
    cpy_r_r46 = cpy_r_r44.f0;
    if (!cpy_r_r46) goto CPyL46;
    cpy_r_r47 = cpy_r_r44.f2;
    CPy_INCREF(cpy_r_r47);
    CPy_DECREF(cpy_r_r44.f2);
    cpy_r_r48 = CPy_TYPE(cpy_r_r47);
    CPy_DECREF(cpy_r_r47);
    cpy_r_r49 = PyList_Append(cpy_r_r40, cpy_r_r48);
    CPy_DECREF(cpy_r_r48);
    cpy_r_r50 = cpy_r_r49 >= 0;
    if (unlikely(!cpy_r_r50)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL47;
    }
    cpy_r_r51 = CPyDict_CheckSize(cpy_r_kwds, cpy_r_r42);
    if (unlikely(!cpy_r_r51)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL47;
    } else
        goto CPyL23;
CPyL26: ;
    cpy_r_r52 = CPy_NoErrOccurred();
    if (unlikely(!cpy_r_r52)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL45;
    }
    cpy_r_r53 = PyList_AsTuple(cpy_r_r40);
    CPy_DECREF_NO_IMM(cpy_r_r40);
    if (unlikely(cpy_r_r53 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r54 = PyNumber_InPlaceAdd(cpy_r_key, cpy_r_r53);
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r53);
    if (unlikely(cpy_r_r54 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals);
        goto CPyL40;
    }
    if (likely(PyTuple_Check(cpy_r_r54)))
        cpy_r_r55 = cpy_r_r54;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 424, CPyStatic_globals, "tuple", cpy_r_r54);
        goto CPyL40;
    }
    cpy_r_key = cpy_r_r55;
    goto CPyL37;
CPyL31: ;
    cpy_r_r56 = (CPyPtr)&((PyVarObject *)cpy_r_key)->ob_size;
    cpy_r_r57 = *(int64_t *)cpy_r_r56;
    cpy_r_r58 = cpy_r_r57 << 1;
    cpy_r_r59 = cpy_r_r58 == 2;
    if (!cpy_r_r59) goto CPyL37;
    PyObject *__tmp44;
    if (unlikely(!(PyTuple_Check(cpy_r_key) && PyTuple_GET_SIZE(cpy_r_key) == 1))) {
        __tmp44 = NULL;
        goto __LL45;
    }
    __tmp44 = PyTuple_GET_ITEM(cpy_r_key, 0);
    if (__tmp44 == NULL) goto __LL45;
    __tmp44 = cpy_r_key;
__LL45: ;
    if (unlikely(__tmp44 == NULL)) {
        CPy_TypeError("tuple[object]", cpy_r_key); cpy_r_r60 = (tuple_T1O) { NULL };
    } else {
        PyObject *__tmp46 = PyTuple_GET_ITEM(cpy_r_key, 0);
        CPy_INCREF(__tmp46);
        PyObject *__tmp47;
        __tmp47 = __tmp46;
        cpy_r_r60.f0 = __tmp47;
    }
    if (unlikely(cpy_r_r60.f0 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 426, CPyStatic_globals);
        goto CPyL41;
    }
    cpy_r_r61 = cpy_r_r60.f0;
    CPy_INCREF(cpy_r_r61);
    CPy_DECREF(cpy_r_r60.f0);
    cpy_r_r62 = CPy_TYPE(cpy_r_r61);
    cpy_r_r63 = (PyObject *)&PyLong_Type;
    cpy_r_r64 = cpy_r_r62 == cpy_r_r63;
    if (cpy_r_r64) goto CPyL48;
    cpy_r_r65 = (PyObject *)&PyUnicode_Type;
    cpy_r_r66 = cpy_r_r62 == cpy_r_r65;
    CPy_DECREF(cpy_r_r62);
    if (cpy_r_r66) {
        goto CPyL49;
    } else
        goto CPyL50;
CPyL35: ;
    if (PyUnicode_Check(cpy_r_r61))
        cpy_r_r67 = cpy_r_r61;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL48;
    if (PyLong_Check(cpy_r_r61))
        cpy_r_r67 = cpy_r_r61;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL48;
    if (Py_TYPE(cpy_r_r61) == CPyType__HashedSeq)
        cpy_r_r67 = cpy_r_r61;
    else {
        cpy_r_r67 = NULL;
    }
    if (cpy_r_r67 != NULL) goto __LL48;
    CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 429, CPyStatic_globals, "union[str, int, faster_async_lru._HashedSeq]", cpy_r_r61);
    goto CPyL40;
__LL48: ;
    return cpy_r_r67;
CPyL37: ;
    cpy_r_r68 = (PyObject *)CPyType__HashedSeq;
    PyObject *cpy_r_r69[1] = {cpy_r_key};
    cpy_r_r70 = (PyObject **)&cpy_r_r69;
    cpy_r_r71 = PyObject_Vectorcall(cpy_r_r68, cpy_r_r70, 1, 0);
    if (unlikely(cpy_r_r71 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 430, CPyStatic_globals);
        goto CPyL41;
    }
    CPy_DECREF(cpy_r_key);
    if (likely(Py_TYPE(cpy_r_r71) == CPyType__HashedSeq))
        cpy_r_r72 = cpy_r_r71;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "_make_key", 430, CPyStatic_globals, "faster_async_lru._HashedSeq", cpy_r_r71);
        goto CPyL40;
    }
    return cpy_r_r72;
CPyL40: ;
    cpy_r_r73 = NULL;
    return cpy_r_r73;
CPyL41: ;
    CPy_DecRef(cpy_r_key);
    goto CPyL40;
CPyL42: ;
    CPy_DECREF(cpy_r_r13);
    CPy_DECREF(cpy_r_r14.f2);
    CPy_DECREF(cpy_r_r14.f3);
    goto CPyL11;
CPyL43: ;
    CPy_DecRef(cpy_r_r13);
    goto CPyL40;
CPyL44: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r13);
    goto CPyL40;
CPyL45: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r40);
    goto CPyL40;
CPyL46: ;
    CPy_DECREF(cpy_r_r43);
    CPy_DECREF(cpy_r_r44.f2);
    goto CPyL26;
CPyL47: ;
    CPy_DecRef(cpy_r_key);
    CPy_DecRef(cpy_r_r40);
    CPy_DecRef(cpy_r_r43);
    goto CPyL40;
CPyL48: ;
    CPy_DECREF(cpy_r_key);
    CPy_DECREF(cpy_r_r62);
    goto CPyL35;
CPyL49: ;
    CPy_DECREF(cpy_r_key);
    goto CPyL35;
CPyL50: ;
    CPy_DECREF(cpy_r_r61);
    goto CPyL37;
}

PyObject *CPyPy__make_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames) {
    static const char * const kwlist[] = {"args", "kwds", "typed", 0};
    static CPyArg_Parser parser = {"OOO:_make_key", kwlist, 0};
    PyObject *obj_args;
    PyObject *obj_kwds;
    PyObject *obj_typed;
    if (!CPyArg_ParseStackAndKeywordsSimple(args, nargs, kwnames, &parser, &obj_args, &obj_kwds, &obj_typed)) {
        return NULL;
    }
    PyObject * arg_args;
    if (likely(PyTuple_Check(obj_args)))
        arg_args = obj_args;
    else {
        CPy_TypeError("tuple", obj_args); 
        goto fail;
    }
    PyObject *arg_kwds;
    if (likely(PyDict_Check(obj_kwds)))
        arg_kwds = obj_kwds;
    else {
        CPy_TypeError("dict", obj_kwds); 
        goto fail;
    }
    char arg_typed;
    if (unlikely(!PyBool_Check(obj_typed))) {
        CPy_TypeError("bool", obj_typed); goto fail;
    } else
        arg_typed = obj_typed == Py_True;
    PyObject *retval = CPyDef__make_key(arg_args, arg_kwds, arg_typed);
    return retval;
fail: ;
    CPy_AddTraceback("faster_async_lru/__init__.py", "_make_key", 401, CPyStatic_globals);
    return NULL;
}

char CPyDef___top_level__(void) {
    PyObject *cpy_r_r0;
    PyObject *cpy_r_r1;
    char cpy_r_r2;
    PyObject *cpy_r_r3;
    PyObject *cpy_r_r4;
    PyObject **cpy_r_r5;
    PyObject **cpy_r_r6;
    PyObject **cpy_r_r7;
    PyObject **cpy_r_r8;
    PyObject **cpy_r_r9;
    PyObject **cpy_r_r10;
    void *cpy_r_r12;
    void *cpy_r_r14;
    PyObject *cpy_r_r15;
    PyObject *cpy_r_r16;
    PyObject *cpy_r_r17;
    PyObject *cpy_r_r18;
    char cpy_r_r19;
    PyObject *cpy_r_r20;
    PyObject *cpy_r_r21;
    PyObject *cpy_r_r22;
    PyObject *cpy_r_r23;
    PyObject *cpy_r_r24;
    PyObject *cpy_r_r25;
    PyObject *cpy_r_r26;
    PyObject *cpy_r_r27;
    PyObject *cpy_r_r28;
    PyObject *cpy_r_r29;
    PyObject *cpy_r_r30;
    PyObject *cpy_r_r31;
    PyObject *cpy_r_r32;
    PyObject *cpy_r_r33;
    PyObject *cpy_r_r34;
    PyObject *cpy_r_r35;
    tuple_T2II cpy_r_r36;
    PyObject *cpy_r_r37;
    PyObject *cpy_r_r38;
    char cpy_r_r39;
    PyObject *cpy_r_r40;
    PyObject *cpy_r_r41;
    PyObject *cpy_r_r42;
    PyObject *cpy_r_r43;
    char cpy_r_r44;
    PyObject *cpy_r_r45;
    PyObject *cpy_r_r46;
    PyObject *cpy_r_r47;
    PyObject *cpy_r_r48;
    tuple_T2II cpy_r_r49;
    PyObject *cpy_r_r50;
    PyObject *cpy_r_r51;
    char cpy_r_r52;
    PyObject *cpy_r_r53;
    PyObject *cpy_r_r54;
    PyObject *cpy_r_r55;
    PyObject *cpy_r_r56;
    PyObject *cpy_r_r57;
    PyObject *cpy_r_r58;
    PyObject *cpy_r_r59;
    int32_t cpy_r_r60;
    char cpy_r_r61;
    PyObject *cpy_r_r62;
    tuple_T1O cpy_r_r63;
    PyObject *cpy_r_r64;
    PyObject *cpy_r_r65;
    PyObject *cpy_r_r66;
    int32_t cpy_r_r67;
    char cpy_r_r68;
    PyObject *cpy_r_r69;
    PyObject *cpy_r_r70;
    PyObject *cpy_r_r71;
    PyObject *cpy_r_r72;
    PyObject **cpy_r_r74;
    PyObject *cpy_r_r75;
    PyObject *cpy_r_r76;
    PyObject *cpy_r_r77;
    int32_t cpy_r_r78;
    char cpy_r_r79;
    PyObject *cpy_r_r80;
    PyObject *cpy_r_r81;
    PyObject *cpy_r_r82;
    PyObject *cpy_r_r83;
    PyObject **cpy_r_r85;
    PyObject *cpy_r_r86;
    PyObject *cpy_r_r87;
    PyObject *cpy_r_r88;
    int32_t cpy_r_r89;
    char cpy_r_r90;
    PyObject *cpy_r_r91;
    PyObject *cpy_r_r92;
    PyObject *cpy_r_r93;
    PyObject *cpy_r_r94;
    PyObject *cpy_r_r95;
    PyObject *cpy_r_r96;
    PyObject *cpy_r_r97;
    PyObject *cpy_r_r98;
    PyObject *cpy_r_r99;
    PyObject *cpy_r_r100;
    PyObject *cpy_r_r101;
    PyObject *cpy_r_r102;
    tuple_T3OOO cpy_r_r103;
    PyObject *cpy_r_r104;
    PyObject *cpy_r_r105;
    PyObject *cpy_r_r106;
    PyObject *cpy_r_r107;
    int32_t cpy_r_r108;
    char cpy_r_r109;
    PyObject *cpy_r_r110;
    PyObject *cpy_r_r111;
    PyObject *cpy_r_r112;
    PyObject *cpy_r_r113;
    PyObject *cpy_r_r114;
    PyObject *cpy_r_r115;
    PyObject *cpy_r_r116;
    PyObject *cpy_r_r117;
    PyObject *cpy_r_r118;
    PyObject *cpy_r_r119;
    PyObject *cpy_r_r120;
    tuple_T2OO cpy_r_r121;
    PyObject *cpy_r_r122;
    PyObject *cpy_r_r123;
    PyObject *cpy_r_r124;
    PyObject *cpy_r_r125;
    int32_t cpy_r_r126;
    char cpy_r_r127;
    PyObject *cpy_r_r128;
    PyObject *cpy_r_r129;
    PyObject *cpy_r_r130;
    PyObject *cpy_r_r131;
    PyObject *cpy_r_r132;
    PyObject *cpy_r_r133;
    PyObject *cpy_r_r134;
    PyObject *cpy_r_r135;
    PyObject *cpy_r_r136;
    PyObject *cpy_r_r137;
    PyObject *cpy_r_r138;
    PyObject *cpy_r_r139;
    tuple_T3OOO cpy_r_r140;
    PyObject *cpy_r_r141;
    PyObject *cpy_r_r142;
    PyObject *cpy_r_r143;
    PyObject *cpy_r_r144;
    int32_t cpy_r_r145;
    char cpy_r_r146;
    PyObject *cpy_r_r147;
    PyObject *cpy_r_r148;
    PyObject *cpy_r_r149;
    PyObject *cpy_r_r150;
    PyObject *cpy_r_r151;
    PyObject *cpy_r_r152;
    CPyPtr cpy_r_r153;
    CPyPtr cpy_r_r154;
    CPyPtr cpy_r_r155;
    CPyPtr cpy_r_r156;
    CPyPtr cpy_r_r157;
    PyObject *cpy_r_r158;
    PyObject *cpy_r_r159;
    PyObject *cpy_r_r160;
    PyObject **cpy_r_r162;
    PyObject *cpy_r_r163;
    PyObject *cpy_r_r164;
    PyObject *cpy_r_r165;
    int32_t cpy_r_r166;
    char cpy_r_r167;
    PyObject *cpy_r_r168;
    PyObject *cpy_r_r169;
    PyObject *cpy_r_r170;
    PyObject *cpy_r_r171;
    PyObject *cpy_r_r172;
    int32_t cpy_r_r173;
    char cpy_r_r174;
    PyObject *cpy_r_r175;
    PyObject *cpy_r_r176;
    PyObject *cpy_r_r177;
    PyObject *cpy_r_r178;
    PyObject *cpy_r_r179;
    int32_t cpy_r_r180;
    char cpy_r_r181;
    PyObject *cpy_r_r182;
    PyObject *cpy_r_r183;
    PyObject *cpy_r_r184;
    PyObject *cpy_r_r185;
    PyObject *cpy_r_r186;
    int32_t cpy_r_r187;
    char cpy_r_r188;
    PyObject *cpy_r_r189;
    PyObject *cpy_r_r190;
    PyObject *cpy_r_r191;
    PyObject *cpy_r_r192;
    PyObject *cpy_r_r193;
    int32_t cpy_r_r194;
    char cpy_r_r195;
    PyObject *cpy_r_r196;
    PyObject *cpy_r_r197;
    PyObject *cpy_r_r198;
    PyObject *cpy_r_r199;
    PyObject *cpy_r_r200;
    int32_t cpy_r_r201;
    char cpy_r_r202;
    PyObject *cpy_r_r203;
    PyObject *cpy_r_r204;
    char cpy_r_r205;
    PyObject *cpy_r_r206;
    PyObject *cpy_r_r207;
    PyObject *cpy_r_r208;
    PyObject *cpy_r_r209;
    PyObject *cpy_r_r210;
    PyObject *cpy_r_r211;
    PyObject *cpy_r_r212;
    PyObject *cpy_r_r213;
    PyObject *cpy_r_r214;
    PyObject *cpy_r_r215;
    char cpy_r_r216;
    PyObject *cpy_r_r217;
    PyObject *cpy_r_r218;
    PyObject *cpy_r_r219;
    PyObject *cpy_r_r220;
    PyObject *cpy_r_r221;
    PyObject *cpy_r_r222;
    PyObject *cpy_r_r223;
    PyObject *cpy_r_r224;
    char cpy_r_r225;
    PyObject *cpy_r_r226;
    PyObject *cpy_r_r227;
    PyObject *cpy_r_r228;
    PyObject **cpy_r_r230;
    PyObject *cpy_r_r231;
    PyObject *cpy_r_r232;
    PyObject *cpy_r_r233;
    PyObject *cpy_r_r234;
    PyObject *cpy_r_r235;
    PyObject *cpy_r_r236;
    PyObject *cpy_r_r237;
    int32_t cpy_r_r238;
    char cpy_r_r239;
    PyObject *cpy_r_r240;
    PyObject *cpy_r_r241;
    int32_t cpy_r_r242;
    char cpy_r_r243;
    PyObject *cpy_r_r244;
    PyObject *cpy_r_r245;
    int32_t cpy_r_r246;
    char cpy_r_r247;
    PyObject *cpy_r_r248;
    PyObject *cpy_r_r249;
    int32_t cpy_r_r250;
    char cpy_r_r251;
    PyObject *cpy_r_r252;
    PyObject *cpy_r_r253;
    int32_t cpy_r_r254;
    char cpy_r_r255;
    PyObject *cpy_r_r256;
    PyObject *cpy_r_r257;
    int32_t cpy_r_r258;
    char cpy_r_r259;
    PyObject *cpy_r_r260;
    PyObject *cpy_r_r261;
    int32_t cpy_r_r262;
    char cpy_r_r263;
    PyObject **cpy_r_r265;
    PyObject *cpy_r_r266;
    PyObject *cpy_r_r267;
    PyObject *cpy_r_r268;
    PyObject *cpy_r_r269;
    PyObject **cpy_r_r271;
    PyObject *cpy_r_r272;
    PyObject *cpy_r_r273;
    PyObject *cpy_r_r274;
    int32_t cpy_r_r275;
    char cpy_r_r276;
    PyObject *cpy_r_r277;
    PyObject *cpy_r_r278;
    PyObject *cpy_r_r279;
    PyObject *cpy_r_r280;
    PyObject *cpy_r_r281;
    char cpy_r_r282;
    PyObject *cpy_r_r283;
    PyObject *cpy_r_r284;
    PyObject *cpy_r_r285;
    PyObject *cpy_r_r286;
    int32_t cpy_r_r287;
    char cpy_r_r288;
    PyObject *cpy_r_r289;
    PyObject *cpy_r_r290;
    int32_t cpy_r_r291;
    char cpy_r_r292;
    PyObject *cpy_r_r293;
    tuple_T0 cpy_r_r294;
    PyObject *cpy_r_r295;
    PyObject *cpy_r_r296;
    PyObject *cpy_r_r297;
    PyObject *cpy_r_r298;
    PyObject *cpy_r_r299;
    PyObject *cpy_r_r300;
    int32_t cpy_r_r301;
    char cpy_r_r302;
    PyObject *cpy_r_r303;
    PyObject *cpy_r_r304;
    int32_t cpy_r_r305;
    char cpy_r_r306;
    PyObject *cpy_r_r307;
    int32_t cpy_r_r308;
    char cpy_r_r309;
    PyObject *cpy_r_r310;
    PyObject *cpy_r_r311;
    int32_t cpy_r_r312;
    char cpy_r_r313;
    PyObject *cpy_r_r314;
    PyObject *cpy_r_r315;
    int32_t cpy_r_r316;
    char cpy_r_r317;
    PyObject *cpy_r_r318;
    PyObject *cpy_r_r319;
    PyObject *cpy_r_r320;
    PyObject *cpy_r_r321;
    char cpy_r_r322;
    PyObject *cpy_r_r323;
    PyObject *cpy_r_r324;
    PyObject *cpy_r_r325;
    PyObject *cpy_r_r326;
    PyObject *cpy_r_r327;
    PyObject *cpy_r_r328;
    PyObject *cpy_r_r329;
    PyObject *cpy_r_r330;
    PyObject *cpy_r_r331;
    PyObject *cpy_r_r332;
    PyObject *cpy_r_r333;
    char cpy_r_r334;
    PyObject *cpy_r_r335;
    PyObject *cpy_r_r336;
    PyObject *cpy_r_r337;
    PyObject *cpy_r_r338;
    PyObject *cpy_r_r339;
    PyObject *cpy_r_r340;
    PyObject *cpy_r_r341;
    PyObject *cpy_r_r342;
    PyObject *cpy_r_r343;
    PyObject *cpy_r_r344;
    PyObject *cpy_r_r345;
    PyObject *cpy_r_r346;
    PyObject *cpy_r_r347;
    PyObject *cpy_r_r348;
    PyObject *cpy_r_r349;
    PyObject *cpy_r_r350;
    PyObject *cpy_r_r351;
    PyObject *cpy_r_r352;
    PyObject *cpy_r_r353;
    int32_t cpy_r_r354;
    char cpy_r_r355;
    PyObject *cpy_r_r356;
    PyObject *cpy_r_r357;
    int32_t cpy_r_r358;
    char cpy_r_r359;
    PyObject *cpy_r_r360;
    PyObject *cpy_r_r361;
    PyObject *cpy_r_r362;
    PyObject *cpy_r_r363;
    PyObject *cpy_r_r364;
    PyObject *cpy_r_r365;
    PyObject *cpy_r_r366;
    PyObject *cpy_r_r367;
    PyObject *cpy_r_r368;
    tuple_T2OO cpy_r_r369;
    PyObject *cpy_r_r370;
    PyObject *cpy_r_r371;
    PyObject *cpy_r_r372;
    PyObject *cpy_r_r373;
    PyObject *cpy_r_r374;
    PyObject *cpy_r_r375;
    char cpy_r_r376;
    PyObject *cpy_r_r377;
    PyObject *cpy_r_r378;
    PyObject *cpy_r_r379;
    PyObject *cpy_r_r380;
    PyObject *cpy_r_r381;
    PyObject *cpy_r_r382;
    PyObject *cpy_r_r383;
    PyObject *cpy_r_r384;
    PyObject *cpy_r_r385;
    PyObject *cpy_r_r386;
    PyObject *cpy_r_r387;
    PyObject *cpy_r_r388;
    PyObject *cpy_r_r389;
    int32_t cpy_r_r390;
    char cpy_r_r391;
    PyObject *cpy_r_r392;
    PyObject *cpy_r_r393;
    int32_t cpy_r_r394;
    char cpy_r_r395;
    PyObject *cpy_r_r396;
    PyObject *cpy_r_r397;
    PyObject *cpy_r_r398;
    PyObject *cpy_r_r399;
    PyObject *cpy_r_r400;
    PyObject *cpy_r_r401;
    PyObject *cpy_r_r402;
    char cpy_r_r403;
    PyObject *cpy_r_r404;
    PyObject *cpy_r_r405;
    PyObject *cpy_r_r406;
    PyObject **cpy_r_r408;
    PyObject *cpy_r_r409;
    PyObject *cpy_r_r410;
    PyObject *cpy_r_r411;
    PyObject *cpy_r_r412;
    PyObject *cpy_r_r413;
    PyObject *cpy_r_r414;
    PyObject *cpy_r_r415;
    int32_t cpy_r_r416;
    char cpy_r_r417;
    PyObject *cpy_r_r418;
    PyObject *cpy_r_r419;
    int32_t cpy_r_r420;
    char cpy_r_r421;
    PyObject *cpy_r_r422;
    PyObject *cpy_r_r423;
    int32_t cpy_r_r424;
    char cpy_r_r425;
    PyObject *cpy_r_r426;
    PyObject *cpy_r_r427;
    int32_t cpy_r_r428;
    char cpy_r_r429;
    PyObject *cpy_r_r430;
    PyObject *cpy_r_r431;
    int32_t cpy_r_r432;
    char cpy_r_r433;
    PyObject *cpy_r_r434;
    PyObject *cpy_r_r435;
    int32_t cpy_r_r436;
    char cpy_r_r437;
    PyObject *cpy_r_r438;
    PyObject *cpy_r_r439;
    int32_t cpy_r_r440;
    char cpy_r_r441;
    PyObject **cpy_r_r443;
    PyObject *cpy_r_r444;
    PyObject *cpy_r_r445;
    PyObject *cpy_r_r446;
    PyObject *cpy_r_r447;
    PyObject *cpy_r_r448;
    PyObject **cpy_r_r450;
    PyObject *cpy_r_r451;
    PyObject *cpy_r_r452;
    PyObject **cpy_r_r454;
    PyObject *cpy_r_r455;
    PyObject *cpy_r_r456;
    PyObject *cpy_r_r457;
    PyObject *cpy_r_r458;
    PyObject **cpy_r_r460;
    PyObject *cpy_r_r461;
    PyObject *cpy_r_r462;
    PyObject *cpy_r_r463;
    int32_t cpy_r_r464;
    char cpy_r_r465;
    PyObject *cpy_r_r466;
    char cpy_r_r467;
    cpy_r_r0 = CPyModule_builtins;
    cpy_r_r1 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r2 = cpy_r_r0 != cpy_r_r1;
    if (cpy_r_r2) goto CPyL3;
    cpy_r_r3 = CPyStatics[58]; /* 'builtins' */
    cpy_r_r4 = PyImport_Import(cpy_r_r3);
    if (unlikely(cpy_r_r4 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", -1, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_builtins = cpy_r_r4;
    CPy_INCREF(CPyModule_builtins);
    CPy_DECREF(cpy_r_r4);
CPyL3: ;
    cpy_r_r5 = (PyObject **)&CPyModule_asyncio;
    cpy_r_r6 = (PyObject **)&CPyModule_dataclasses;
    cpy_r_r7 = (PyObject **)&CPyModule_functools;
    cpy_r_r8 = (PyObject **)&CPyModule_inspect;
    cpy_r_r9 = (PyObject **)&CPyModule_os;
    cpy_r_r10 = (PyObject **)&CPyModule_sys;
    PyObject **cpy_r_r11[6] = {cpy_r_r5, cpy_r_r6, cpy_r_r7, cpy_r_r8, cpy_r_r9, cpy_r_r10};
    cpy_r_r12 = (void *)&cpy_r_r11;
    int64_t cpy_r_r13[6] = {1, 2, 3, 4, 5, 6};
    cpy_r_r14 = (void *)&cpy_r_r13;
    cpy_r_r15 = CPyStatics[145]; /* (('asyncio', 'asyncio', 'asyncio'),
                                    ('dataclasses', 'dataclasses', 'dataclasses'),
                                    ('functools', 'functools', 'functools'),
                                    ('inspect', 'inspect', 'inspect'), ('os', 'os', 'os'),
                                    ('sys', 'sys', 'sys')) */
    cpy_r_r16 = CPyStatic_globals;
    cpy_r_r17 = CPyStatics[65]; /* 'faster_async_lru/__init__.py' */
    cpy_r_r18 = CPyStatics[66]; /* '<module>' */
    cpy_r_r19 = CPyImport_ImportMany(cpy_r_r15, cpy_r_r12, cpy_r_r16, cpy_r_r17, cpy_r_r18, cpy_r_r14);
    if (!cpy_r_r19) goto CPyL155;
    cpy_r_r20 = CPyStatics[146]; /* ('namedtuple',) */
    cpy_r_r21 = CPyStatics[68]; /* 'collections' */
    cpy_r_r22 = CPyStatic_globals;
    cpy_r_r23 = CPyImport_ImportFromMany(cpy_r_r21, cpy_r_r20, cpy_r_r20, cpy_r_r22);
    if (unlikely(cpy_r_r23 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 7, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_collections = cpy_r_r23;
    CPy_INCREF(CPyModule_collections);
    CPy_DECREF(cpy_r_r23);
    cpy_r_r24 = CPyStatics[147]; /* ('Any', 'Callable', 'Coroutine', 'Final', 'Generic',
                                    'Hashable', 'Optional', 'OrderedDict', 'Type',
                                    'TypedDict', 'TypeVar', 'Union', 'cast', 'final',
                                    'overload') */
    cpy_r_r25 = CPyStatics[83]; /* 'typing' */
    cpy_r_r26 = CPyStatic_globals;
    cpy_r_r27 = CPyImport_ImportFromMany(cpy_r_r25, cpy_r_r24, cpy_r_r24, cpy_r_r26);
    if (unlikely(cpy_r_r27 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 8, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_typing = cpy_r_r27;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r27);
    cpy_r_r28 = CPyStatics[148]; /* ('mypyc_attr',) */
    cpy_r_r29 = CPyStatics[85]; /* 'mypy_extensions' */
    cpy_r_r30 = CPyStatic_globals;
    cpy_r_r31 = CPyImport_ImportFromMany(cpy_r_r29, cpy_r_r28, cpy_r_r28, cpy_r_r30);
    if (unlikely(cpy_r_r31 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 26, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_mypy_extensions = cpy_r_r31;
    CPy_INCREF(CPyModule_mypy_extensions);
    CPy_DECREF(cpy_r_r31);
    cpy_r_r32 = CPyModule_sys;
    cpy_r_r33 = CPyStatics[10]; /* 'version_info' */
    cpy_r_r34 = CPyObject_GetAttr(cpy_r_r32, cpy_r_r33);
    if (unlikely(cpy_r_r34 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 29, CPyStatic_globals);
        goto CPyL155;
    }
    if (likely(PyTuple_Check(cpy_r_r34)))
        cpy_r_r35 = cpy_r_r34;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "<module>", 29, CPyStatic_globals, "tuple", cpy_r_r34);
        goto CPyL155;
    }
    cpy_r_r36.f0 = 6;
    cpy_r_r36.f1 = 22;
    cpy_r_r37 = PyTuple_New(2);
    if (unlikely(cpy_r_r37 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp49 = CPyTagged_StealAsObject(cpy_r_r36.f0);
    PyTuple_SET_ITEM(cpy_r_r37, 0, __tmp49);
    PyObject *__tmp50 = CPyTagged_StealAsObject(cpy_r_r36.f1);
    PyTuple_SET_ITEM(cpy_r_r37, 1, __tmp50);
    cpy_r_r38 = PyObject_RichCompare(cpy_r_r35, cpy_r_r37, 5);
    CPy_DECREF(cpy_r_r35);
    CPy_DECREF(cpy_r_r37);
    if (unlikely(cpy_r_r38 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 29, CPyStatic_globals);
        goto CPyL155;
    }
    if (unlikely(!PyBool_Check(cpy_r_r38))) {
        CPy_TypeError("bool", cpy_r_r38); cpy_r_r39 = 2;
    } else
        cpy_r_r39 = cpy_r_r38 == Py_True;
    CPy_DECREF(cpy_r_r38);
    if (unlikely(cpy_r_r39 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 29, CPyStatic_globals);
        goto CPyL155;
    }
    if (!cpy_r_r39) goto CPyL14;
    cpy_r_r40 = CPyStatics[149]; /* ('Self',) */
    cpy_r_r41 = CPyStatics[83]; /* 'typing' */
    cpy_r_r42 = CPyStatic_globals;
    cpy_r_r43 = CPyImport_ImportFromMany(cpy_r_r41, cpy_r_r40, cpy_r_r40, cpy_r_r42);
    if (unlikely(cpy_r_r43 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 30, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_typing = cpy_r_r43;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r43);
    goto CPyL16;
CPyL14: ;
    PyErr_SetString(PyExc_RuntimeError, "Reached allegedly unreachable code!");
    cpy_r_r44 = 0;
    if (unlikely(!cpy_r_r44)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 32, CPyStatic_globals);
        goto CPyL155;
    }
    CPy_Unreachable();
CPyL16: ;
    cpy_r_r45 = CPyModule_sys;
    cpy_r_r46 = CPyStatics[10]; /* 'version_info' */
    cpy_r_r47 = CPyObject_GetAttr(cpy_r_r45, cpy_r_r46);
    if (unlikely(cpy_r_r47 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 34, CPyStatic_globals);
        goto CPyL155;
    }
    if (likely(PyTuple_Check(cpy_r_r47)))
        cpy_r_r48 = cpy_r_r47;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "<module>", 34, CPyStatic_globals, "tuple", cpy_r_r47);
        goto CPyL155;
    }
    cpy_r_r49.f0 = 6;
    cpy_r_r49.f1 = 28;
    cpy_r_r50 = PyTuple_New(2);
    if (unlikely(cpy_r_r50 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp51 = CPyTagged_StealAsObject(cpy_r_r49.f0);
    PyTuple_SET_ITEM(cpy_r_r50, 0, __tmp51);
    PyObject *__tmp52 = CPyTagged_StealAsObject(cpy_r_r49.f1);
    PyTuple_SET_ITEM(cpy_r_r50, 1, __tmp52);
    cpy_r_r51 = PyObject_RichCompare(cpy_r_r48, cpy_r_r50, 0);
    CPy_DECREF(cpy_r_r48);
    CPy_DECREF(cpy_r_r50);
    if (unlikely(cpy_r_r51 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 34, CPyStatic_globals);
        goto CPyL155;
    }
    if (unlikely(!PyBool_Check(cpy_r_r51))) {
        CPy_TypeError("bool", cpy_r_r51); cpy_r_r52 = 2;
    } else
        cpy_r_r52 = cpy_r_r51 == Py_True;
    CPy_DECREF(cpy_r_r51);
    if (unlikely(cpy_r_r52 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 34, CPyStatic_globals);
        goto CPyL155;
    }
    if (!cpy_r_r52) goto CPyL23;
    cpy_r_r53 = CPyStatics[150]; /* ('_is_coroutine',) */
    cpy_r_r54 = CPyStatics[87]; /* 'asyncio.coroutines' */
    cpy_r_r55 = CPyStatic_globals;
    cpy_r_r56 = CPyImport_ImportFromMany(cpy_r_r54, cpy_r_r53, cpy_r_r53, cpy_r_r55);
    if (unlikely(cpy_r_r56 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 35, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_asyncio___coroutines = cpy_r_r56;
    CPy_INCREF(CPyModule_asyncio___coroutines);
    CPy_DECREF(cpy_r_r56);
CPyL23: ;
    cpy_r_r57 = CPyStatics[88]; /* '2.0.5' */
    cpy_r_r58 = CPyStatic_globals;
    cpy_r_r59 = CPyStatics[89]; /* '__version__' */
    cpy_r_r60 = CPyDict_SetItem(cpy_r_r58, cpy_r_r59, cpy_r_r57);
    cpy_r_r61 = cpy_r_r60 >= 0;
    if (unlikely(!cpy_r_r61)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 38, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r62 = CPyStatics[90]; /* 'alru_cache' */
    CPy_INCREF(cpy_r_r62);
    cpy_r_r63.f0 = cpy_r_r62;
    cpy_r_r64 = CPyStatic_globals;
    cpy_r_r65 = CPyStatics[91]; /* '__all__' */
    cpy_r_r66 = PyTuple_New(1);
    if (unlikely(cpy_r_r66 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp53 = cpy_r_r63.f0;
    PyTuple_SET_ITEM(cpy_r_r66, 0, __tmp53);
    cpy_r_r67 = CPyDict_SetItem(cpy_r_r64, cpy_r_r65, cpy_r_r66);
    CPy_DECREF(cpy_r_r66);
    cpy_r_r68 = cpy_r_r67 >= 0;
    if (unlikely(!cpy_r_r68)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 40, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r69 = CPyStatics[92]; /* '_T' */
    cpy_r_r70 = CPyStatic_globals;
    cpy_r_r71 = CPyStatics[78]; /* 'TypeVar' */
    cpy_r_r72 = CPyDict_GetItem(cpy_r_r70, cpy_r_r71);
    if (unlikely(cpy_r_r72 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 43, CPyStatic_globals);
        goto CPyL155;
    }
    PyObject *cpy_r_r73[1] = {cpy_r_r69};
    cpy_r_r74 = (PyObject **)&cpy_r_r73;
    cpy_r_r75 = PyObject_Vectorcall(cpy_r_r72, cpy_r_r74, 1, 0);
    CPy_DECREF(cpy_r_r72);
    if (unlikely(cpy_r_r75 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 43, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r76 = CPyStatic_globals;
    cpy_r_r77 = CPyStatics[92]; /* '_T' */
    cpy_r_r78 = CPyDict_SetItem(cpy_r_r76, cpy_r_r77, cpy_r_r75);
    CPy_DECREF(cpy_r_r75);
    cpy_r_r79 = cpy_r_r78 >= 0;
    if (unlikely(!cpy_r_r79)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 43, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r80 = CPyStatics[93]; /* '_R' */
    cpy_r_r81 = CPyStatic_globals;
    cpy_r_r82 = CPyStatics[78]; /* 'TypeVar' */
    cpy_r_r83 = CPyDict_GetItem(cpy_r_r81, cpy_r_r82);
    if (unlikely(cpy_r_r83 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 44, CPyStatic_globals);
        goto CPyL155;
    }
    PyObject *cpy_r_r84[1] = {cpy_r_r80};
    cpy_r_r85 = (PyObject **)&cpy_r_r84;
    cpy_r_r86 = PyObject_Vectorcall(cpy_r_r83, cpy_r_r85, 1, 0);
    CPy_DECREF(cpy_r_r83);
    if (unlikely(cpy_r_r86 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 44, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r87 = CPyStatic_globals;
    cpy_r_r88 = CPyStatics[93]; /* '_R' */
    cpy_r_r89 = CPyDict_SetItem(cpy_r_r87, cpy_r_r88, cpy_r_r86);
    CPy_DECREF(cpy_r_r86);
    cpy_r_r90 = cpy_r_r89 >= 0;
    if (unlikely(!cpy_r_r90)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 44, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r91 = CPyStatic_globals;
    cpy_r_r92 = CPyStatics[71]; /* 'Coroutine' */
    cpy_r_r93 = CPyDict_GetItem(cpy_r_r91, cpy_r_r92);
    if (unlikely(cpy_r_r93 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r94 = CPyStatic_globals;
    cpy_r_r95 = CPyStatics[69]; /* 'Any' */
    cpy_r_r96 = CPyDict_GetItem(cpy_r_r94, cpy_r_r95);
    if (unlikely(cpy_r_r96 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL156;
    }
    cpy_r_r97 = CPyStatic_globals;
    cpy_r_r98 = CPyStatics[69]; /* 'Any' */
    cpy_r_r99 = CPyDict_GetItem(cpy_r_r97, cpy_r_r98);
    if (unlikely(cpy_r_r99 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL157;
    }
    cpy_r_r100 = CPyStatic_globals;
    cpy_r_r101 = CPyStatics[93]; /* '_R' */
    cpy_r_r102 = CPyDict_GetItem(cpy_r_r100, cpy_r_r101);
    if (unlikely(cpy_r_r102 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL158;
    }
    cpy_r_r103.f0 = cpy_r_r96;
    cpy_r_r103.f1 = cpy_r_r99;
    cpy_r_r103.f2 = cpy_r_r102;
    cpy_r_r104 = PyTuple_New(3);
    if (unlikely(cpy_r_r104 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp54 = cpy_r_r103.f0;
    PyTuple_SET_ITEM(cpy_r_r104, 0, __tmp54);
    PyObject *__tmp55 = cpy_r_r103.f1;
    PyTuple_SET_ITEM(cpy_r_r104, 1, __tmp55);
    PyObject *__tmp56 = cpy_r_r103.f2;
    PyTuple_SET_ITEM(cpy_r_r104, 2, __tmp56);
    cpy_r_r105 = PyObject_GetItem(cpy_r_r93, cpy_r_r104);
    CPy_DECREF(cpy_r_r93);
    CPy_DECREF(cpy_r_r104);
    if (unlikely(cpy_r_r105 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r106 = CPyStatic_globals;
    cpy_r_r107 = CPyStatics[94]; /* '_Coro' */
    cpy_r_r108 = CPyDict_SetItem(cpy_r_r106, cpy_r_r107, cpy_r_r105);
    CPy_DECREF(cpy_r_r105);
    cpy_r_r109 = cpy_r_r108 >= 0;
    if (unlikely(!cpy_r_r109)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 45, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r110 = CPyStatic_globals;
    cpy_r_r111 = CPyStatics[70]; /* 'Callable' */
    cpy_r_r112 = CPyDict_GetItem(cpy_r_r110, cpy_r_r111);
    if (unlikely(cpy_r_r112 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r113 = (PyObject *)&_Py_EllipsisObject;
    cpy_r_r114 = CPyStatic_globals;
    cpy_r_r115 = CPyStatics[94]; /* '_Coro' */
    cpy_r_r116 = CPyDict_GetItem(cpy_r_r114, cpy_r_r115);
    if (unlikely(cpy_r_r116 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL159;
    }
    cpy_r_r117 = CPyStatic_globals;
    cpy_r_r118 = CPyStatics[93]; /* '_R' */
    cpy_r_r119 = CPyDict_GetItem(cpy_r_r117, cpy_r_r118);
    if (unlikely(cpy_r_r119 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL160;
    }
    cpy_r_r120 = PyObject_GetItem(cpy_r_r116, cpy_r_r119);
    CPy_DECREF(cpy_r_r116);
    CPy_DECREF(cpy_r_r119);
    if (unlikely(cpy_r_r120 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL159;
    }
    CPy_INCREF(cpy_r_r113);
    cpy_r_r121.f0 = cpy_r_r113;
    cpy_r_r121.f1 = cpy_r_r120;
    cpy_r_r122 = PyTuple_New(2);
    if (unlikely(cpy_r_r122 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp57 = cpy_r_r121.f0;
    PyTuple_SET_ITEM(cpy_r_r122, 0, __tmp57);
    PyObject *__tmp58 = cpy_r_r121.f1;
    PyTuple_SET_ITEM(cpy_r_r122, 1, __tmp58);
    cpy_r_r123 = PyObject_GetItem(cpy_r_r112, cpy_r_r122);
    CPy_DECREF(cpy_r_r112);
    CPy_DECREF(cpy_r_r122);
    if (unlikely(cpy_r_r123 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r124 = CPyStatic_globals;
    cpy_r_r125 = CPyStatics[95]; /* '_CB' */
    cpy_r_r126 = CPyDict_SetItem(cpy_r_r124, cpy_r_r125, cpy_r_r123);
    CPy_DECREF(cpy_r_r123);
    cpy_r_r127 = cpy_r_r126 >= 0;
    if (unlikely(!cpy_r_r127)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 46, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r128 = CPyStatic_globals;
    cpy_r_r129 = CPyStatics[79]; /* 'Union' */
    cpy_r_r130 = CPyDict_GetItem(cpy_r_r128, cpy_r_r129);
    if (unlikely(cpy_r_r130 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r131 = CPyStatic_globals;
    cpy_r_r132 = CPyStatics[95]; /* '_CB' */
    cpy_r_r133 = CPyDict_GetItem(cpy_r_r131, cpy_r_r132);
    if (unlikely(cpy_r_r133 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL161;
    }
    cpy_r_r134 = CPyStatic_globals;
    cpy_r_r135 = CPyStatics[93]; /* '_R' */
    cpy_r_r136 = CPyDict_GetItem(cpy_r_r134, cpy_r_r135);
    if (unlikely(cpy_r_r136 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL162;
    }
    cpy_r_r137 = PyObject_GetItem(cpy_r_r133, cpy_r_r136);
    CPy_DECREF(cpy_r_r133);
    CPy_DECREF(cpy_r_r136);
    if (unlikely(cpy_r_r137 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL161;
    }
    cpy_r_r138 = CPyStatics[96]; /* 'functools.partial[_Coro[_R]]' */
    cpy_r_r139 = CPyStatics[97]; /* 'functools.partialmethod[_Coro[_R]]' */
    CPy_INCREF(cpy_r_r138);
    CPy_INCREF(cpy_r_r139);
    cpy_r_r140.f0 = cpy_r_r137;
    cpy_r_r140.f1 = cpy_r_r138;
    cpy_r_r140.f2 = cpy_r_r139;
    cpy_r_r141 = PyTuple_New(3);
    if (unlikely(cpy_r_r141 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp59 = cpy_r_r140.f0;
    PyTuple_SET_ITEM(cpy_r_r141, 0, __tmp59);
    PyObject *__tmp60 = cpy_r_r140.f1;
    PyTuple_SET_ITEM(cpy_r_r141, 1, __tmp60);
    PyObject *__tmp61 = cpy_r_r140.f2;
    PyTuple_SET_ITEM(cpy_r_r141, 2, __tmp61);
    cpy_r_r142 = PyObject_GetItem(cpy_r_r130, cpy_r_r141);
    CPy_DECREF(cpy_r_r130);
    CPy_DECREF(cpy_r_r141);
    if (unlikely(cpy_r_r142 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r143 = CPyStatic_globals;
    cpy_r_r144 = CPyStatics[98]; /* '_CBP' */
    cpy_r_r145 = CPyDict_SetItem(cpy_r_r143, cpy_r_r144, cpy_r_r142);
    CPy_DECREF(cpy_r_r142);
    cpy_r_r146 = cpy_r_r145 >= 0;
    if (unlikely(!cpy_r_r146)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 47, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r147 = CPyStatics[18]; /* '_CacheInfo' */
    cpy_r_r148 = CPyStatics[99]; /* 'hits' */
    cpy_r_r149 = CPyStatics[100]; /* 'misses' */
    cpy_r_r150 = CPyStatics[20]; /* 'maxsize' */
    cpy_r_r151 = CPyStatics[101]; /* 'currsize' */
    cpy_r_r152 = PyList_New(4);
    if (unlikely(cpy_r_r152 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 49, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r153 = (CPyPtr)&((PyListObject *)cpy_r_r152)->ob_item;
    cpy_r_r154 = *(CPyPtr *)cpy_r_r153;
    CPy_INCREF(cpy_r_r148);
    *(PyObject * *)cpy_r_r154 = cpy_r_r148;
    CPy_INCREF(cpy_r_r149);
    cpy_r_r155 = cpy_r_r154 + 8;
    *(PyObject * *)cpy_r_r155 = cpy_r_r149;
    CPy_INCREF(cpy_r_r150);
    cpy_r_r156 = cpy_r_r154 + 16;
    *(PyObject * *)cpy_r_r156 = cpy_r_r150;
    CPy_INCREF(cpy_r_r151);
    cpy_r_r157 = cpy_r_r154 + 24;
    *(PyObject * *)cpy_r_r157 = cpy_r_r151;
    cpy_r_r158 = CPyStatic_globals;
    cpy_r_r159 = CPyStatics[67]; /* 'namedtuple' */
    cpy_r_r160 = CPyDict_GetItem(cpy_r_r158, cpy_r_r159);
    if (unlikely(cpy_r_r160 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 49, CPyStatic_globals);
        goto CPyL163;
    }
    PyObject *cpy_r_r161[2] = {cpy_r_r147, cpy_r_r152};
    cpy_r_r162 = (PyObject **)&cpy_r_r161;
    cpy_r_r163 = PyObject_Vectorcall(cpy_r_r160, cpy_r_r162, 2, 0);
    CPy_DECREF(cpy_r_r160);
    if (unlikely(cpy_r_r163 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 49, CPyStatic_globals);
        goto CPyL163;
    }
    CPy_DECREF_NO_IMM(cpy_r_r152);
    cpy_r_r164 = CPyStatic_globals;
    cpy_r_r165 = CPyStatics[18]; /* '_CacheInfo' */
    cpy_r_r166 = CPyDict_SetItem(cpy_r_r164, cpy_r_r165, cpy_r_r163);
    CPy_DECREF(cpy_r_r163);
    cpy_r_r167 = cpy_r_r166 >= 0;
    if (unlikely(!cpy_r_r167)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 49, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r168 = CPyModule_functools;
    cpy_r_r169 = CPyStatics[102]; /* 'partial' */
    cpy_r_r170 = CPyObject_GetAttr(cpy_r_r168, cpy_r_r169);
    if (unlikely(cpy_r_r170 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 52, CPyStatic_globals);
        goto CPyL155;
    }
    CPyStatic_partial = cpy_r_r170;
    CPy_INCREF(CPyStatic_partial);
    cpy_r_r171 = CPyStatic_globals;
    cpy_r_r172 = CPyStatics[102]; /* 'partial' */
    cpy_r_r173 = CPyDict_SetItem(cpy_r_r171, cpy_r_r172, cpy_r_r170);
    CPy_DECREF(cpy_r_r170);
    cpy_r_r174 = cpy_r_r173 >= 0;
    if (unlikely(!cpy_r_r174)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 52, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r175 = CPyModule_functools;
    cpy_r_r176 = CPyStatics[103]; /* 'partialmethod' */
    cpy_r_r177 = CPyObject_GetAttr(cpy_r_r175, cpy_r_r176);
    if (unlikely(cpy_r_r177 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 53, CPyStatic_globals);
        goto CPyL155;
    }
    CPyStatic_partialmethod = cpy_r_r177;
    CPy_INCREF(CPyStatic_partialmethod);
    cpy_r_r178 = CPyStatic_globals;
    cpy_r_r179 = CPyStatics[103]; /* 'partialmethod' */
    cpy_r_r180 = CPyDict_SetItem(cpy_r_r178, cpy_r_r179, cpy_r_r177);
    CPy_DECREF(cpy_r_r177);
    cpy_r_r181 = cpy_r_r180 >= 0;
    if (unlikely(!cpy_r_r181)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 53, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r182 = CPyModule_asyncio;
    cpy_r_r183 = CPyStatics[104]; /* 'gather' */
    cpy_r_r184 = CPyObject_GetAttr(cpy_r_r182, cpy_r_r183);
    if (unlikely(cpy_r_r184 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 55, CPyStatic_globals);
        goto CPyL155;
    }
    CPyStatic_gather = cpy_r_r184;
    CPy_INCREF(CPyStatic_gather);
    cpy_r_r185 = CPyStatic_globals;
    cpy_r_r186 = CPyStatics[104]; /* 'gather' */
    cpy_r_r187 = CPyDict_SetItem(cpy_r_r185, cpy_r_r186, cpy_r_r184);
    CPy_DECREF(cpy_r_r184);
    cpy_r_r188 = cpy_r_r187 >= 0;
    if (unlikely(!cpy_r_r188)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 55, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r189 = CPyModule_asyncio;
    cpy_r_r190 = CPyStatics[105]; /* 'get_running_loop' */
    cpy_r_r191 = CPyObject_GetAttr(cpy_r_r189, cpy_r_r190);
    if (unlikely(cpy_r_r191 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 56, CPyStatic_globals);
        goto CPyL155;
    }
    CPyStatic_get_running_loop = cpy_r_r191;
    CPy_INCREF(CPyStatic_get_running_loop);
    cpy_r_r192 = CPyStatic_globals;
    cpy_r_r193 = CPyStatics[105]; /* 'get_running_loop' */
    cpy_r_r194 = CPyDict_SetItem(cpy_r_r192, cpy_r_r193, cpy_r_r191);
    CPy_DECREF(cpy_r_r191);
    cpy_r_r195 = cpy_r_r194 >= 0;
    if (unlikely(!cpy_r_r195)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 56, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r196 = CPyModule_asyncio;
    cpy_r_r197 = CPyStatics[106]; /* 'shield' */
    cpy_r_r198 = CPyObject_GetAttr(cpy_r_r196, cpy_r_r197);
    if (unlikely(cpy_r_r198 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 57, CPyStatic_globals);
        goto CPyL155;
    }
    CPyStatic_shield = cpy_r_r198;
    CPy_INCREF(CPyStatic_shield);
    cpy_r_r199 = CPyStatic_globals;
    cpy_r_r200 = CPyStatics[106]; /* 'shield' */
    cpy_r_r201 = CPyDict_SetItem(cpy_r_r199, cpy_r_r200, cpy_r_r198);
    CPy_DECREF(cpy_r_r198);
    cpy_r_r202 = cpy_r_r201 >= 0;
    if (unlikely(!cpy_r_r202)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 57, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r203 = CPyModule_typing;
    cpy_r_r204 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r205 = cpy_r_r203 != cpy_r_r204;
    if (cpy_r_r205) goto CPyL66;
    cpy_r_r206 = CPyStatics[83]; /* 'typing' */
    cpy_r_r207 = PyImport_Import(cpy_r_r206);
    if (unlikely(cpy_r_r207 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL155;
    }
    CPyModule_typing = cpy_r_r207;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r207);
CPyL66: ;
    cpy_r_r208 = PyImport_GetModuleDict();
    cpy_r_r209 = CPyStatics[83]; /* 'typing' */
    cpy_r_r210 = CPyDict_GetItem(cpy_r_r208, cpy_r_r209);
    if (unlikely(cpy_r_r210 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r211 = CPyStatics[107]; /* '_TypedDict' */
    cpy_r_r212 = CPyObject_GetAttr(cpy_r_r210, cpy_r_r211);
    CPy_DECREF(cpy_r_r210);
    if (unlikely(cpy_r_r212 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r213 = PyTuple_Pack(1, cpy_r_r212);
    CPy_DECREF(cpy_r_r212);
    if (unlikely(cpy_r_r213 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r214 = CPyModule_typing;
    cpy_r_r215 = (PyObject *)&_Py_NoneStruct;
    cpy_r_r216 = cpy_r_r214 != cpy_r_r215;
    if (cpy_r_r216) goto CPyL72;
    cpy_r_r217 = CPyStatics[83]; /* 'typing' */
    cpy_r_r218 = PyImport_Import(cpy_r_r217);
    if (unlikely(cpy_r_r218 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL164;
    }
    CPyModule_typing = cpy_r_r218;
    CPy_INCREF(CPyModule_typing);
    CPy_DECREF(cpy_r_r218);
CPyL72: ;
    cpy_r_r219 = PyImport_GetModuleDict();
    cpy_r_r220 = CPyStatics[83]; /* 'typing' */
    cpy_r_r221 = CPyDict_GetItem(cpy_r_r219, cpy_r_r220);
    if (unlikely(cpy_r_r221 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL164;
    }
    cpy_r_r222 = CPyStatics[108]; /* '_TypedDictMeta' */
    cpy_r_r223 = CPyObject_GetAttr(cpy_r_r221, cpy_r_r222);
    CPy_DECREF(cpy_r_r221);
    if (unlikely(cpy_r_r223 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL164;
    }
    cpy_r_r224 = CPyStatics[109]; /* '__prepare__' */
    cpy_r_r225 = PyObject_HasAttr(cpy_r_r223, cpy_r_r224);
    if (!cpy_r_r225) goto CPyL79;
    cpy_r_r226 = CPyStatics[19]; /* '_CacheParameters' */
    cpy_r_r227 = CPyStatics[109]; /* '__prepare__' */
    cpy_r_r228 = CPyObject_GetAttr(cpy_r_r223, cpy_r_r227);
    if (unlikely(cpy_r_r228 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL165;
    }
    PyObject *cpy_r_r229[2] = {cpy_r_r226, cpy_r_r213};
    cpy_r_r230 = (PyObject **)&cpy_r_r229;
    cpy_r_r231 = PyObject_Vectorcall(cpy_r_r228, cpy_r_r230, 2, 0);
    CPy_DECREF(cpy_r_r228);
    if (unlikely(cpy_r_r231 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL165;
    }
    if (likely(PyDict_Check(cpy_r_r231)))
        cpy_r_r232 = cpy_r_r231;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals, "dict", cpy_r_r231);
        goto CPyL165;
    }
    cpy_r_r233 = cpy_r_r232;
    goto CPyL81;
CPyL79: ;
    cpy_r_r234 = PyDict_New();
    if (unlikely(cpy_r_r234 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL165;
    }
    cpy_r_r233 = cpy_r_r234;
CPyL81: ;
    cpy_r_r235 = PyDict_New();
    if (unlikely(cpy_r_r235 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL166;
    }
    cpy_r_r236 = (PyObject *)&PyBool_Type;
    cpy_r_r237 = CPyStatics[21]; /* 'typed' */
    cpy_r_r238 = PyDict_SetItem(cpy_r_r235, cpy_r_r237, cpy_r_r236);
    cpy_r_r239 = cpy_r_r238 >= 0;
    if (unlikely(!cpy_r_r239)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 62, CPyStatic_globals);
        goto CPyL167;
    }
    cpy_r_r240 = (PyObject *)&PyType_Type;
    cpy_r_r241 = CPyStatics[20]; /* 'maxsize' */
    cpy_r_r242 = PyDict_SetItem(cpy_r_r235, cpy_r_r241, cpy_r_r240);
    cpy_r_r243 = cpy_r_r242 >= 0;
    if (unlikely(!cpy_r_r243)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 63, CPyStatic_globals);
        goto CPyL167;
    }
    cpy_r_r244 = (PyObject *)&PyLong_Type;
    cpy_r_r245 = CPyStatics[22]; /* 'tasks' */
    cpy_r_r246 = PyDict_SetItem(cpy_r_r235, cpy_r_r245, cpy_r_r244);
    cpy_r_r247 = cpy_r_r246 >= 0;
    if (unlikely(!cpy_r_r247)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 64, CPyStatic_globals);
        goto CPyL167;
    }
    cpy_r_r248 = (PyObject *)&PyBool_Type;
    cpy_r_r249 = CPyStatics[23]; /* 'closed' */
    cpy_r_r250 = PyDict_SetItem(cpy_r_r235, cpy_r_r249, cpy_r_r248);
    cpy_r_r251 = cpy_r_r250 >= 0;
    if (unlikely(!cpy_r_r251)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 65, CPyStatic_globals);
        goto CPyL167;
    }
    cpy_r_r252 = CPyStatics[19]; /* '_CacheParameters' */
    cpy_r_r253 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r254 = CPyDict_SetItem(cpy_r_r233, cpy_r_r253, cpy_r_r235);
    CPy_DECREF(cpy_r_r235);
    cpy_r_r255 = cpy_r_r254 >= 0;
    if (unlikely(!cpy_r_r255)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL166;
    }
    cpy_r_r256 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r257 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r258 = CPyDict_SetItem(cpy_r_r233, cpy_r_r257, cpy_r_r256);
    cpy_r_r259 = cpy_r_r258 >= 0;
    if (unlikely(!cpy_r_r259)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL166;
    }
    cpy_r_r260 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r261 = CPyStatics[4]; /* '__module__' */
    cpy_r_r262 = CPyDict_SetItem(cpy_r_r233, cpy_r_r261, cpy_r_r260);
    cpy_r_r263 = cpy_r_r262 >= 0;
    if (unlikely(!cpy_r_r263)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL166;
    }
    PyObject *cpy_r_r264[3] = {cpy_r_r252, cpy_r_r213, cpy_r_r233};
    cpy_r_r265 = (PyObject **)&cpy_r_r264;
    cpy_r_r266 = PyObject_Vectorcall(cpy_r_r223, cpy_r_r265, 3, 0);
    CPy_DECREF(cpy_r_r223);
    if (unlikely(cpy_r_r266 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL168;
    }
    CPy_DECREF(cpy_r_r213);
    CPy_DECREF(cpy_r_r233);
    cpy_r_r267 = CPyStatic_globals;
    cpy_r_r268 = CPyStatics[81]; /* 'final' */
    cpy_r_r269 = CPyDict_GetItem(cpy_r_r267, cpy_r_r268);
    if (unlikely(cpy_r_r269 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 60, CPyStatic_globals);
        goto CPyL169;
    }
    PyObject *cpy_r_r270[1] = {cpy_r_r266};
    cpy_r_r271 = (PyObject **)&cpy_r_r270;
    cpy_r_r272 = PyObject_Vectorcall(cpy_r_r269, cpy_r_r271, 1, 0);
    CPy_DECREF(cpy_r_r269);
    if (unlikely(cpy_r_r272 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL169;
    }
    CPy_DECREF(cpy_r_r266);
    CPyType__CacheParameters = (PyTypeObject *)cpy_r_r272;
    CPy_INCREF(CPyType__CacheParameters);
    cpy_r_r273 = CPyStatic_globals;
    cpy_r_r274 = CPyStatics[19]; /* '_CacheParameters' */
    cpy_r_r275 = PyDict_SetItem(cpy_r_r273, cpy_r_r274, cpy_r_r272);
    CPy_DECREF(cpy_r_r272);
    cpy_r_r276 = cpy_r_r275 >= 0;
    if (unlikely(!cpy_r_r276)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 61, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r277 = (PyObject *)CPyType__CacheParameters;
    cpy_r_r278 = NULL;
    cpy_r_r279 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r280 = (PyObject *)CPyType__CacheItem_template;
    cpy_r_r281 = CPyType_FromTemplate(cpy_r_r280, cpy_r_r278, cpy_r_r279);
    if (unlikely(cpy_r_r281 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r282 = CPyDef__CacheItem_trait_vtable_setup();
    if (unlikely(cpy_r_r282 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", -1, CPyStatic_globals);
        goto CPyL170;
    }
    cpy_r_r283 = CPyStatics[112]; /* '__mypyc_attrs__' */
    cpy_r_r284 = CPyStatics[113]; /* 'fut' */
    cpy_r_r285 = CPyStatics[114]; /* 'later_call' */
    cpy_r_r286 = PyTuple_Pack(2, cpy_r_r284, cpy_r_r285);
    if (unlikely(cpy_r_r286 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL170;
    }
    cpy_r_r287 = PyObject_SetAttr(cpy_r_r281, cpy_r_r283, cpy_r_r286);
    CPy_DECREF(cpy_r_r286);
    cpy_r_r288 = cpy_r_r287 >= 0;
    if (unlikely(!cpy_r_r288)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL170;
    }
    CPyType__CacheItem = (PyTypeObject *)cpy_r_r281;
    CPy_INCREF(CPyType__CacheItem);
    cpy_r_r289 = CPyStatic_globals;
    cpy_r_r290 = CPyStatics[115]; /* '_CacheItem' */
    cpy_r_r291 = PyDict_SetItem(cpy_r_r289, cpy_r_r290, cpy_r_r281);
    cpy_r_r292 = cpy_r_r291 >= 0;
    if (unlikely(!cpy_r_r292)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL170;
    }
    cpy_r_r293 = PyDict_New();
    if (unlikely(cpy_r_r293 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL170;
    }
    cpy_r_r294.empty_struct_error_flag = 0;
    cpy_r_r295 = PyDict_New();
    if (unlikely(cpy_r_r295 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL171;
    }
    cpy_r_r296 = (PyObject *)&PyType_Type;
    cpy_r_r297 = CPyModule_asyncio;
    cpy_r_r298 = CPyStatics[116]; /* 'Future' */
    cpy_r_r299 = CPyObject_GetAttr(cpy_r_r297, cpy_r_r298);
    if (unlikely(cpy_r_r299 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 71, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r300 = CPyStatics[113]; /* 'fut' */
    cpy_r_r301 = PyDict_SetItem(cpy_r_r295, cpy_r_r300, cpy_r_r299);
    CPy_DECREF(cpy_r_r299);
    cpy_r_r302 = cpy_r_r301 >= 0;
    if (unlikely(!cpy_r_r302)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 71, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r303 = (PyObject *)&PyType_Type;
    cpy_r_r304 = CPyStatics[114]; /* 'later_call' */
    cpy_r_r305 = PyDict_SetItem(cpy_r_r295, cpy_r_r304, cpy_r_r303);
    cpy_r_r306 = cpy_r_r305 >= 0;
    if (unlikely(!cpy_r_r306)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 72, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r307 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r308 = CPyDict_SetItem(cpy_r_r293, cpy_r_r307, cpy_r_r295);
    cpy_r_r309 = cpy_r_r308 >= 0;
    if (unlikely(!cpy_r_r309)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r310 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r311 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r312 = CPyDict_SetItem(cpy_r_r293, cpy_r_r311, cpy_r_r310);
    cpy_r_r313 = cpy_r_r312 >= 0;
    if (unlikely(!cpy_r_r313)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r314 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r315 = CPyStatics[4]; /* '__module__' */
    cpy_r_r316 = CPyDict_SetItem(cpy_r_r293, cpy_r_r315, cpy_r_r314);
    cpy_r_r317 = cpy_r_r316 >= 0;
    if (unlikely(!cpy_r_r317)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r318 = CPyModule_dataclasses;
    cpy_r_r319 = CPyStatics[117]; /* 'dataclass' */
    cpy_r_r320 = CPyObject_GetAttr(cpy_r_r318, cpy_r_r319);
    if (unlikely(cpy_r_r320 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 69, CPyStatic_globals);
        goto CPyL172;
    }
    cpy_r_r321 = CPyStatics[60]; /* 'dataclasses' */
    cpy_r_r322 = CPyDataclass_SleightOfHand(cpy_r_r320, cpy_r_r281, cpy_r_r293, cpy_r_r295, cpy_r_r321);
    CPy_DECREF(cpy_r_r320);
    CPy_DECREF(cpy_r_r281);
    CPy_DECREF(cpy_r_r293);
    CPy_DECREF(cpy_r_r295);
    if (unlikely(!cpy_r_r322)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 70, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r323 = CPyStatic_globals;
    cpy_r_r324 = CPyStatics[73]; /* 'Generic' */
    cpy_r_r325 = CPyDict_GetItem(cpy_r_r323, cpy_r_r324);
    if (unlikely(cpy_r_r325 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r326 = CPyStatic_globals;
    cpy_r_r327 = CPyStatics[93]; /* '_R' */
    cpy_r_r328 = CPyDict_GetItem(cpy_r_r326, cpy_r_r327);
    if (unlikely(cpy_r_r328 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL173;
    }
    cpy_r_r329 = PyObject_GetItem(cpy_r_r325, cpy_r_r328);
    CPy_DECREF(cpy_r_r325);
    CPy_DECREF(cpy_r_r328);
    if (unlikely(cpy_r_r329 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r330 = PyTuple_Pack(1, cpy_r_r329);
    CPy_DECREF(cpy_r_r329);
    if (unlikely(cpy_r_r330 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r331 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r332 = (PyObject *)CPyType__LRUCacheWrapper_template;
    cpy_r_r333 = CPyType_FromTemplate(cpy_r_r332, cpy_r_r330, cpy_r_r331);
    CPy_DECREF(cpy_r_r330);
    if (unlikely(cpy_r_r333 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r334 = CPyDef__LRUCacheWrapper_trait_vtable_setup();
    if (unlikely(cpy_r_r334 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", -1, CPyStatic_globals);
        goto CPyL174;
    }
    cpy_r_r335 = CPyStatics[112]; /* '__mypyc_attrs__' */
    cpy_r_r336 = CPyStatics[4]; /* '__module__' */
    cpy_r_r337 = CPyStatics[118]; /* '__name__' */
    cpy_r_r338 = CPyStatics[6]; /* '__qualname__' */
    cpy_r_r339 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r340 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r341 = CPyStatics[9]; /* '__dict__' */
    cpy_r_r342 = CPyStatics[11]; /* '_is_coroutine' */
    cpy_r_r343 = CPyStatics[34]; /* '__wrapped__' */
    cpy_r_r344 = CPyStatics[119]; /* '__maxsize' */
    cpy_r_r345 = CPyStatics[120]; /* '__typed' */
    cpy_r_r346 = CPyStatics[121]; /* '__ttl' */
    cpy_r_r347 = CPyStatics[122]; /* '__cache' */
    cpy_r_r348 = CPyStatics[123]; /* '__closed' */
    cpy_r_r349 = CPyStatics[124]; /* '__hits' */
    cpy_r_r350 = CPyStatics[125]; /* '__misses' */
    cpy_r_r351 = CPyStatics[126]; /* '__tasks' */
    cpy_r_r352 = CPyStatics[9]; /* '__dict__' */
    cpy_r_r353 = PyTuple_Pack(17, cpy_r_r336, cpy_r_r337, cpy_r_r338, cpy_r_r339, cpy_r_r340, cpy_r_r341, cpy_r_r342, cpy_r_r343, cpy_r_r344, cpy_r_r345, cpy_r_r346, cpy_r_r347, cpy_r_r348, cpy_r_r349, cpy_r_r350, cpy_r_r351, cpy_r_r352);
    if (unlikely(cpy_r_r353 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL174;
    }
    cpy_r_r354 = PyObject_SetAttr(cpy_r_r333, cpy_r_r335, cpy_r_r353);
    CPy_DECREF(cpy_r_r353);
    cpy_r_r355 = cpy_r_r354 >= 0;
    if (unlikely(!cpy_r_r355)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL174;
    }
    CPyType__LRUCacheWrapper = (PyTypeObject *)cpy_r_r333;
    CPy_INCREF(CPyType__LRUCacheWrapper);
    cpy_r_r356 = CPyStatic_globals;
    cpy_r_r357 = CPyStatics[127]; /* '_LRUCacheWrapper' */
    cpy_r_r358 = PyDict_SetItem(cpy_r_r356, cpy_r_r357, cpy_r_r333);
    CPy_DECREF(cpy_r_r333);
    cpy_r_r359 = cpy_r_r358 >= 0;
    if (unlikely(!cpy_r_r359)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 81, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r360 = CPyStatic_globals;
    cpy_r_r361 = CPyStatics[73]; /* 'Generic' */
    cpy_r_r362 = CPyDict_GetItem(cpy_r_r360, cpy_r_r361);
    if (unlikely(cpy_r_r362 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r363 = CPyStatic_globals;
    cpy_r_r364 = CPyStatics[93]; /* '_R' */
    cpy_r_r365 = CPyDict_GetItem(cpy_r_r363, cpy_r_r364);
    if (unlikely(cpy_r_r365 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL175;
    }
    cpy_r_r366 = CPyStatic_globals;
    cpy_r_r367 = CPyStatics[92]; /* '_T' */
    cpy_r_r368 = CPyDict_GetItem(cpy_r_r366, cpy_r_r367);
    if (unlikely(cpy_r_r368 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL176;
    }
    cpy_r_r369.f0 = cpy_r_r365;
    cpy_r_r369.f1 = cpy_r_r368;
    cpy_r_r370 = PyTuple_New(2);
    if (unlikely(cpy_r_r370 == NULL))
        CPyError_OutOfMemory();
    PyObject *__tmp62 = cpy_r_r369.f0;
    PyTuple_SET_ITEM(cpy_r_r370, 0, __tmp62);
    PyObject *__tmp63 = cpy_r_r369.f1;
    PyTuple_SET_ITEM(cpy_r_r370, 1, __tmp63);
    cpy_r_r371 = PyObject_GetItem(cpy_r_r362, cpy_r_r370);
    CPy_DECREF(cpy_r_r362);
    CPy_DECREF(cpy_r_r370);
    if (unlikely(cpy_r_r371 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r372 = PyTuple_Pack(1, cpy_r_r371);
    CPy_DECREF(cpy_r_r371);
    if (unlikely(cpy_r_r372 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r373 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r374 = (PyObject *)CPyType__LRUCacheWrapperInstanceMethod_template;
    cpy_r_r375 = CPyType_FromTemplate(cpy_r_r374, cpy_r_r372, cpy_r_r373);
    CPy_DECREF(cpy_r_r372);
    if (unlikely(cpy_r_r375 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r376 = CPyDef__LRUCacheWrapperInstanceMethod_trait_vtable_setup();
    if (unlikely(cpy_r_r376 == 2)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", -1, CPyStatic_globals);
        goto CPyL177;
    }
    cpy_r_r377 = CPyStatics[112]; /* '__mypyc_attrs__' */
    cpy_r_r378 = CPyStatics[4]; /* '__module__' */
    cpy_r_r379 = CPyStatics[118]; /* '__name__' */
    cpy_r_r380 = CPyStatics[6]; /* '__qualname__' */
    cpy_r_r381 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r382 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r383 = CPyStatics[9]; /* '__dict__' */
    cpy_r_r384 = CPyStatics[11]; /* '_is_coroutine' */
    cpy_r_r385 = CPyStatics[34]; /* '__wrapped__' */
    cpy_r_r386 = CPyStatics[128]; /* '__instance' */
    cpy_r_r387 = CPyStatics[41]; /* '__wrapper' */
    cpy_r_r388 = CPyStatics[9]; /* '__dict__' */
    cpy_r_r389 = PyTuple_Pack(11, cpy_r_r378, cpy_r_r379, cpy_r_r380, cpy_r_r381, cpy_r_r382, cpy_r_r383, cpy_r_r384, cpy_r_r385, cpy_r_r386, cpy_r_r387, cpy_r_r388);
    if (unlikely(cpy_r_r389 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL177;
    }
    cpy_r_r390 = PyObject_SetAttr(cpy_r_r375, cpy_r_r377, cpy_r_r389);
    CPy_DECREF(cpy_r_r389);
    cpy_r_r391 = cpy_r_r390 >= 0;
    if (unlikely(!cpy_r_r391)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL177;
    }
    CPyType__LRUCacheWrapperInstanceMethod = (PyTypeObject *)cpy_r_r375;
    CPy_INCREF(CPyType__LRUCacheWrapperInstanceMethod);
    cpy_r_r392 = CPyStatic_globals;
    cpy_r_r393 = CPyStatics[129]; /* '_LRUCacheWrapperInstanceMethod' */
    cpy_r_r394 = PyDict_SetItem(cpy_r_r392, cpy_r_r393, cpy_r_r375);
    CPy_DECREF(cpy_r_r375);
    cpy_r_r395 = cpy_r_r394 >= 0;
    if (unlikely(!cpy_r_r395)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 259, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r396 = CPyModule_builtins;
    cpy_r_r397 = CPyStatics[130]; /* 'list' */
    cpy_r_r398 = CPyObject_GetAttr(cpy_r_r396, cpy_r_r397);
    if (unlikely(cpy_r_r398 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r399 = PyTuple_Pack(1, cpy_r_r398);
    CPy_DECREF(cpy_r_r398);
    if (unlikely(cpy_r_r399 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r400 = (PyObject *)&PyType_Type;
    cpy_r_r401 = CPy_CalculateMetaclass(cpy_r_r400, cpy_r_r399);
    if (unlikely(cpy_r_r401 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL178;
    }
    cpy_r_r402 = CPyStatics[109]; /* '__prepare__' */
    cpy_r_r403 = PyObject_HasAttr(cpy_r_r401, cpy_r_r402);
    if (!cpy_r_r403) goto CPyL135;
    cpy_r_r404 = CPyStatics[131]; /* '_HashedSeq' */
    cpy_r_r405 = CPyStatics[109]; /* '__prepare__' */
    cpy_r_r406 = CPyObject_GetAttr(cpy_r_r401, cpy_r_r405);
    if (unlikely(cpy_r_r406 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL178;
    }
    PyObject *cpy_r_r407[2] = {cpy_r_r404, cpy_r_r399};
    cpy_r_r408 = (PyObject **)&cpy_r_r407;
    cpy_r_r409 = PyObject_Vectorcall(cpy_r_r406, cpy_r_r408, 2, 0);
    CPy_DECREF(cpy_r_r406);
    if (unlikely(cpy_r_r409 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL178;
    }
    if (likely(PyDict_Check(cpy_r_r409)))
        cpy_r_r410 = cpy_r_r409;
    else {
        CPy_TypeErrorTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals, "dict", cpy_r_r409);
        goto CPyL178;
    }
    cpy_r_r411 = cpy_r_r410;
    goto CPyL137;
CPyL135: ;
    cpy_r_r412 = PyDict_New();
    if (unlikely(cpy_r_r412 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL178;
    }
    cpy_r_r411 = cpy_r_r412;
CPyL137: ;
    cpy_r_r413 = PyDict_New();
    if (unlikely(cpy_r_r413 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL179;
    }
    cpy_r_r414 = (PyObject *)&PyUnicode_Type;
    cpy_r_r415 = CPyStatics[132]; /* '__slots__' */
    cpy_r_r416 = PyDict_SetItem(cpy_r_r413, cpy_r_r415, cpy_r_r414);
    cpy_r_r417 = cpy_r_r416 >= 0;
    if (unlikely(!cpy_r_r417)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 391, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r418 = CPyStatics[56]; /* 'hashvalue' */
    cpy_r_r419 = CPyStatics[132]; /* '__slots__' */
    cpy_r_r420 = CPyDict_SetItem(cpy_r_r411, cpy_r_r419, cpy_r_r418);
    cpy_r_r421 = cpy_r_r420 >= 0;
    if (unlikely(!cpy_r_r421)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 391, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r422 = CPyDef___init___3__HashedSeq_obj();
    if (unlikely(cpy_r_r422 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 393, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r423 = CPyStatics[133]; /* '__init__' */
    cpy_r_r424 = CPyDict_SetItem(cpy_r_r411, cpy_r_r423, cpy_r_r422);
    CPy_DECREF_NO_IMM(cpy_r_r422);
    cpy_r_r425 = cpy_r_r424 >= 0;
    if (unlikely(!cpy_r_r425)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 393, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r426 = CPyDef___hash___3__HashedSeq_obj();
    if (unlikely(cpy_r_r426 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 397, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r427 = CPyStatics[134]; /* '__hash__' */
    cpy_r_r428 = CPyDict_SetItem(cpy_r_r411, cpy_r_r427, cpy_r_r426);
    CPy_DECREF_NO_IMM(cpy_r_r426);
    cpy_r_r429 = cpy_r_r428 >= 0;
    if (unlikely(!cpy_r_r429)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 397, CPyStatic_globals);
        goto CPyL180;
    }
    cpy_r_r430 = CPyStatics[131]; /* '_HashedSeq' */
    cpy_r_r431 = CPyStatics[8]; /* '__annotations__' */
    cpy_r_r432 = CPyDict_SetItem(cpy_r_r411, cpy_r_r431, cpy_r_r413);
    CPy_DECREF(cpy_r_r413);
    cpy_r_r433 = cpy_r_r432 >= 0;
    if (unlikely(!cpy_r_r433)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL179;
    }
    cpy_r_r434 = CPyStatics[110]; /* 'mypyc filler docstring' */
    cpy_r_r435 = CPyStatics[7]; /* '__doc__' */
    cpy_r_r436 = CPyDict_SetItem(cpy_r_r411, cpy_r_r435, cpy_r_r434);
    cpy_r_r437 = cpy_r_r436 >= 0;
    if (unlikely(!cpy_r_r437)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL179;
    }
    cpy_r_r438 = CPyStatics[111]; /* 'faster_async_lru' */
    cpy_r_r439 = CPyStatics[4]; /* '__module__' */
    cpy_r_r440 = CPyDict_SetItem(cpy_r_r411, cpy_r_r439, cpy_r_r438);
    cpy_r_r441 = cpy_r_r440 >= 0;
    if (unlikely(!cpy_r_r441)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL179;
    }
    PyObject *cpy_r_r442[3] = {cpy_r_r430, cpy_r_r399, cpy_r_r411};
    cpy_r_r443 = (PyObject **)&cpy_r_r442;
    cpy_r_r444 = PyObject_Vectorcall(cpy_r_r401, cpy_r_r443, 3, 0);
    if (unlikely(cpy_r_r444 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL179;
    }
    CPy_DECREF(cpy_r_r399);
    CPy_DECREF(cpy_r_r411);
    cpy_r_r445 = CPyStatic_globals;
    cpy_r_r446 = CPyStatics[84]; /* 'mypyc_attr' */
    cpy_r_r447 = CPyDict_GetItem(cpy_r_r445, cpy_r_r446);
    if (unlikely(cpy_r_r447 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 383, CPyStatic_globals);
        goto CPyL181;
    }
    cpy_r_r448 = 0 ? Py_True : Py_False;
    PyObject *cpy_r_r449[1] = {cpy_r_r448};
    cpy_r_r450 = (PyObject **)&cpy_r_r449;
    cpy_r_r451 = CPyStatics[151]; /* ('native_class',) */
    cpy_r_r452 = PyObject_Vectorcall(cpy_r_r447, cpy_r_r450, 0, cpy_r_r451);
    CPy_DECREF(cpy_r_r447);
    if (unlikely(cpy_r_r452 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 383, CPyStatic_globals);
        goto CPyL181;
    }
    PyObject *cpy_r_r453[1] = {cpy_r_r444};
    cpy_r_r454 = (PyObject **)&cpy_r_r453;
    cpy_r_r455 = PyObject_Vectorcall(cpy_r_r452, cpy_r_r454, 1, 0);
    CPy_DECREF(cpy_r_r452);
    if (unlikely(cpy_r_r455 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL181;
    }
    CPy_DECREF(cpy_r_r444);
    cpy_r_r456 = CPyStatic_globals;
    cpy_r_r457 = CPyStatics[81]; /* 'final' */
    cpy_r_r458 = CPyDict_GetItem(cpy_r_r456, cpy_r_r457);
    if (unlikely(cpy_r_r458 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 382, CPyStatic_globals);
        goto CPyL182;
    }
    PyObject *cpy_r_r459[1] = {cpy_r_r455};
    cpy_r_r460 = (PyObject **)&cpy_r_r459;
    cpy_r_r461 = PyObject_Vectorcall(cpy_r_r458, cpy_r_r460, 1, 0);
    CPy_DECREF(cpy_r_r458);
    if (unlikely(cpy_r_r461 == NULL)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL182;
    }
    CPy_DECREF(cpy_r_r455);
    CPyType__HashedSeq = (PyTypeObject *)cpy_r_r461;
    CPy_INCREF(CPyType__HashedSeq);
    cpy_r_r462 = CPyStatic_globals;
    cpy_r_r463 = CPyStatics[131]; /* '_HashedSeq' */
    cpy_r_r464 = PyDict_SetItem(cpy_r_r462, cpy_r_r463, cpy_r_r461);
    CPy_DECREF(cpy_r_r461);
    cpy_r_r465 = cpy_r_r464 >= 0;
    if (unlikely(!cpy_r_r465)) {
        CPy_AddTraceback("faster_async_lru/__init__.py", "<module>", 384, CPyStatic_globals);
        goto CPyL155;
    }
    cpy_r_r466 = (PyObject *)CPyType__HashedSeq;
    return 1;
CPyL155: ;
    cpy_r_r467 = 2;
    return cpy_r_r467;
CPyL156: ;
    CPy_DecRef(cpy_r_r93);
    goto CPyL155;
CPyL157: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r96);
    goto CPyL155;
CPyL158: ;
    CPy_DecRef(cpy_r_r93);
    CPy_DecRef(cpy_r_r96);
    CPy_DecRef(cpy_r_r99);
    goto CPyL155;
CPyL159: ;
    CPy_DecRef(cpy_r_r112);
    goto CPyL155;
CPyL160: ;
    CPy_DecRef(cpy_r_r112);
    CPy_DecRef(cpy_r_r116);
    goto CPyL155;
CPyL161: ;
    CPy_DecRef(cpy_r_r130);
    goto CPyL155;
CPyL162: ;
    CPy_DecRef(cpy_r_r130);
    CPy_DecRef(cpy_r_r133);
    goto CPyL155;
CPyL163: ;
    CPy_DecRef(cpy_r_r152);
    goto CPyL155;
CPyL164: ;
    CPy_DecRef(cpy_r_r213);
    goto CPyL155;
CPyL165: ;
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r223);
    goto CPyL155;
CPyL166: ;
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r233);
    goto CPyL155;
CPyL167: ;
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r223);
    CPy_DecRef(cpy_r_r233);
    CPy_DecRef(cpy_r_r235);
    goto CPyL155;
CPyL168: ;
    CPy_DecRef(cpy_r_r213);
    CPy_DecRef(cpy_r_r233);
    goto CPyL155;
CPyL169: ;
    CPy_DecRef(cpy_r_r266);
    goto CPyL155;
CPyL170: ;
    CPy_DecRef(cpy_r_r281);
    goto CPyL155;
CPyL171: ;
    CPy_DecRef(cpy_r_r281);
    CPy_DecRef(cpy_r_r293);
    goto CPyL155;
CPyL172: ;
    CPy_DecRef(cpy_r_r281);
    CPy_DecRef(cpy_r_r293);
    CPy_DecRef(cpy_r_r295);
    goto CPyL155;
CPyL173: ;
    CPy_DecRef(cpy_r_r325);
    goto CPyL155;
CPyL174: ;
    CPy_DecRef(cpy_r_r333);
    goto CPyL155;
CPyL175: ;
    CPy_DecRef(cpy_r_r362);
    goto CPyL155;
CPyL176: ;
    CPy_DecRef(cpy_r_r362);
    CPy_DecRef(cpy_r_r365);
    goto CPyL155;
CPyL177: ;
    CPy_DecRef(cpy_r_r375);
    goto CPyL155;
CPyL178: ;
    CPy_DecRef(cpy_r_r399);
    goto CPyL155;
CPyL179: ;
    CPy_DecRef(cpy_r_r399);
    CPy_DecRef(cpy_r_r411);
    goto CPyL155;
CPyL180: ;
    CPy_DecRef(cpy_r_r399);
    CPy_DecRef(cpy_r_r411);
    CPy_DecRef(cpy_r_r413);
    goto CPyL155;
CPyL181: ;
    CPy_DecRef(cpy_r_r444);
    goto CPyL155;
CPyL182: ;
    CPy_DecRef(cpy_r_r455);
    goto CPyL155;
}

int CPyGlobalsInit(void)
{
    static int is_initialized = 0;
    if (is_initialized) return 0;
    
    CPy_Init();
    CPyModule_faster_async_lru = Py_None;
    CPyModule_builtins = Py_None;
    CPyModule_asyncio = Py_None;
    CPyModule_dataclasses = Py_None;
    CPyModule_functools = Py_None;
    CPyModule_inspect = Py_None;
    CPyModule_os = Py_None;
    CPyModule_sys = Py_None;
    CPyModule_collections = Py_None;
    CPyModule_typing = Py_None;
    CPyModule_mypy_extensions = Py_None;
    CPyModule_asyncio___coroutines = Py_None;
    if (CPyStatics_Initialize(CPyStatics, CPyLit_Str, CPyLit_Bytes, CPyLit_Int, CPyLit_Float, CPyLit_Complex, CPyLit_Tuple, CPyLit_FrozenSet) < 0) {
        return -1;
    }
    is_initialized = 1;
    return 0;
}

PyObject *CPyStatics[152];
const char * const CPyLit_Str[] = {
    "\006\006cancel\n__module__\016AttributeError\f__qualname__\a__doc__\017__annotations__",
    "\006\b__dict__\fversion_info\r_is_coroutine\vOrderedDict\003pop\004done",
    "\004\021return_exceptions\rGeneratorExit\rStopIteration\n_CacheInfo",
    "\a\020_CacheParameters\amaxsize\005typed\005tasks\006closed\vmove_to_end\tcancelled",
    "\005\texception\rset_exception\ncall_later\006result\nset_result",
    "\004\031alru_cache is closed for \fRuntimeError\rcreate_future\v__wrapped__",
    "\005\vcreate_task\023_task_done_callback\021add_done_callback\apopitem\004last",
    "\005\020cache_invalidate\t__wrapper\004func\023iscoroutinefunction\aenviron",
    "\004\024ASYNC_LRU_ALLOW_SYNC\003get\000$Coroutine function is required, got ",
    "\005\a{!r:{}}\006format\024_make_unbound_method\025markcoroutinefunction\bcallable",
    "\004\034 decorating is not supported\023NotImplementedError\thashvalue\006object",
    "\a\bbuiltins\aasyncio\vdataclasses\tfunctools\ainspect\002os\003sys",
    "\005\034faster_async_lru/__init__.py\b<module>\nnamedtuple\vcollections\003Any",
    "\b\bCallable\tCoroutine\005Final\aGeneric\bHashable\bOptional\004Type\tTypedDict",
    "\b\aTypeVar\005Union\004cast\005final\boverload\006typing\nmypyc_attr\017mypy_extensions",
    "\b\004Self\022asyncio.coroutines\0052.0.5\v__version__\nalru_cache\a__all__\002_T\002_R",
    "\003\005_Coro\003_CB\034functools.partial[_Coro[_R]]",
    "\006\"functools.partialmethod[_Coro[_R]]\004_CBP\004hits\006misses\bcurrsize\apartial",
    "\005\rpartialmethod\006gather\020get_running_loop\006shield\n_TypedDict",
    "\004\016_TypedDictMeta\v__prepare__\026mypyc filler docstring\020faster_async_lru",
    "\a\017__mypyc_attrs__\003fut\nlater_call\n_CacheItem\006Future\tdataclass\b__name__",
    "\b\t__maxsize\a__typed\005__ttl\a__cache\b__closed\006__hits\b__misses\a__tasks",
    "\004\020_LRUCacheWrapper\n__instance\036_LRUCacheWrapperInstanceMethod\004list",
    "\005\n_HashedSeq\t__slots__\b__init__\b__hash__\fnative_class",
    "",
};
const char * const CPyLit_Bytes[] = {
    "",
};
const char * const CPyLit_Int[] = {
    "\001128",
    "",
};
const double CPyLit_Float[] = {0};
const double CPyLit_Complex[] = {0};
const int CPyLit_Tuple[] = {
    15, 4, 20, 21, 22, 23, 1, 39, 3, 59, 59, 59, 3, 60, 60, 60, 3, 61,
    61, 61, 3, 62, 62, 62, 3, 63, 63, 63, 3, 64, 64, 64, 6, 139, 140, 141,
    142, 143, 144, 1, 67, 15, 69, 70, 71, 72, 73, 74, 75, 12, 76, 77, 78,
    79, 80, 81, 82, 1, 84, 1, 86, 1, 11, 1, 135
};
const int CPyLit_FrozenSet[] = {0};
CPyModule *CPyModule_faster_async_lru__internal = NULL;
CPyModule *CPyModule_faster_async_lru;
PyObject *CPyStatic_globals;
CPyModule *CPyModule_builtins;
CPyModule *CPyModule_asyncio;
CPyModule *CPyModule_dataclasses;
CPyModule *CPyModule_functools;
CPyModule *CPyModule_inspect;
CPyModule *CPyModule_os;
CPyModule *CPyModule_sys;
CPyModule *CPyModule_collections;
CPyModule *CPyModule_typing;
CPyModule *CPyModule_mypy_extensions;
CPyModule *CPyModule_asyncio___coroutines;
PyObject *CPyStatic_partial = NULL;
PyObject *CPyStatic_partialmethod = NULL;
PyObject *CPyStatic_gather = NULL;
PyObject *CPyStatic_get_running_loop = NULL;
PyObject *CPyStatic_shield = NULL;
PyTypeObject *CPyType__CacheParameters;
PyTypeObject *CPyType__CacheItem;
PyObject *CPyDef__CacheItem(PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyTypeObject *CPyType__LRUCacheWrapper;
PyObject *CPyDef__LRUCacheWrapper(PyObject *cpy_r_fn, PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl);
PyTypeObject *CPyType__LRUCacheWrapperInstanceMethod;
PyObject *CPyDef__LRUCacheWrapperInstanceMethod(PyObject *cpy_r_wrapper, PyObject *cpy_r_instance);
PyTypeObject *CPyType__HashedSeq;
PyTypeObject *CPyType_cache_close__LRUCacheWrapper_gen;
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen(void);
CPyThreadLocal faster_async_lru___cache_close__LRUCacheWrapper_genObject *cache_close__LRUCacheWrapper_gen_free_instance;
PyTypeObject *CPyType___call___3__LRUCacheWrapper_gen;
PyObject *CPyDef___call___3__LRUCacheWrapper_gen(void);
CPyThreadLocal faster_async_lru_____call___3__LRUCacheWrapper_genObject *__call___3__LRUCacheWrapper_gen_free_instance;
PyTypeObject *CPyType_cache_close__LRUCacheWrapperInstanceMethod_gen;
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen(void);
CPyThreadLocal faster_async_lru___cache_close__LRUCacheWrapperInstanceMethod_genObject *cache_close__LRUCacheWrapperInstanceMethod_gen_free_instance;
PyTypeObject *CPyType___call___3__LRUCacheWrapperInstanceMethod_gen;
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen(void);
CPyThreadLocal faster_async_lru_____call___3__LRUCacheWrapperInstanceMethod_genObject *__call___3__LRUCacheWrapperInstanceMethod_gen_free_instance;
PyTypeObject *CPyType__make_wrapper_env;
PyObject *CPyDef__make_wrapper_env(void);
CPyThreadLocal faster_async_lru____make_wrapper_envObject *_make_wrapper_env_free_instance;
PyTypeObject *CPyType_wrapper__make_wrapper_obj;
PyObject *CPyDef_wrapper__make_wrapper_obj(void);
CPyThreadLocal faster_async_lru___wrapper__make_wrapper_objObject *wrapper__make_wrapper_obj_free_instance;
PyTypeObject *CPyType___init___3__HashedSeq_obj;
PyObject *CPyDef___init___3__HashedSeq_obj(void);
CPyThreadLocal faster_async_lru_____init___3__HashedSeq_objObject *__init___3__HashedSeq_obj_free_instance;
PyTypeObject *CPyType___hash___3__HashedSeq_obj;
PyObject *CPyDef___hash___3__HashedSeq_obj(void);
CPyThreadLocal faster_async_lru_____hash___3__HashedSeq_objObject *__hash___3__HashedSeq_obj_free_instance;
char CPyDef__CacheItem___cancel(PyObject *cpy_r_self);
PyObject *CPyPy__CacheItem___cancel(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapper_____init__(PyObject *cpy_r_self, PyObject *cpy_r_fn, PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl);
PyObject *CPyPy__LRUCacheWrapper_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef__LRUCacheWrapper___cache_invalidate(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy__LRUCacheWrapper___cache_invalidate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapper___cache_clear(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapper___cache_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapper_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapper_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapper___cache_close(PyObject *cpy_r_self, char cpy_r_wait);
PyObject *CPyPy__LRUCacheWrapper___cache_close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapper___cache_info(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapper___cache_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapper___cache_parameters(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapper___cache_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapper____cache_hit(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy__LRUCacheWrapper____cache_hit(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapper____cache_miss(PyObject *cpy_r_self, PyObject *cpy_r_key);
PyObject *CPyPy__LRUCacheWrapper____cache_miss(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapper____task_done_callback(PyObject *cpy_r_self, PyObject *cpy_r_fut, PyObject *cpy_r_key, PyObject *cpy_r_task);
PyObject *CPyPy__LRUCacheWrapper____task_done_callback(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapper_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapper_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapper_____call__(PyObject *cpy_r_self, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs);
PyObject *CPyPy__LRUCacheWrapper_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapper_____get__(PyObject *cpy_r_self, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy__LRUCacheWrapper_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapperInstanceMethod_____init__(PyObject *cpy_r_self, PyObject *cpy_r_wrapper, PyObject *cpy_r_instance);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod_____init__(PyObject *self, PyObject *args, PyObject *kw);
char CPyDef__LRUCacheWrapperInstanceMethod___cache_invalidate(PyObject *cpy_r_self, PyObject *cpy_r_args, PyObject *cpy_r_kwargs);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_invalidate(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef__LRUCacheWrapperInstanceMethod___cache_clear(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_clear(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy_cache_close__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_close(PyObject *cpy_r_self, char cpy_r_cancel, char cpy_r_return_exceptions);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_info(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_info(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapperInstanceMethod___cache_parameters(PyObject *cpy_r_self);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod___cache_parameters(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____mypyc_generator_helper__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback, PyObject *cpy_r_arg, PyObject **cpy_r_stop_iter_ptr);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____next__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___send(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_arg);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___send(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____iter__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_type, PyObject *cpy_r_value, PyObject *cpy_r_traceback);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___throw(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen___close(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen___close(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___call___3__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *cpy_r___mypyc_self__);
PyObject *CPyPy___call___3__LRUCacheWrapperInstanceMethod_gen_____await__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__LRUCacheWrapperInstanceMethod_____call__(PyObject *cpy_r_self, PyObject *cpy_r_fn_args, PyObject *cpy_r_fn_kwargs);
PyObject *CPyPy__LRUCacheWrapperInstanceMethod_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_wrapper__make_wrapper_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy_wrapper__make_wrapper_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_wrapper__make_wrapper_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_fn);
PyObject *CPyPy_wrapper__make_wrapper_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__make_wrapper(PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl);
PyObject *CPyPy__make_wrapper(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef_alru_cache(PyObject *cpy_r_maxsize, char cpy_r_typed, PyObject *cpy_r_ttl);
PyObject *CPyPy_alru_cache(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___init___3__HashedSeq_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy___init___3__HashedSeq_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___init___3__HashedSeq_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self, PyObject *cpy_r_tup);
PyObject *CPyPy___init___3__HashedSeq_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef___hash___3__HashedSeq_obj_____get__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_instance, PyObject *cpy_r_owner);
PyObject *CPyPy___hash___3__HashedSeq_obj_____get__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
CPyTagged CPyDef___hash___3__HashedSeq_obj_____call__(PyObject *cpy_r___mypyc_self__, PyObject *cpy_r_self);
PyObject *CPyPy___hash___3__HashedSeq_obj_____call__(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
PyObject *CPyDef__make_key(PyObject *cpy_r_args, PyObject *cpy_r_kwds, char cpy_r_typed);
PyObject *CPyPy__make_key(PyObject *self, PyObject *const *args, size_t nargs, PyObject *kwnames);
char CPyDef___top_level__(void);
