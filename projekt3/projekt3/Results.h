//
// Created by Bartha on 2021. 05. 27..
//



#ifndef PROJEKT3_RESULTS_H
#define PROJEKT3_RESULTS_H


///az eredmenyek tarolasara alkalmas
///fontosabb strukturak itt talalhatoak

///milyen tipusu adatszerkezeteket hasznalunk
enum DSType {
    ArrayType = 0,
    ListType = 1,
    BinaryTreeType = 2,
    HeapType = 3,
    HashTableType = 4,
};

///milyen esetekre vizsgaljuk
enum CaseType {
    BestCase,
    WorstCase,
    AvgCase
};

///milyen muveletekre hasznaljuk
enum Operation {
    Search,
    Remove,
    Access,
    Insert
};

typedef struct  {

    ///egy esetet jellemeznek ezek
    ///legjobb-legrosszabb-stb
    enum CaseType caseType;

    double timeTakenDuringAddition;
    double timeTakenDuringSearch;
    double timeTakenDuringRemove;
    double timeTakenDuringAccess;

}Case;

typedef struct {

    ///3 esetben nezzuk meg
    enum DSType type;
    Case cases[3];
    int numberOfResults;

}DataStructureComplexity;

typedef struct {
    DataStructureComplexity *results;
    int numberOfResults;
}Results;


///
void addResult(enum DSType type, enum CaseType caseType, enum Operation operation, double timeTaken, Results *results);

///
Results* initializeResults();

///
void initializeResultsFor(Results* results, enum DSType type);

///
char*  getCaseTypeByIndex(int index);

///
char *getDataStructureTypeByIndex(int index);

///
void printAllResults(Results* results);


#endif //PROJEKT3_RESULTS_H
