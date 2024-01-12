#include<stdio.h>
#include<stdlib.h>
struct complex
{
	float real;
	float img;
};
void Display(struct complex c1,struct complex c2,struct complex c3)
{
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	printf("Complex Number=%.1f+%.1fi",c3.real,c3.img);
}
int main()
{
	int i;
	struct complex c1,c2,c3;
	printf("Enter first complex number digits:");
	scanf("%f %f",&c1.real,&c1.img);
	printf("Enter Second complex number digits:");
	scanf("%f %f",&c2.real,&c2.img);
	Display(c1,c2,c3);
	return 0;
}
/*
        2nd Method
#include<stdio.h>
#include<stdlib.h>
struct complex
{
	float real;
	float img;
};
void Display(struct complex c1,struct complex c2)
{
	struct complex c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	printf("Complex Number=%.0f+%.0fi",c3.real,c3.img);
}
int main()
{
	int i;
	struct complex c1,c2,c3;
	printf("Enter first complex number digits:");
	scanf("%f %f",&c1.real,&c1.img);
	printf("Enter Second complex number digits:");
	scanf("%f %f",&c2.real,&c2.img);
	Display(c1,c2);
	return 0;
}*/
