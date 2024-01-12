#include<stdio.h>
int main()
{
	float Km,h,Ms;
	printf("Enter a Distance in Km/h");
	scanf("%f%f",&Km,&h);
	Ms=Km/h*5/18;
	printf("Ms=%f",Ms);
}
