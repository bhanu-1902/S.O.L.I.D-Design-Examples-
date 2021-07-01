#include "BloomFilters.h"
#include "HashFunction1.h"
#include "HashFunction2.h"
#include "Searching.cpp"
#include<bits/stdc++.h>
using namespace std;


class Insert : public BloomFilters{

	HashFunction1 hf1;
	HashFunction2 hf2;
	Search sw;

	public:
		//Insert the given word in Hash Table
		void insertWord(bool *b, int sizeOfBoolArray, string word){

			if(sw.searchWord(b, sizeOfBoolArray, word)){
				cout<<word<<" maybe be present\n";
			}

			else{

				int id1 = hf1.hashFunction1(sizeOfBoolArray, word);
				int id2 = hf2.hashFunction2(sizeOfBoolArray, word);

				b[id1] = true;
				b[id2] = true;

				cout<<word<<" has been inserted"<<endl;
			}

		}
};