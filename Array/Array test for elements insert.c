#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<conio.h>
//#include<time.h>
#define SIZE 100
int main()
{
	int ar[SIZE],i,n;
	printf("\n Enter how much you want to insert :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Number[%d]:",i+1);
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		printf(" [%d]->%d",i+1,ar[i]);
	}
	return 0;
}
