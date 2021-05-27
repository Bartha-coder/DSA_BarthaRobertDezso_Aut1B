//
// Created by Bartha on 2021. 05. 20..
//

#ifndef JOGYAKORLAT13_HASITO_TABLA_H
#define JOGYAKORLAT13_HASITO_TABLA_H
int *create(int m);
int keres(int k, int *t, int m);//az k elem pozícióját adja vissza az m elemű t tömbben
void beszur(int k, int *t, int m); // k kulcsú elemet beszúr a t tömbbe, melynek m eleme van
///void torles(int k, int *t, in m); //a k kitörlése a t tömbből, melynek m eleme van
void print(int *t,int m);

#endif //JOGYAKORLAT13_HASITO_TABLA_H
