#ifndef SORTINGBALLS_H
#define SORTINGBALLS_H
#include<bits/stdc++.h>
using namespace std;

//Abstract base class
class SortingBalls{

    public:
        virtual void sortNumbers(vector<int> &rackBalls, int rackBallId) = 0; //
};
#endif
