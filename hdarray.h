#ifndef HDARRAY_H
#define HDARRAY_H

/*Tableau*/
int *createIntFilledArray(int size);
void destroyIntFilledArray(int *);
void printIntArray(int *array, int size);

/*Matrice*/
int **createIntFilledSMatrix(int row, int column);
void printIntFilledSMatrix(int **matrix, int row, int column);

/*String*/
void printArrayOfStr(char **strArr);

#endif