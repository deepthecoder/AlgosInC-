#include "algorithmHeaders.h"

void selectionSort(vector<int> &L)
{
    int i,j,minIndex;
    int length=L.size();
    for(i=0;i<length-1;i++)
    {
        minIndex=i;
        for(j=i+1;j<length;j++)
        {
            if(L[j]<L[minIndex])
                minIndex=j;
        }
        swap(L.at(i),L.at(minIndex));
    }
}

void rselectionSort(vector<int> &L, int startIndex)
{
    if ( startIndex >= L.size()-1 )
        return;
    int minIndex = startIndex;
    for ( int index = startIndex + 1; index < L.size(); index++ )
    {
        if (L.at(index) < L.at(minIndex) )
            minIndex = index;
    }
    swap(L.at(startIndex),L.at(minIndex));
    rselectionSort(L, startIndex + 1);
}


void bubbleSort(vector<int> &L)
{
    int length=L.size();
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(L.at(j)>L.at(j+1))
                swap(L.at(j),L.at(j+1));
        }
    }
}

void rbubbleSort(vector<int> &L,int n)
{
    if(n==1)
        return;
    for(int i=0;i<n-1;i++)
    {
        if(L.at(i)>L.at(i+1))
            swap(L.at(i),L.at(i+1));
    }
    rbubbleSort(L,n-1);
}


void insertionSort(vector<int> &L, int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key=L.at(i);
        int j=i-1;
        while(j>=0 && L.at(j)>key)
        {
            L[j+1]=L[j];
            j--;
        }
        L[j+1]=key;
    }
}

void rinsertionSort(vector<int> &L, int n)
{
    if(n<=1)
        return;
    rinsertionSort(L,n-1);
    int lastElement=L.at(n-1);
    int j=n-2;
    while(j>=0 && L.at(j)>lastElement)
    {
        L[j+1]=L[j];
        j--;
    }
    L[j+1]=lastElement;
}
