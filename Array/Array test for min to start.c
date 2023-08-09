#include<stdio.h>
#define SIZE 100
int main()
{
	int ar[SIZE],i,n;
	printf("\nEnter how many numbers you want to insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter number[%d]:",i+1);
		scanf("%d",&ar[i]);
	}
	for(i=1;i<n;i++)
	{
		ar[0]>ar[i];
		ar[0]=ar[i];
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",ar[i]);
	}
	return 0;
}
