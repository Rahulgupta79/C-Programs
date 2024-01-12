#include<stdio.h>
int main()
{
	int num,i,num1;
	printf("\n Enter a number");
	scanf("%d",&num);
	i=1;
	while(i<=10)
	{
		num1=num*i;
		printf("\n%d*%d=%d",num,i,num1);
		i++;
	}
	return 0;
}
