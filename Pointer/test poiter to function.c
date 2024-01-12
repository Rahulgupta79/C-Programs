#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int sp(int a,int b ,int (*sp)(int ,int ))
{
	return sp(a,b);
}
int main()
{
	int a=4,b=7,result;
	result=sp(a,b,sum);
	printf("%d",result);
	return 0;
}
