#include "BinarySearchMain.h"
#include<bits/stdc++.h>
using namespace std;

//Derived class
class BinarySearchIterative : public BinarySearchMain{

		
		public:
		//Overridden method
        clock_t begin = clock();
		int search(int key, int start, int end, int sortedArray[]) {
            

		    while (start <= end)
		    {	
		    	int mid = start + (end - start) / 2;	//Middle element
	
		        if (sortedArray[mid] == key)			// If the element is present at the middle 
		            return mid;
		            
		        else
		        {
		            if (sortedArray[mid] < key) 		// If element is smaller than mid, then search left subarray
		            {
		                start = mid + 1;
		                
		            }
		            else
		            {
		                end = mid - 1;				   // Else the element can only be present in right subarray
		
		            }
		        }
		    }
		    
		    return -1;
            clock_t End = clock();
            cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";								  //Element is not present
		}
        
      
};

