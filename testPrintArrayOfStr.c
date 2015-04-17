#include <stdio.h>
#include "hdutils.h"
#include "hdarray.h"

int main(void) {
    char *pHello = "hello";
    char *pWorld = "world";
    char *pToto = "toto";
    char *pCharArr[] = { pHello, pWorld, pToto, NULL };
    char **strArr = pCharArr;

    printf("%s\n", strArr[0]);
    printTestSectionSeparator();
    printf("%s\n", *strArr);
    printTestSectionSeparator();
    printf("%s\n", *(strArr+1));
    printTestSectionSeparator();
    printArrayOfStr( strArr );

    return 0;
}

