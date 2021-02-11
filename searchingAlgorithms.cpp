#include "algorithmHeaders.h"

/*
   algorithm : binary search
   params    : vector of integers, key 
   assumption: Vector is already sorted
   return    : index of the searched item in the vector
*/

/*
   Binary Search follows a divide and conquer approach 
   and focuses on only one single half of the same.
*/
int binarySearch(vector<int> &L,int key)
{
   int index=-1;
   int low=0,high=L.size()-1;
   
   /*
      Iterates and compares the middle element of
      vector with the key element.
      The middle element is calculated as 
      mid=(low+high)/2
   */
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(L.at(mid)==key)
            return mid;
       if(L.at(mid)<key)
            low=mid+1;
       else
            high=mid-1;
   }
   return index;
}

/*
   algorithm : linear search
   params    : vector of integers, key 
   assumption: length of vector>=1
   return    : index of the searched item in the vector
*/

int linearSearch(vector<int> &L,int key)
{
    /*
      Algorithm does a linear scan of the sequence of 
      elements and once found returns the index of
      the key.
    */
    int lengthOfVector=L.size();
    int index=-1;
    for(int i=0;i<lengthOfVector;i++)
    {
        if(L.at(i)==key)
        {
            index=i;
            break;
        }
    }
    return index;
}
