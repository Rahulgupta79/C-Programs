#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void SelectionSort(int array[],int length);
int main()
{
	int i,n,array[SIZE],length=0;
	printf("\nEnter how much you want to insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter data:");
		scanf("%d",&array[i]);
		length++;
	}
	SelectionSort(array,length);
	for(i=0;i<length;i++)
	{
		printf("%d",array[i]);
	}
	return 0;
}
void SelectionSort(int array[],int length)
{
	int i,j,min,temp;
	for(i=0;i<length-1;i++)
	{
		min=0;
		for(j=i+1;j<length;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		temp=array[i];
		array[i]=array[min];
		array[min]=temp;
	}
}
