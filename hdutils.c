#include <stdio.h>
#include <stdlib.h>
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
