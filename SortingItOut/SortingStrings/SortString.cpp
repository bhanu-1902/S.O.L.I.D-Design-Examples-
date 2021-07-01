#include<bits/stdc++.h>
#include "SortingCharacters.h"
using namespace std;

class SortString : public SortingCharacters{
	
	public:
	
		void sortString(string &message){
			
			map<char, int> mp;						

			for(int i = 0; i < message.length(); i++)		//Map each character to the number of times it has appeared in the string
				mp[message[i]]++;							//Characters will be stored in sorted order

			message.clear();								//Clear the original string

			for(auto i : mp){

				message += string(i.second, i.first);		//Combine each character with its frequency and add it to original string
			}
		}
};
