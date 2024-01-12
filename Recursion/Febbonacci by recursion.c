#include<stdio.h>
int febbo(int num)
{
	if(num==1||num==0)
	{
		return 1 ;
	}
	else
	{
		return (febbo(num-1)+febbo(num-2));
	}
}
int main()
{
	int num,i;
	printf("\nEnter number for febbonacci =");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d",febbo(i));
		printf("\t");
	}
	return 0;
}
