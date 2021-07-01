#include<bits/stdc++.h>
using namespace std;

class RemovePunctuations{

    public:
        void removePunctuations(string &message){

            for(int i = 0; i < message.length(); i++){

                if(ispunct(message[i])){                //If character is a punctuation, erase it

                    message.erase(i--, 1);
                }
            }
        }
};