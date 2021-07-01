#ifndef HASHFUNCTION2_H
#define HASHFUNCTION2_H
#include "BloomFilters.h"
#include<bits/stdc++.h>
using namespace std;

//Second Hash Function
class HashFunction2 : private BloomFilters{

	public:

		int hashFunction2(int sizeOfBoolArray, string word){

			long long hash = 0;
			for(int i = 0; i < words->size(); i++){

				hash = hash + (int)word[i];
				hash %= sizeOfBoolArray;
			}

			return hash;
		}

};
#endif