#include <service>
#include <cstdio>
#include <Python.h>


void Service::start(const std::string& args)
{
  printf("Hello world - OS included!\n");
  printf("Args = %s\n", args.c_str());


  // https://docs.python.org/3.6/extending/embedding.html#very-high-level-embedding
  Py_Initialize();
  PyRun_SimpleString("from time import time,ctime\n"
                       "print('Today is', ctime(time()))\n");
}
