#include<stdio.h>
#define SIZE 50
int main()
{
	int num[SIZE],i,n;
	printf("\nEnter how many numbers for print:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter number[%d]:",i+1);
		scanf("%d",&num[i]);
	}
	printf("Yours Numbers");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",num[i]);
	}
	return 0;
}
