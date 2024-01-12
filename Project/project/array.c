#include"array.h"
int mainMenu()
{
	int choice;
	printf("\n\n\n Enter choice accordingly\n0---->Exit\n1---->Create an array\
	\n 2---->Insert\n3---Display\n4----->Linear Search\n5---->binary search\
	\n6---->delete\n Enter your choice ");
	 scanf("%d",&choice);
	 return choice;
	
}

int insertMenu()
{
	int choice;
	printf("\n\n0---->Exit\n1---->Insert at begining\
	\n2---->Insert at end\n3--->Insert at desired Location\
	\n4---->Insert at sorted order\n5---->Main menu \n Enter your choice ");
	 scanf("%d",&choice);
	 return choice;
}

/*
	Insertion:- To insert an element to the array.
	1. InsertAtEnd
	2. InsertAtBeg
	3. InsertAtDesiredLocation
	4. InsertAtSortedOrder

*/

/*
	ADT--> Abstract Data Type
	
	ADT for InsertAtEnd
	Purpose			: To insert an element at the end of the array.	
	Precondition	: array is created and array is not full.	
	Input			: array[](int), length(int),element(int)
	Output			: length(int)
	Post condition	: element is inserted at end and length is increased by 1
	
*/

int insertAtEnd(int arr[],int length,int element)
{
	arr[length]=element;
	length++;
	return length;
}
/*
	ADT--> Abstract Data Type
	
	ADT for insertAtSortedOrder
	Purpose			: To insert an element at sorted order in the array.	
	Precondition	: array is created and array is not full.	
	Input			: array[](int), length(int),element(int)
	Output			: length(int)
	Post condition	: element is inserted at appropriate position so that the array
					  remains sorted and length is increased by 1
	
*/

int insertAtSortedOrder(int arr[],int length,int element)
{
	int i;
	for(i=length-1;i>=0;i--)
	{
		if(arr[i]>element)
		{
			arr[i+1]=arr[i];
		}
		else
		{
			break;
		}
	}
	arr[i+1]=element;
	length++;
	return length;	
}
/*
		
	ADT for InsertAtBeg
	Purpose			: To insert an element at the begining of the array.	
	Precondition	: array is created and array is not full.	
	Input			: array[](int), length(int),element(int)
	Output			: length(int)
	Post condition	: element is inserted at begining and length is increased by 1
	
*/

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
/*
		
	ADT for insertAtDesiredLocation
	Purpose			: To insert an element at the desired location of the array.	
	Precondition	: array is created and array is not full,location is valid.	
	Input			: array[](int), length(int),element(int),loc(int)
	Output			: length(int)
	Post condition	: element is inserted at location(loc) and length is increased by 1
	
*/
int insertAtDesiredLocation(int array[],int length,int element,int loc)
{
	int i;
	loc--;
	for(i=length;i>loc;i--)
	{
		array[i]=array[i-1];
	}
	array[i]=element;
	length++;
	return length;
}

/*
	
	ADT for isFull
	Purpose			: To check whether an array is full or not.	
	Precondition	: array is created.	
	Input			: array[](int), length(int)
	Output			: status(int)    1 if full otherwise 0
	Post condition	: none
	
*/
int isFull(int array[], int length)
{
	int status=0;
	if(length==SIZE)	
	{
		status=1;
	}
	return status;
}
/*
	
	ADT for display
	Purpose			: To display the content of array.	
	Precondition	: array is created.	
	Input			: array[](int), length(int)
	Output			: none
	Post condition	: none
	
*/
void display(int array[],int length)
{
	int i;
	if(length==0)
		printf("\n Empty ");
	else
	{
		for(i=0;i<length;i++)
		{
			printf("%d\t",array[i]);
		}
	}
	
}


/*
	Search:- This operation is to search for an element in an array whether
			 it is there or not and if it is there then where it is?
			  
	Search in array is of two types..
	 1. Linear search
	 2. Binary search
*/



/*
	LinearSearch  :- Linear search is a search mechanism through which 
					we start searching for an element from the begining
					to end. Whenever the element is found then the searh process
					(linear search) will be stoped.
	
	
	ADT for linearSearch
	Purpose			: To search an element from an array.	
	Precondition	: array is created.	
	Input			: array[](int), length(int),searchKey(int)
	Output			: index(int)      index if found
									   -1 otherwise
	Post condition	: none
	
*/

int linearSearch(int arr[],int length,int searchKey)
{
	int i;
	for(i=0;i<length;i++)
	{
		if(arr[i]==searchKey)
			break;
	}
	if(i==length)
	{
		i=-1;
	}
	return i;
}
/*
	binary search  :- binary search is a search mechaism in which we always seach at mid
					point. It can be applied only in sorted array(ascending/decending)
					if the element is found at mid point then the search is completed.
					if the search element is greater/smaller than the mid element then the search
					space is reduced by half. it can be either start to mid-1 index or 
					mid+1 to end index
	
	
	ADT for binarySearch
	Purpose			: To search an element from an array.	
	Precondition	: array is created,and array is sorted.	
	Input			: array[](int), length(int),searchKey(int)
	Output			: index(int)      index if found
									   -1 otherwise
	Post condition	: none
	
*/
int binarySearch(int arr[],int length,int searchKey)
{
	int start,end,mid;
	start=0;
	end=length-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr[mid]==searchKey)
		{
			break;
		}
		else if(arr[mid]<searchKey)
		{
			start=mid+1;	
		}
		else
		{
			end=mid-1;
		}
	}
	if(start>end)
		mid=-1;
	return mid;
}

/*
	Deletion:- To delete a particular existing element from the array.
	
	ADT for Delete
	purpose: 	To delete an existing element
	pre		:	array is created , not empty, element is exist
	input:-	:	array(int),length(int),delElement(int)
	output:-	:	length(int),array(int)
	post:		length will be dcreased by 1
	

*/

int Delete(int array[],int length,int delElement)
{
	int index,i;
	index=linearSearch(array,length,delElement);
	if(index==-1)
	{
		printf("\n Data not found ");
		
	}
	else
	{
		for(i=index;i<length-1;i++)
		{
			array[i]=array[i+1];
		}
		length--;
	}
	return length;
}
