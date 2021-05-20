#include <stdio.h>
#include <malloc.h>
#include "binaris.h"

int main() {

    root *tree;
    tree = NULL;
    FILE * f = fopen("binariss.txt","r");
    //állománykezelés
    int x;
    while(fscanf(f,"%d", &x)!=EOF)
    {
        insert(&tree, x);
    }
    printf("Inorder: ");
    inorder(tree);
    printf("\nPreorder: ");
     preorder(tree);
     printf("\nPostorder: ");
     postorder(tree);
     int y = 3;
     root *facska;
     facska = (root*)malloc(sizeof(root));
     if(!facska)
     {
         printf("Sikertelen lefoglalas");
         return 0;
     }

    printf("\n");
     printf("\nA keresett elem: ");
     printf("%i",keres(tree,1));


    printf("\nAz elemek szama: ");
    printf("%i",elemszam(tree));

    printf("\n");
    printf("%i",beszur(tree,3));

    printf("\n");
    printf("%i",Legkisebb(tree));

    printf("\n");
    printf("%i",Legnagyobb(tree));

    return 0;

}
