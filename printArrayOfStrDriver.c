#include <stdio.h>
#include "hdutils.h"

int main(void) {
    char *pHello = "hello";
    char *pWorld = "world";
    char *pToto = "toto";
    char *pCharArr[] = { pHello, pWorld, pToto, NULL };
    char **strArr = pCharArr;

    printf("%s\n", strArr[0]);
    printSectionSeparator();
    printf("%s\n", *strArr);
    printSectionSeparator();
    printf("%s\n", *(strArr+1));
    printSectionSeparator();
    printArrayOfStr( strArr );
    printSectionSeparator();

    return 0;
}

