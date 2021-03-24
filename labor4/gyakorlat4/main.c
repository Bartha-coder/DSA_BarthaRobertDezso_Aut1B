#include <stdio.h>
#include "functions.h"

int main() {
    int *array, dimension,element;

    printf ("A keresett elem");
    scanf ("%i", &element);
    readArray("be.txt", &array, &dimension);
    printf("%i", dimension);//hiba
    printArray(array, dimension);
    printf ("\n");
    printf("%i", findElement(array,dimension,element));

    return 0;
}