#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int mainMenu();
int insertMenu();
int SearchMenu();
int isFull(int array[], int length);
int insertAtBeg(int array[],int length,int element);
int insertAtEnd(int array[],int length,int element);
void display(int array[],int length);
int insertAtSorted(int array[],int length,int element);
int LinearSearch(int array[],int length,int element);
int BinarySearch(int array[],int length,int element);
