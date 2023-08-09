#include<stdio.h>
int main()
{
	int ar[10],i,j;
	for(i=0;i<10;i++)
	{
		printf("\nEnter Number[%d]:",i);
		scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				continue;
			}
			else
			{
				printf("Prime [%d]",i);
			}
		}
	}
	return 0;
}
