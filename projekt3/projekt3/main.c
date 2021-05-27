#include <stdio.h>
#include <aclapi.h>
#include "Array.h"
#include "Results.h"
#include "Word.h"

double PCFreq = 0.0;
__int64 CounterStart = 0;

void StartCounter()
{
    LARGE_INTEGER li;
    if(!QueryPerformanceFrequency(&li))
        printf("QueryPerformanceFrequency failed!\n");

    PCFreq = (double)(li.QuadPart)/1000.0;

    QueryPerformanceCounter(&li);
    CounterStart = li.QuadPart;
}

double GetCounter()
{
    LARGE_INTEGER li;
    QueryPerformanceCounter(&li);
    return (double)(li.QuadPart-CounterStart)/PCFreq;
}


const int adatokSzama = 12;

///globalisan kezeles
///Tomb
Array* array;

///Lista

///BinarisKeresoFa

///Kupac

///HasitoTabla


///eredmenyek elmentese
Results *results;


///hozzaadas komplexitasanak a vizsgalata
void measureAdditionComplexity();

///adatszerkezet letrehozasa
void createDataStructures();

///kereses komplexitasanak a vizsgalata
void measureSearchComplexity();

///torlesnek komplexitasanak a vizsgalata
void measureRemoveComplexity();

///az eleresnek a komplexitasanak a vizsgalata
void measureAccessComplexity();

///keresi meg es terit vissza egy atlagos idot amennyibe telt ez a muvelet
double calculateAverageTime(enum DSType type, Word word, enum Operation operation, int index);

///felszabaditas
void destroyDataStructures();

///egy adott fajla az adatszerkezet mukedeset megnezni
void be(const char *fileName);



int main() {

    int bemenetiFajlok = 2;
    const char* fileNames[] = {
            "bemenetek.txt",
            "bementek2.txt"};

    for(int i = 0; i < bemenetiFajlok; ++i) {
        be(fileNames[i]);
    }

    return 0;
}

void be(const char *fileName) {
    FILE* file = freopen(fileName, "r", stdin);
    if(!file) {
        printf("Error \n");
        exit(1);
    }


    results = initializeResults();
    createDataStructures();
    measureAdditionComplexity();
    measureSearchComplexity();
    measureRemoveComplexity();
    measureAccessComplexity();



    printf("Results for input file: %s\n", fileName);
    printf("\nAz elemek szama:  %i",getNumberOfItemsFromArray(array));
    printf("\n");
    printAllItemsOfArray(array);

    printAllResults(results);

    destroyDataStructures();

    fclose(file);
}




void createDataStructures() {
    ///Create Array
    array = createArray(adatokSzama);
    initializeResultsFor(results, ArrayType);

    ///Create List

    ///Create BinaryTree

    ///Create Heap

    ///Create HashTable

}

void destroyDataStructures() {
    ///Destroy Array
    destroyArray(&array);

    ///Destroy List

    ///Destroy BinaryTree

    ///Destroy Heap

    ///Destroy HashTable
}


void measureAdditionComplexity() {

    ///useful variables
    char item[30];
    double avgTimeTaken = 0;
    double result;


    while(scanf("%s", item) == 1) {
        ///add item to Array
        StartCounter();
        addItemToArray(newWord(item), array);
        result = GetCounter();
        avgTimeTaken += result;

        ///add item to List

        ///add item to BinaryTree

        ///add item to Heap

        ///add item to HashTable

    }

    //printf("Array: AVG time taken by addition is : %.10f\n", avgTimeTaken/numberOfWords);
    addResult(ArrayType, BestCase, Insert, result, results);
    addResult(ArrayType, WorstCase, Insert, result, results);
    addResult(ArrayType, AvgCase, Insert, result, results);

}

void measureAccessComplexity() {
    double result;

    ///access in Array
    int bestCaseIndex = 0;
    int worstCaseIndex = array->numberOfItems-1;

    result = calculateAverageTime(ArrayType, array->words[bestCaseIndex], Access, 0);
    //printf("Array: avg time taken by access (BEST CASE) is : %.10f\n", result);
    addResult(ArrayType, BestCase, Access, result, results);

    result = calculateAverageTime(ArrayType, array->words[worstCaseIndex], Access, worstCaseIndex);
    //printf("Array: avg time taken by access (WORST CASE) is : %.10f\n", result);
    addResult(ArrayType, WorstCase, Access, result, results);

    int middleIndex =  array->numberOfItems/2;
    result = calculateAverageTime(ArrayType, array->words[middleIndex], Access, middleIndex);
    addResult(ArrayType, AvgCase, Access, result, results);
    //printf("Array: avg time taken by access (AVG CASE) is : %.10f\n", result);

}

void measureRemoveComplexity() {
    double result;

    ///remove from Array
    Word firstWord = array->words[0];
    Word lastWord = array->words[array->numberOfItems-1];

    result = calculateAverageTime(ArrayType, firstWord, Remove, 0);
    //printf("Array: avg time taken by remove (BEST CASE) is : %.10f\n", result);
    addResult(ArrayType, BestCase, Remove, result, results);

    result = calculateAverageTime(ArrayType, lastWord, Remove, array->numberOfItems-1);
    //printf("Array: avg time taken by remove (WORST CASE) is : %.10f\n", result);
    addResult(ArrayType, WorstCase, Remove, result, results);

    int middleIndex =  array->numberOfItems/2;
    result = calculateAverageTime(ArrayType, array->words[middleIndex], Remove, middleIndex);
    //printf("Array: avg time taken by remove (AVG CASE) is : %.10f\n", result);
    addResult(ArrayType, AvgCase, Remove, result, results);
}

void measureSearchComplexity() {
    double result;

    ///search in Array
    Word firstWord = array->words[0];
    Word lastWord = array->words[array->numberOfItems-1];

    result = calculateAverageTime(ArrayType, firstWord, Search, 0);
    //printf("Array: avg time taken by search (BEST CASE) is : %.10f\n", result);
    addResult(ArrayType, BestCase, Search, result, results);

    result = calculateAverageTime(ArrayType, lastWord, Search, array->numberOfItems-1);
    //printf("Array: avg time taken by search (WORST CASE) is : %.10f\n", result);
    addResult(ArrayType, WorstCase, Search, result, results);

    int middleIndex =  array->numberOfItems/2;
    result = calculateAverageTime(ArrayType, array->words[middleIndex], Search, middleIndex);
    addResult(ArrayType, AvgCase, Search, result, results);
    //printf("Array: avg time taken by search (AVG CASE) is : %.10f\n", result);
}

double calculateAverageTime(enum DSType type, Word word, enum Operation operation, int index) {

    int counter = 11;
    double  avgResult = 0;
    switch (type) {
        case ArrayType:
        {
            switch (operation) {
                case Search:
                {
                    double currentResult;
                    for(int i = 0; i < counter; ++i) {
                        StartCounter();
                        findItemInArray(word, array);
                        currentResult = GetCounter();
                        if(i > 0) {
                            avgResult += currentResult;
                        }
                    }
                    break;
                }
                case Remove:
                {
                    double currentResult;
                    for(int i = 0; i < counter; ++i) {
                        StartCounter();
                        removeItemFromArray(word, array);
                        currentResult = GetCounter();
                        if(i > 0) {
                            avgResult += currentResult;
                        }
                    }
                    break;
                }
                case Access:
                {
                    double currentResult;
                    for(int i = 0; i < counter; ++i) {
                        StartCounter();
                        getNthItemFromArray(index, array);
                        currentResult = GetCounter();
                        if(i > 0) {
                            avgResult += currentResult;
                        }
                    }
                    break;
                }
                default:
                    printf("Invalid operation\n");
                    break;
            }
            break;
        }
        case ListType: {
            ///TODO
            break;
        }
        case BinaryTreeType: {
            ///TODO
            break;
        }
        case HeapType: {
            ///TODO
            break;
        }
        case HashTableType: {
            ///TODO
            break;
        }
        default:
            printf("Invalid data structure\n");
            break;
    }
    return avgResult / (counter-1);

}