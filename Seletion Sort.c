#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
	int array[SIZE],i,length,n;
	printf("\nEnter how much you want insert:");
	scanf("%d",&n);
	length=n;
	for(i=0;i<n;i++)
	{
		printf("\nEnter Number:");
		scanf("%d",&array[i]);
	}
	SelectionSort(array,length);
	return 0;
}
void SelectionSort(int array[],int length)
{
	int i,j,temp,min;
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
