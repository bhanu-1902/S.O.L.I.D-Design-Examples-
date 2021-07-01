#include<bits/stdc++.h>
#include "Insertion.cpp"
using namespace std;

int main(){

	//Take input from a given file and storing in an ouput file
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int sizeOfBoolArray = 512;
    int sizeOfWordArray = 256;

    BloomFilters obj(sizeOfBoolArray, sizeOfWordArray);

    Insert in;

    for(int i = 0; i < sizeOfWordArray; i++){
        in.insertWord(obj.hashTable, sizeOfBoolArray, obj.words[i]);
    }
}
