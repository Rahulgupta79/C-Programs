#include<stdio.h>
int main()
{
	int num,i,j;
	printf("\nEnter How much table you get =");
	scanf("%d",&num);
//	printTable(num);
	if(num<0)
	{
		printf("\n Undefine");
	}
	else
	{
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d *%2d = %3d\n",i,j,i*j);
		}
		printf("\n");
	}
	}
	return 0;
}
/*void printTable(int num)
{
	int i,t;
	for(t=1;t<=num;t++)
	{
		for(i=1;i<=10;i++)
		{
			printf("\n%d*%2d =%3d",t,i,t*i);
		}
		printf("\n");
	}
}*/
