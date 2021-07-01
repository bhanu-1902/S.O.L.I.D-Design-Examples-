#include<bits/stdc++.h>
using namespace std;

class LowerCase{

    public:

        void convertToLowerCase(string &message){

            transform(message.begin(), message.end(), message.begin(), ::tolower);      //Convert to lowercase
        }
};