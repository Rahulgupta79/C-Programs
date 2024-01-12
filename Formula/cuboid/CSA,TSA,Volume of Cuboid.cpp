#include<stdio.h>
int main()
{
	float l,b,h,Volume,CSA,TSA;
	printf("Enter Length,Breadth,Height");
	scanf("%f%f%f",&l,&b,&h);
	Volume=l*b*h;
	CSA=2*(l+b)*h;
	TSA=2*(l*b+b*h+l*h);
	printf("\n volume=%f",Volume);
	printf("\n CSA=%f",CSA);
	printf("\n TSA=%f",TSA);
	return 0;
}
