#include "algorithmHeaders.h"
/*
    All function signatures and necessary libraries
    in the header file algorithmHeaders.h
*/


/*
    variable: resultantVector is the only vector
    used for the entire program.
*/
vector<int> resultantVector;

/*
    The helper function helps to    
    print the result for the search index
    from Liner Search and Binary Search.
*/
void result(int index)
{
    if(index==-1)
        cout<<"Not Found"<<endl;
    else
        cout<<"Found in index "<<index<<endl;
}

/*
    The helper function helps 
    to take the input for the key
    to be searched in the vector 
    using either the Linear Search or 
    Binary Search algorithm.
*/


int keyInput()
{
    int key=0;
    cout<<"Enter the number to search for: ";
    cin>>key;
    return key;
}

//main function begins


int main()
{
    cout<<"Welcome! This program implements and tests three sorting algorithms on vector of integers."<<endl;
    string command="";
    while(command!="quit")
    {
        cout<<"Enter command (generate, selection, rselection, bubble, rbubble, insertion, rinsertion, lin_search, bin_search, quit): ";
        cin>>command;
        if(command=="quit")                              //Case for quitting the program
        {
            cout<<"Program is terminated"<<endl;
            break;
        }
        else if(command=="generate")                      //Case for generating the vector
        {
            int vectorLength=0,minValue=0,maxValue=0;     //Takes the necessary input from the user 
            cout<<"Vector Length : ";                     //input: vectorLength, minValue and maxValue(range for the random number generation)
            cin>>vectorLength;
            cout<<"Minimum Value : ";
            cin>>minValue;
            cout<<"Maximum Value : ";
            cin>>maxValue;
            resultantVector=generateVector(vectorLength,minValue,maxValue);
            printVector(resultantVector);
        }
        else if(command=="selection")                     //Case for iterative Selection Sort
        {
            selectionSort(resultantVector);
            printVector(resultantVector);
        }
        else if(command=="rselection")                    ////Case for Recursive Selection Sort
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
        else                                                   //Case for handling wrong input from the user apart from the designated ones
        {
            cout<<"Please enter a valid command "<<endl;
        }
    }

    return 0;
}
