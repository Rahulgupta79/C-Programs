#include<stdio.h>
#include<stdlib.h>
struct complex
{
	float real;
	float img;
}c[10];
void Display(struct complex c[],int n)
{
	float real=0,img=0;
	int i;
	for(i=0;i<n;i++)
	{
		real=real+c[i].real;
		img=img+c[i].img;
		printf("Complex Number=%.2f+%.2fi",real,img);
	}
}
int main()
{
	int i,n;
	struct complex c[10];
	printf("Enter how many complex number have you add:");
	scanf("%d",&n);
	/*for(i=0;i<n;i++)
	{
		printf("Enter [%dst] complex number digits:",i+1);
		scanf("%f %f",c[i].real,c[i].img);
	}*/
	Display(c,n);
	return 0;
}
