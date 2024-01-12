#include<stdio.h>
typedef int KeyType;
typedef struct DataType
{
	KeyType Key;
}DataType;
typedef struct ArrayType
{
	DataType elements[SIZE];
	int  length;
}ArrayType;
ArrayType CreateArray
{
	ArrayType array;
	array.length=0;
	return array;
}
