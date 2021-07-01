#include<bits/stdc++.h>
#include "SortingBalls.h"
using namespace std;

class SortNumbers : public SortingBalls{

    public:
        
        void sortNumbers(vector<int> &rackBalls, int rackBallId){
			
			int flag = 1;								//For the largest element
			
            for(int i = 0; i < rackBalls.size(); i++){

                if(rackBalls[i] > rackBallId){

                    rackBalls.insert(rackBalls.begin() + i, rackBallId);   //Insert the new element in current elements position
                    flag = 0;											   //To notify that new element has already been entered	
                    break;
                }
            }
            
            if(flag) rackBalls.push_back(rackBallId);					   //Insert the largest element at the end of array
        }
};
