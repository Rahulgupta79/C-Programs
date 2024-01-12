#include<stdio.h>
int main()
{
	int n,m,t;
	printf("\nEnter a num=");
	scanf("%d",&n);
	printf("\nEnter a num=");
	scanf("%d",&m);
	if(m==0||n==0)
	{
		printf("Value=0");
	}
	else
	{
		t=n+(n*(m-1));
	}
	printf("Ans=%d",t);
	return 0;
}
