#include<stdio.h>
int main()
{
	float a,b,c,max;
	printf("Enter any three number");
	scanf("%f%f%f",&a,&b,&c);
	max=a>b?a>c?a:c:b>c?b:c;
	printf("Greater number is =%f",max);
}
