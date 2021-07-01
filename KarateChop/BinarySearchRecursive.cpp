#include "BinarySearchMain.h"
#include<bits/stdc++.h>
using namespace std;

class BinarySearchRecursive : public BinarySearchMain {

    public:
	//Overridden method
    clock_t begin = clock();
    int search(int key, int start, int end, int sortedArray[]){

        if (start <= end) { 
            
            int mid = start + (end - start) / 2;  //Middle element
  
        
        if (sortedArray[mid] == key)    // If the element is present at the middle 
            return mid; 
    
        if (sortedArray[mid] > key)     // If element is smaller than mid, then search left subarray
            return search(key, start, mid - 1, sortedArray); 
   
        return search(key, mid + 1, end, sortedArray);    // Else the element can only be present in right subarray
    } 
  
        return -1;
        clock_t End = clock();
        cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms"; //Element is not present
    }
    
};