//The necessary libraries for all the other files
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/*
  All the function signatures for the commands
  required for the program.
*/
vector<int> generateVector(int,int,int);
void printVector(vector<int>);
void selectionSort(vector<int> &L);
void rselectionSort(vector<int> &L,int);
void bubbleSort(vector<int> &L);
void rbubbleSort(vector<int> &L,int);
void insertionSort(vector<int> &L,int);
void rinsertionSort(vector<int> &L, int);

int binarySearch(vector<int> &L, int key);
int linearSearch(vector<int> &L, int key);
