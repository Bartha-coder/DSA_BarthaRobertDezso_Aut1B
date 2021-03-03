//
// Created by Bartha on 2021. 03. 03..
//

#include "forditott.h"

int forditott(int n)
{
    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%i",&a[i]);
    }
    for (int i = n-1; i >= 0; --i) {
        printf("%i ",a[i]);
    }
}