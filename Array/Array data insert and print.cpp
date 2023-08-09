#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[10],i;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter number[%d]:",i);
		scanf("%d",&num[i]);
	}
	for(i=1;i<=10;i++)
	{
		printf("\t%d",num[i]);
	}
	return 0;
}
