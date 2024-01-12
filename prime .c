#include<stdio.h>
int main()
{
	int num[3],i,j,flag=0;
	for(i=0;i<3;i++)	
	{
		printf("\nEnter number[%d]:",i+1);
		scanf("%d",&num[i]);
		for(j=2;j<=num[i]/2;j++)
		{
			if(num[i]%j==0)
			{
				flag=0;
				break;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag=1)
		{
			printf("Prime\t");
		}
		else
		{
			printf("Not Prime\t");
		}
	}
	return 0;
}
