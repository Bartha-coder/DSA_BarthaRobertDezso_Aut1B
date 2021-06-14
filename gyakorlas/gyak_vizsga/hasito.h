//
// Created by Bartha on 2021. 06. 13..
//

#ifndef GYAK_VIZSGA_HASITO_H
#define GYAK_VIZSGA_HASITO_H

int *create(int m);
int keres(int k, int *t, int m);//az k elem pozícióját adja vissza az m elemű t tömbben
void beszur(int k, int *t, int m); // k kulcsú elemet beszúr a t tömbbe, melynek m eleme van
void print(int *t,int m);//kiirja az elemeket
void torles(int k, int *t, int m); //a k kitörlése a t tömbből, melynek m eleme van



#endif //GYAK_VIZSGA_HASITO_H
