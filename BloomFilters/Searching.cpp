#include "BloomFilters.h"
#include "HashFunction1.h"
#include "HashFunction2.h"
#include<bits/stdc++.h>
using namespace std;

class Search : public BloomFilters{

	HashFunction1 hf1;
	HashFunction2 hf2;

	public:
		//Search if the queried word is present
		bool searchWord(bool *b, int sizeOfBoolArray, string word){

				int id1 = hf1.hashFunction1(sizeOfBoolArray, word);
				int id2 = hf2.hashFunction2(sizeOfBoolArray, word);

				if(b[id1] && b[id2]) 
					return true;
				else
					return false;

		}
};