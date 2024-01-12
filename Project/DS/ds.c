#include"ds.h"
int mainMenu()
{
	int choice;
	printf("\n0->Exit\n1->Create\n2->Insert\n3->Search\n4->Display\nEnter-");
	scanf("%d",&choice);
	return choice;
}
ArrayType createArray()
{
	ArrayType array;
	array.length=0;
	return array;
}
void Exit()
{
	system("cls");
	printf("Thank You for using this project");
	exit(1);
}

int InsertMenu()
{
	int choice;
	printf("******Insert Menu******\n");
	printf("\n0->Exit\n1->Insert At Begining\n2->Insert At End\n3->Insert At Desired Locatioin\n4->Insert At Sorted Order\nEnter-");
	scanf("%d",&choice);
	return choice;
}
DataType  readData()
{
	DataType data;
	printf("\nEnter data:");
	scanf("%d",data.key);
	return data;
}
int isFull(ArrayType array)
{
	int status=0;
	if(array.length==SIZE)
		status=1;
	return status;
}

void insertAtEnd(ArrayType *array,DataType data)
{
	array->elements[array->length]=data;
	array->length=array->length+1;
}

void insertAtBegining(ArrayType *array,DataType data)
{
	int i;
	for(i=array->length; i>0; i--)
	{
		array->elements[i]=array->elements[i-1];
	}
	array->elements[i]=data;
	array->length=array->length+1;
}

