#ifndef HASHFUNCTION1_H
#define HASHFUNCTION1_H
#include "BloomFilters.h"
#include<bits/stdc++.h>
using namespace std;

//First Hash Function 
class HashFunction1 : public BloomFilters{

	public:

		int hashFunction1(int sizeOfBoolArray, string word){

			long long hash = 1;
			for(int i = 0; i < words->size(); i++){

				hash = hash + pow(16, i)*word[i];
				hash %= sizeOfBoolArray;
			}

			return hash%sizeOfBoolArray;
		}

};
#endif