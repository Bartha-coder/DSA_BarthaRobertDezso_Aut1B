#include <stdio.h>
#include "function.h"

int main() {

    root *tree;
    //tree = create(10);
    tree = NULL;
    FILE * f = fopen("fak.txt","r");
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
/*
    printf("\nAdott ertektol kezdodo fa: ");
    preorder(facska);
*/
    return 0;

}

