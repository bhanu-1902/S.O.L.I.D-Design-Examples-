#include<bits/stdc++.h>
using namespace std;

class Output{

    public:
    	//Output the current state
        void show(vector<int> rackBalls){

            for(int i = 0; i < rackBalls.size(); i++)
                cout<<rackBalls[i]<<" ";
            cout<<endl;
        }
};
