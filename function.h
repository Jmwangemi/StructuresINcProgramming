#ifndef FUNCTION_H
#define FUNCTION_H

struct Bread {
    char dateOfPkg[20];
    float weight;
    char color[20];
    float price;
};

void populateBreadStore(struct Bread *breadArray, int arraySize);
void printBreadStore(struct Bread *breadArray, int arraySize);

#endif

