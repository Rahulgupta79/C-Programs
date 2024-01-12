#include<stdio.h>
#include<stdlib.h>
struct distance
{
	int km;
	int m;
	int cm;
};
void Display(struct distance d1,struct distance d2)
{
	struct distance d3;
	int cm1=0,cm2=0,m=0,m1=0,m2=0,km;
	if(d1.cm<100)
	{
		if(d2.cm<100)
		{
			d3.cm=d1.cm+d2.cm;
		}
		else
		{
			cm1=d2.cm/100;
			d3.cm=d1.cm+(d2.cm)%100;
		}
		m=cm1;
	}
	else
	{
		cm1=d1.cm/100;
		if(d2.cm<100)
		{
			d3.cm=(d1.cm)%100+d2.cm;
		}
		else
		{
			d3.cm=(d1.cm)%100+(d2.cm)%100;
			cm2=d2.cm/100;
		}
		m=cm1+cm2;	
	}
	printf("Total Distance:%dcm",d3.cm);
	if(d1.m<1000)
	{
		if(d2.m<1000)
		{
			d2.m=d1.m+d2.m+m;
		}
		else
		{
			m1=d2.m/1000;
			d3.m=d1.m+(d2.m)%1000;
		}
		km=m1;
	}
	else
	{
		m1=d1.m/1000;
		if(d2.m<1000)
		{
			d3.m=(d1.m)%1000+d2.m;
		}
		else
		{
			d3.m=(d1.m)%1000+(d2.m)%1000;
			m2=d2.m/1000;
		}
		km=m1+m2;
	}
	printf("Total Distance:%dm",d3.m);
	if(d1.km<1000)
	{
		if(d2.km<1000)
		{
			d3.km=d1.km+d2.km+km;
		}
	}
	printf("Total Distance:%dkm",d3.km);

}
int main()
{
	struct distance d1,d2;
	int i;
	printf("Enter[1st] distance:km/m/cm:");
	scanf("%d%d%d",&d1.km,&d1.m,&d1.cm);
	printf("Enter[2nd] distance:km/m/cm:");
	scanf("%d%d%d",&d2.km,&d2.m,&d2.cm);
	Display(d1,d2);
	return 0;
}
