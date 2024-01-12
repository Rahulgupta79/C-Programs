#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&y);
	a=x,b=y;
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	printf("HCF of %d and %d= %d",x,y,a);
	return 0;
}
