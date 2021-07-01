#ifndef BLOOMFILTERS_H
#define BLOOMFILTERS_H
#include<bits/stdc++.h>
using namespace std;

//Base class (Driver Code)
class BloomFilters{

    public:
        bool *hashTable;
        string *words;

        BloomFilters() = default;

        BloomFilters(int sizeOfBoolArray,  int sizeOfWordArray){

            hashTable = new bool [sizeOfBoolArray];
            hashTable[sizeOfBoolArray] = {false};

            words = new string [sizeOfWordArray];
            for(int i = 0; i < sizeOfWordArray; i++){
                cin>>words[i];
            }
        }
    
};
#endif