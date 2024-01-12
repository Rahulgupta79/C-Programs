 //My Youtube channel=Technical Output
#include<stdio.h>
int main()
{
	float n,m;
	printf("\nEnter two numbers with space");
	scanf("%f%f",&n,&m);
	if(n<m)
	{
		printf("Greater number =%.2f ",m);
	}
	else
	{
		printf("Greater number =%.2f",n);
	}
	return 0;
}
