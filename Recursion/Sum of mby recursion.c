#include<stdio.h>
long long int Fact(int num)
{
	long long int sum;
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
		return num+Fact(num-1);
	}
}
int main()
{
	int num;
	long long int sum;
	printf("\nEnter number for sum =");
	scanf("%d",&num);
	sum=Fact(num);
	printf("\nSum =%lld",sum);
	return 0;
}
