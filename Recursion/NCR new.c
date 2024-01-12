#include<stdio.h>
long long int Fact(int num,int r)
{
	long long int fact;
	if(num==0 || num==1)
	{
		return 1;
	}
	else
	{
		fact=num*Fact(num-1);
		return fact;
	}
}
int main()
{
	int num,r;
	long long int fact,chat;
	printf("\nEnter number for NCR first n then r =");
	scanf("%d%d",&num,&r);
	fact=Fact(num);
	chat=Fact(r);
	printf("\nNCr =%lld",fact/chat);
	return 0;
}
