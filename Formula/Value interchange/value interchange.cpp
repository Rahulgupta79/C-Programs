#include<stdio.h>
int main()
{
	int a=5,b=7,temp;
	printf("a=%d,b=%d",a,b);
	temp=a,a=b,b=temp;
	printf("a=%d,b=%d",a,b);
	return 0;
}
