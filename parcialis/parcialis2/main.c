#include <stdio.h>
#include "dinamikus sor.h"

int main() {
    F* tombF = readArrayFromFileF("in.txt");

    N_Type* front;
    N_Type* last;

    front = last = NULL;

    readFromFileQueue("in.txt", (N_Type *) &front, (N_Type *) &last);

    printF(tombF);
    printf("\n");
    return 0;
}
