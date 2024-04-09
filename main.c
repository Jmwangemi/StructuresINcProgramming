#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 13;
    struct Bread breadArray[arraySize];

    populateBreadStore(breadArray, arraySize);

  
    printBreadStore(breadArray, arraySize);

    return 0;
}

