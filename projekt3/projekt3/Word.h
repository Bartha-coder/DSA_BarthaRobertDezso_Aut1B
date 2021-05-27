//
// Created by Bartha on 2021. 05. 27..
//

#ifndef PROJEKT3_WORD_H
#define PROJEKT3_WORD_H


typedef struct {
    char* englishWord;
}Word;

///uj elem letrehozasa
Word newWord(char* word);

///osszehasonlitas
int compareToWords(Word word1, Word word2);

///kiiratas
void printWord(Word word);


#endif //PROJEKT3_WORD_H
