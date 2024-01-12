#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("\n Enter Principal,Rate and Short Time");
	scanf("%f%f%f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("\n SI=%f",SI);
}
