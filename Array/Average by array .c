#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,sum,n;
	float avr;
	printf("\nHow many numbers you want to add:");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\nCount is out of range");
	}
	else
	{
		printf("\nEnter elements ");
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);
			sum=sum+num[i];
		}
		for(i=0;i<n;i++)
		{
			printf("%d+",num[i]);
		}
	}
	avr=sum/n;
	printf("=%d\nAverage %.2f",sum,avr);
	return 0;
}
