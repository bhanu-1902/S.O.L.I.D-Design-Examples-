#include<bits/stdc++.h>
using namespace std;

class RemoveSpaces{
	
	public:
	
		
		void removeWhiteSpaces(string &message){
			
			int charachterCount = 0; 	//count of only characters and not spaces
				
			for(int i = 0; i < message.length(); i++){
				
				if(message[i] != ' '){
					
					message[charachterCount++] = message[i];	//If current character is not space, put it at index charachterCount++
				}
			}
			
			message[charachterCount] = '\0';	//Null character to mark end of the string
		}
};
