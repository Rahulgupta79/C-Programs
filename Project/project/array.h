#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int insertAtEnd(int arr[],int length,int element);
int insertAtBeg(int arr[],int length,int element);
int insertAtSortedOrder(int arr[],int length,int element);
int insertAtDesiredLocation(int arr[],int length,int element,int loc);
void display(int arr[],int length);
int mainMenu();
int insertMenu();
int isFull(int array[], int length);
void display(int array[],int length);
int linearSearch(int arr[],int length,int searchKey);
int binarySearch(int arr[],int length,int searchKey);
int Delete(int array[],int length,int delElement);
