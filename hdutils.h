#ifndef HDUTILS_H
#define HDUTILS_H

#include <stdio.h>
#include <stdlib.h>

void *getMemory(int size);

void printTestSectionSeparator(void);

void timeIntToDoubleFunc(char name[], double (*f)(int), int arg, int nexec);

#endif