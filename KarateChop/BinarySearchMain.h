#ifndef BINARYSEARCHMAIN_H    		// To avoid redefinition of class
#define BINARYSEARCHMAIN_H
#include<bits/stdc++.h>
using namespace std;

//An abstract Base Class
class BinarySearchMain{
	
	public:
		virtual int search(int key,  int start, int end, int sortedArray[]) = 0;	//pure virtual function
		
};

#endif