#include <stdio.h>

void printArrayOfStr(char **strArr) {
    for( ; *strArr != NULL; strArr += 1) {
        printf("%s\n", *strArr);
    }
}
