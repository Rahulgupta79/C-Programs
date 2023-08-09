#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ar[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter Number[%d]:",i+1);
		scanf("%d",&ar[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("%d",ar[i]);
	}
	return 0;
}
