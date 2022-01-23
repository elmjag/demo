#include <stdio.h>
#define PY_SSIZE_T_CLEAN
#include <Python.h>

PyObject *
demo_foo(PyObject *self, PyObject *args)
{
    printf("Hello from demo.foo() fuction.\n");

    Py_RETURN_NONE;
}

static PyMethodDef VmMethods[] =
{
    {"foo", demo_foo, METH_VARARGS, "test"}, /* adds demo.foo() */
    {NULL,  NULL,     0,            NULL}    /*    Sentinel     */
};

static struct PyModuleDef demo_module =
{
    PyModuleDef_HEAD_INIT,
    "demo",      /* name of module */
    NULL,        /* module documentation, may be NULL */
    -1,          /* size of per-interpreter state of the module,
                    or -1 if the module keeps state in global variables. */
    VmMethods
};

PyMODINIT_FUNC
PyInit_demo(void)
{
    return PyModule_Create(&demo_module);
}
