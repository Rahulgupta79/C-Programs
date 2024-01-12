#include<stdio.h>
int main()
{
	float r,Area,Cercumference,Diameter;
	const float pi=3.14;
	printf("Enter radius of circle=");
	scanf("%f",&r);
	Area=pi*r*r;
	Cercumference=2*pi*r;
	Diameter=2*r;
	printf("\n Area of circle=%f",Area);
	printf("\n Cercumference of Circle=%f",Cercumference);
	printf("\n Diameter of Circle=%f",Diameter);
	return 0;
}
