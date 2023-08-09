#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,max,n;
	printf("\nHow many numbers you want to add:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\nCount is out of range");
	}
	else
	{
		printf("\nEnter %d numbers ",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
		}
		max=num[0];
		for(i=1;i<n;i++)
		{
			if(num[i]>max)
			max=num[i];
		}
		printf("\nGreater number:%d",max);
	}
	return 0;
}
