#include<bits/stdc++.h>
#include "BinarySearchIterative.cpp"
#include "BinarySearchRecursive.cpp"
using namespace std;

int main(){
	
	int sizeOfArray = 5;
	int sortedArray[] = {1, 2, 3, 4, 5};

	BinarySearchIterative iterative;
	cout<<"Element is at index : "<<iterative.search(4, 0, sizeOfArray - 1, sortedArray)<<endl;

	BinarySearchRecursive recursive;
	cout<<"Element is at index : "<<recursive.search(2, 0, sizeOfArray - 1, sortedArray)<<endl;
}
