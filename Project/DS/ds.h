#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
typedef int KeyType;
typedef struct DataType
{
	KeyType key;
}DataType;
typedef struct ArrayType
{
	DataType elements[SIZE];
	int length;
}ArrayType;
int mainMenu();
void Exit();
ArrayType createArray();
int InsertMenu();
DataType readData();
int isFull(ArrayType array);
void insertAtEnd(ArrayType *array,DataType data);
void insertAtBegining(ArrayType *array,DataType data);
