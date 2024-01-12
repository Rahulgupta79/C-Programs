#include<stdio.h>
int main()
{
	int num,i,j;
	printf("\nEnter a number for print Square :");
	scanf("%d",&num);
	for(i=num;i>=num;i--)
	{
		for(j=1;j<=num;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
