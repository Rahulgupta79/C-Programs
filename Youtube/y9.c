#include<stdio.h>
int main()
{
	int num,i,j;
	printf("\nEnter a number for print table 1 to n:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=num;j++)
		{
			printf("%d*%2d=%2d\t",j,i,j*i);
		}
		printf("\n");
	}
	return 0;
}
