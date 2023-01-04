// PythonHost.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#ifdef _DEBUG
#undef _DEBUG
#include <python.h>
#define _DEBUG
#else
#include <python.h>
#endif
// https://docs.python.org/3/extending/embedding.html

int main(int argc, char* argv[])
{
    const char* turd = "turd"; 

    wchar_t* program = Py_DecodeLocale(turd, NULL);
    if (program == NULL) {
        fprintf(stderr, "Fatal error: cannot decode argv[0]\n");
        exit(1);
    }
    Py_SetProgramName(program);  /* optional but recommended */
    Py_Initialize();
    PyRun_SimpleString("from time import time,ctime\n"
        "print('Today is', ctime(time()))\n");
    if (Py_FinalizeEx() < 0) {
        exit(120);
    }
    PyMem_RawFree(program);
    return 0;
}
