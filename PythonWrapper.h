#ifndef PYTHON_WRAPPER_H
#define PYTHON_WRAPPER_H

#include <Python.h>
#include <iostream>
#include <Windows.h>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

void CallProcedure(string pName);

int callIntFunc(string proc, string param);

int callIntFunc(string proc, int param);

void printHistogram();

#endif