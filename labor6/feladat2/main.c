#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "functions.h"


void printStack(NodeType *pType);

int main() {
    NodeType* myStack = NULL;
    int option;
    bool repeat = true;
    while(repeat) {
        printf("Lehetseges muveletek:\n"
               "0. Kilepes\n"
               "1. Elem hozzaadasa a veremhez\n"
               "2. Verem kiiratasa\n");
        printf("Valassz opciot: ");
        scanf("%i", &option);
        switch (option) {
            case 0:
                printf("Kilepes...");
                repeat = false;
                break;
            case 1: {
                ///push
                printf("Adj meg egy erteket: ");
                int item;
                scanf("%i", &item);
                push(&myStack,item);
                break;
            }
            case 2: {
                ///print stack
                printf("A verem tartalma: ");
                printStack(myStack);
                break;
            }
            default:
                printf("Ismeretlen opcio\n");
                break;
        }
    }
    return 0;
}


