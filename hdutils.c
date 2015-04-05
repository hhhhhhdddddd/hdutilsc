#include <stdio.h>

void noUnusedVarWarning(void) {}

void printSectionSeparator(void) {
    printf("%s\n", "--------------------");
}

void printArrayOfStr(char **strArr) {
    for( ; *strArr != NULL; strArr += 1) {
        printf("%s\n", *strArr);
    }
}