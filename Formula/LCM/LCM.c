#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("\nEnter two numbers");
	scanf("%d%d",&x,&y);
	a=x,b=y;
	while(a!=b)
	{
		if(a<b)
		{
			a=a+x;
		}
		else
		{
			b=b+y;
		}
	}
	printf("LCM of %d and %d= %d",x,y,a);
	return 0;
}
