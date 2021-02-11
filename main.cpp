#include "algorithmHeaders.h"

vector<int> resultantVector;

void result(int index)
{
    if(index==-1)
        cout<<"Not Found"<<endl;
    else
        cout<<"Found in index "<<index<<endl;
}

int keyInput()
{
    int key=0;
    cout<<"Enter the number to search for: ";
    cin>>key;
    return key;
}

int main()
{
    cout<<"Welcome! This program implements and tests three sorting algorithms on vector of integers."<<endl;
    string command="";
    while(command!="quit")
    {
        cout<<"Enter command (generate, selection, rselection, bubble, rbubble, insertion, rinsertion, lin_search, bin_search, quit): ";
        cin>>command;
        if(command=="quit")
        {
            cout<<"Program is terminated"<<endl;
            break;
        }
        else if(command=="generate")
        {
            int vectorLength=0,minValue=0,maxValue=0;
            cout<<"Vector Length : ";
            cin>>vectorLength;
            cout<<"Minimum Value : ";
            cin>>minValue;
            cout<<"Maximum Value : ";
            cin>>maxValue;
            //vector<int> resultantVector(vectorLength);
            resultantVector=generateVector(vectorLength,minValue,maxValue);
            printVector(resultantVector);
        }
        else if(command=="selection")
        {
            selectionSort(resultantVector);
            printVector(resultantVector);
        }
        else if(command=="rselection")
        {
            rselectionSort(resultantVector,0);
            printVector(resultantVector);
        }
        else if(command=="bin_search")
        {
            int key=keyInput();
            int index=binarySearch(resultantVector,key);
            result(index);
        }
        else if(command=="lin_search")
        {
            int key=keyInput();
            int index=linearSearch(resultantVector,key);
            result(index);
        }
        else if(command=="bubble")
        {
            bubbleSort(resultantVector);
            printVector(resultantVector);
        }
        else if(command=="rbubble")
        {
            rbubbleSort(resultantVector,resultantVector.size());
            printVector(resultantVector);
        }
        else if(command=="insertion")
        {
            insertionSort(resultantVector,resultantVector.size());
            printVector(resultantVector);
        }
        else if(command=="rinsertion")
        {
            rinsertionSort(resultantVector,resultantVector.size());
            printVector(resultantVector);
        }
        else
        {
            cout<<"Please enter a valid command "<<endl;
        }
    }

    return 0;
}
