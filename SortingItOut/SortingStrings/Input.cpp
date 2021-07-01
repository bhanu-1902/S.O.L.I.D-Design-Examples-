#include<bits/stdc++.h>
using namespace std;

class Input{
	
	string inputString;
	
	public:
		
		void userInput(string &message){
			
			while(getline(cin, inputString)){			
				
				if(inputString == "0")					//accept input until user enters zero
					break;
				
				message += inputString;					//combine the multilinr strings into one string

				cout<<"Press 0 to exit.."<<endl;
			}
		}
};
