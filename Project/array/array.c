#include"array.h"
int mainMenu()
{
	int choice;
	printf("\n0--->exit\n1--->create\n2--->Display\n3--->insert\n4--->delete\n5--->search\n6--->sort\nEnter your choice : ");
	scanf("%d",&choice);
	return choice;
}
int insertMenu()
{
	int choice;
	printf("\n0-->exit\n1-->Insert at begining\n2-->Insert at end\n3-->Insert at desired location\n4-->Insert at sorted order\n5-->main menu\nEnter your choice : ");
	scanf("%d",&choice);
	return choice;
}
int SearchMenu()
{
	int choice;
	printf("\n0-->exit\n1-->LinearSearch\n2-->BinarySearch\n3-->mainMenu");
	scanf("%d",&choice);
	return choice;
}
int isFull(int array[], int length)
{
	int status=0;
	if(length==SIZE)
	{
		status=1;	
	}
	return status;
}
int insertAtBeg(int array[],int length,int element)
{
	int i;
	for(i=length;i>0;i--)
	{
		array[i]=array[i-1];
	}
	array[i]=element;
	length++;
	return length;
}
void display(int array[],int length)
{
	int i;
	if(length==0)
		printf("\nThere is no Data on your Program");
	else
	{
		for(i=0;i<length;i++)
		{
			printf("%d\t",array[i]);
		}
	}
	
}
int insertAtEnd(int array[],int length,int element)
{
	array[length]=element;
	length++;
	return length;
	
}
int insertAtSorted(int array[],int length,int element)
{
	int i;
	for(i=length;i>0;i--)
	{
		if(array[i-1]>element)
		{
			array[i]=array[i-1];
		}
		else
		{
			break;
		}
		
	}
	array[i]=element;
	length++;
	return length;

}
/*ADT-:
Purpose-to search a particular element in array
precondition-Array will be created manadatory
input-int data on array 
output-to print final result in form of data index
*/
int LinearSearch(int array[],int length,int element)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(element==array[i])
		{
			break;
		}
	}
	if(i==length)
	{
		i=-1;
	}
	return i;
}
int BinarySearch(int array[],int length,int element)
{
	int i,start,end,mid=0;
	start=0;
	end=length-1;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(array[mid]==element)
		{
			break;
		}
		else if(array[mid]>element)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(start>end)
	{
		mid=-1;
	}
	return mid;
}
