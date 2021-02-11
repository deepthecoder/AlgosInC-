#include "algorithmHeaders.h"

int binarySearch(vector<int> &L,int key)
{
   int index=-1;
   int low=0,high=L.size()-1;
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

int linearSearch(vector<int> &L,int key)
{
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
