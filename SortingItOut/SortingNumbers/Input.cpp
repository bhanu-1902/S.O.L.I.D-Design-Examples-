#include<bits/stdc++.h>
using namespace std;

class Input{

    public:
        int rackBallId;
		//User Input
        int getInput(){
			
			cout<<"Enter the rackball number drawn : ";
            cin>>rackBallId;
            return rackBallId;
        }
};
