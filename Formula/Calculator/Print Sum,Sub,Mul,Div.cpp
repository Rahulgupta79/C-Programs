#include<stdio.h>
int main()
{
	float n1,n2,sum,sub,mult,div;
	printf("\n Enter Two numbers =");
	scanf("%f%f",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	mult=n1*n2;
	div=n1/n2;
	printf("\n sum=%f",sum);
	printf("\n sub=%f",sub);
	printf("\n mult=%f",mult);
	printf("\n div=%f",div);
	return 0;
}
