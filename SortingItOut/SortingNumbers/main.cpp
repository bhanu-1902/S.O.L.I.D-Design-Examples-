#include<bits/stdc++.h>
#include "SortNumbers.cpp"
#include "Input.cpp"
#include "Output.cpp"
using namespace std;

int main(){

    vector<int> rackBalls = {};

    SortNumbers obj;			

    Input in;

    Output out;
    
    int rackBallId = in.getInput();
    
    while(rackBallId){					//Take input until user enters 0 or a character
    	
    	obj.sortNumbers(rackBalls, rackBallId);
    	out.show(rackBalls);
    	rackBallId = in.getInput();		//Update the value of new rackball
	}  
    
    out.show(rackBalls);
}	
