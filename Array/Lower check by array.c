#include<stdio.h>
#define SIZE 50
int main()
{
	int num[SIZE],i,n,min;
	printf("\nEnter how many number you give:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\nCount out of Range");
	}
	else
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter number:");
			scanf("%d",&num[i]);
		}
		min=num[0];
		for(i=1;i<n;i++)
		{
			if(num[i]<min)
			{
				min=num[i];
			}
		}
		printf("\nLower number:%d",min);
	}
	return 0;
}
