#include<stdio.h>
void table(int num)
{
	int i;
	if(num==0)
	{
		return;
	}
	else
	{
		for(i=1;i<=10;i++)
		{
			printf("%d*%2d=%d",num,i,num*i);
			printf("\n");
		}
		
	}
}
int main()
{
	int num;
	printf("\nEnter number:");
	scanf("%d",&num);
	table(num);
	return 0;
}
