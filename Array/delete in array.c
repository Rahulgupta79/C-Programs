#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
void deleted(int ar[],int length)
{
	int i,del;
	printf("Enter which lengthber you want to delete:");
	scanf("%d",&del);
	for(i=0;i<length;i++)
	{
		if(del==ar[i])
		{
			while(i!=length-1)
			{
				ar[i]=ar[i+1];
				i++;
			}
			printf("Data will be deleted");
			ar[length-1]=0;
		}
	}
}
int main()
{
	int ar[SIZE],i,length;
	printf("Enter how many number you have to insert:");
	scanf("%d",&length);
	for(i=0;i<length;i++)
	{
		printf("Enter student Number[%d]-",i+1);
		scanf("%d",&ar[i]);
		//system("cls");
	}
	deleted(ar,length);
	/*
	int del;
	printf("Enter which lengthber you want to delete:");
	scanf("%d",&del);
	
	
	for(i=0;i<length;i++)
	{
		if(del==ar[i])
		{
			while(i!=length-1)
			{
				ar[i]=ar[i+1];
				i++;
			}
			printf("Data will be deleted");
			ar[length-1]=0;
		}
	}
	*/
	for(i=0;i<length;i++)
	{
		printf("\n%d\n",ar[i]);
	}
	return 0;
}
