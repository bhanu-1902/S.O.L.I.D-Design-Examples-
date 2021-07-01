#ifndef SORTINGCHARACTERS_H
#define SORTINGCHARACHTERS_H
#include<bits/stdc++.h>
using namespace std;

//Abstract base class
class SortingCharacters{

    public:
        virtual void sortString(string &message) = 0;  //Pure virtual function

};
#endif
