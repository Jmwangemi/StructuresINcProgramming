#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateBreadStore(struct Bread *breadArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Bread %d:\n", i + 1);
        printf("Date of Packaging: ");
        scanf("%s", breadArray[i].dateOfPkg); // Assuming dateOfPkg does not contain spaces
        printf("Weight (in grams): ");
        scanf("%f", &breadArray[i].weight);
        printf("Color: ");
        scanf("%s", breadArray[i].color); // Assuming color does not contain spaces
        printf("Price: ");
        scanf("%f", &breadArray[i].price);
    }
}

// Function to print the structure elements
void printBreadStore(struct Bread *breadArray, int arraySize) {
    printf("\nBread Store Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Bread %d:\n", i + 1);
        printf("Date of Packaging: %s\n", breadArray[i].dateOfPkg);
        printf("Weight: %.1f grams\n", breadArray[i].weight);
        printf("Color: %s\n", breadArray[i].color);
        printf("Price: $%.2f\n", breadArray[i].price);
    }
}

