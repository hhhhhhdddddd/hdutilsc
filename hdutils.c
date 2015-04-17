#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "hdutils.h"

void *getMemory(int size) {
    void *newMem = malloc(size);
    if (newMem == NULL) {
        printf("Out of memory!\n");
        exit(1);
    }
    return newMem;
}

void printTestSectionSeparator() {
    printf("\n--------------------\n");
}

void timeIntToDoubleFunc(char name[], double (*f)(int), int arg, int nexec) {
    clock_t t0, t1;
    int i;
    double result;

    t0 = clock();
    for (i = 0; i < nexec; i++) result = f(arg);
    t1 = clock();
    printf("%-10s: %d! = %1.0f    time = %7.2f s\n",
        name, arg, result, (t1 - t0) / (float) CLK_TCK);
}
