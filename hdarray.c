#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "hdarray.h"
#include "hdutils.h"

/*Tableau*/

int *createIntFilledArray(int size) {
    int *array, i;

    srand((unsigned int) time(NULL));
    array = (int *) getMemory(size * sizeof(int));
    for(i = 0; i < size; i++) {
        array[i] = (rand() % (size * 2)) + i;
    }
    return array;
}

void destroyIntFilledArray(int *array) {
    free(array);
}

void printIntArray(int *array, int size) {
    int i;
    printf("{");
    for(i = 0; i < size; i++) {
        printf(" %i", array[i]);
    }
    printf(" }");
}

/*Matrice*/

int **createIntFilledSMatrix(int row, int column) {
    int **matrix, i;
    matrix = (int **) getMemory(row * sizeof(int *));
    for(i = 0; i < row; i++) {
        matrix[i] = createIntFilledArray(column);
    }
    return matrix;
}

void destroyIntFilledSMatrix(int *array) {
    /*todo*/
}

void printIntFilledSMatrix(int **matrix, int row, int column) {
    int i;
    printf("{\n");
    for(i = 0; i < row; i++) {
        printf("\t");
        printIntArray(matrix[i], column);
        printf("\n");
    }
    printf("}");
}

/*String*/

void printArrayOfStr(char **strArr) {
    for( ; *strArr != NULL; strArr += 1) {
        printf("%s\n", *strArr);
    }
}
