#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,j,k,sort,sor,max=0,min=0,op;
	printf("\nEnter how many numbers to you want to include:");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		printf("\nEnter number:[%d]:",i);
		scanf("%d",&num[i]);
	}
	while(1)
	{
		printf("\nEnter number-:[1]->show the numbers\n\t\t[2]->Select Greater number\n\t\t[3]->Select Smaller number\n\t\t[4]->To Arrange\t");
		scanf("%d",&op);
		if(op==1)
		{
			system("cls");
			for(i=0;i<j;i++)
			{
				printf("%d\t",num[i]);
			}
			printf("\n");
		}
		else if(op==2)
		{
			max=num[0];
			for(i=0;i<j;i++)
			{
				if(max<num[i])
				{
					max=num[i];
				}
			}	
			printf("\n\nGreater number is %d\n",max);
		}
		else if(op==3)
		{
			min=num[0];
			for(i=0;i<j;i++)
			{
				if(min>num[i])
				{
					min=num[i];
				}
			}	
			printf("\n\nSmaller number is %d\n",min);
		}
		else if(op==4)
		{
			for(i=0;i<j;i++)
			{
				sort=i;
				for(k=i+1;k<j;k++)
				{
					if(num[k]<num[sort])
					sort=k;
				}	
				sor=num[i];
				num[i]=num[sort];
				num[sort]=sor;
			}
		}
		else
		{
			printf("\nPlease type valid number and try again\n");
			exit(0);
		}
	}
	return 0;
}
