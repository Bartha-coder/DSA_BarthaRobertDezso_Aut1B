//
// Created by Bartha on 2021. 05. 27..
//

#include <malloc.h>
#include <stdio.h>
#include <strings.h>
#include "Word.h"


Word newWord(char* word) {
    Word newWord;
    newWord.englishWord = (char*)calloc(strlen(word)+1, sizeof(char));
    if(!newWord.englishWord) {
        printf("Error3\n");
        exit(1);
    }
    strcpy(newWord.englishWord, word);
    return newWord;
}

int compareToWords(Word word1, Word word2) {
    return strcmp(word1.englishWord, word2.englishWord);
}

void printWord(Word word) {
    printf("%s\n", word.englishWord);
}