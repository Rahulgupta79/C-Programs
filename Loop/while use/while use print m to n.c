#include<stdio.h>
int main()
{
	int m,n;
	printf("\n Enter number");
	scanf("%d",&m);
	printf("\n Enter number");
	scanf("%d",&n);
	if(m<n)
	{
		while(m<=n)
		{
			printf("\n%d\t",m);
			m++;	
		}
	}
	else
	{
		while(m>=n)
		{
			printf("\n%d\t",m);
			m--;	
		}
	}
	return 0;
}
