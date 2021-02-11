#include "algorithmHeaders.h"
/*
    generateVector function generates the 
    random numbers in a given range for a given length
    of the vector
    params:     length(length/size of the vector)
                min (minimum value for generating random numbers)
                max (maximum value for generating random numbers)
    assumption: min<=max
    return:     vector of integers    
*/

vector<int> generateVector(int length,int min,int max)
{
    vector<int> vectorOfIntegers(length);           
    for(int i=0;i<length;i++)
    {
        int randomInteger=min+rand()%(max+1-min);
        vectorOfIntegers.at(i)=randomInteger;         //Adding the random numbers to the vectorOfIntegers
    }
    return vectorOfIntegers;
}

/*
    helper function to print the contents
    of the vector.
*/
void printVector(vector<int> L)
{
    for(int i=0;i<L.size();i++)
    {
        cout<<L.at(i)<<" ";
    }
    cout<<endl;
}
