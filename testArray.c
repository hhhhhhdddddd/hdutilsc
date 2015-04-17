#include <stdio.h>
#include "hdarray.h"
#include "hdutils.h"

#define SIZE 10
#define ROW 3
#define COLUMN 4

int main(void) {
    int *array = createIntFilledArray(SIZE);
    printIntArray(array, SIZE);
    destroyIntFilledArray(array);

    printTestSectionSeparator();
    int **matrix = createIntFilledSMatrix(ROW, COLUMN);
    printIntFilledSMatrix(matrix, ROW, COLUMN);

    return 0;
}
