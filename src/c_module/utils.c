#include <Python.h>
#include "include/utils.h"
// s = str , i = int, p = bool
int extract_ext4(extract_args_struct args);
static PyObject* ext4_extractor(PyObject *self, PyObject* args, PyObject* kwargs) {

    char *config_dir, *mountpoint, *filename, *directory;
    char *image_type, *part_name;
    int blocksize, android_configure_only;
    char *kwlist[] = {
        "config_dir", "mountpoint", "filename", "directory", "blocksize", "image_type", "android_configure_only", "part_name",NULL
    };
    extract_args_struct arguments;
    if (!PyArg_ParseTupleAndKeywords(args,kwargs, "ssssisps",kwlist ,&config_dir, &mountpoint, &filename, &directory, &blocksize, &image_type, &android_configure_only, &part_name)) {
        return NULL;
    }
    arguments.config_dir = config_dir;
    arguments.mountpoint = mountpoint;
    arguments.filename = filename;
    arguments.directory = directory;
    arguments.image_type = image_type;
    arguments.blocksize = blocksize ?:0;
    arguments.android_configure_only = android_configure_only;
    arguments.part_name = part_name;
    return Py_BuildValue("i", extract_ext4(arguments));
}


static PyMethodDef Methods[] = {

    {"ext4_extractor", (PyCFunction)ext4_extractor, METH_VARARGS | METH_KEYWORDS, "Extract ext4 images"},

    {NULL, NULL, 0, NULL}

};


static PyModuleDef libutils = {
    PyModuleDef_HEAD_INIT,
    "libutils",
    "MIO-KITCHEN C Module.",
    -1,
    Methods
};


PyMODINIT_FUNC PyInit_libutils(void) {return PyModule_Create(&libutils);}