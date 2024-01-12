#include<stdio.h>
int main()
{
	int num,i;
	printf("\nEnter a number for table:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		printf("%d*%2d=%2d\n",num,i,num*i);
	}
	return 0;
}
