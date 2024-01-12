#include<stdio.h>
void pfactor(int n)
{
	int i=2;
	if(n==1)
	{
		return ;
	}
	else
	{
		while(n%i!=0)
		{
			i++;
		}
		printf("%d\t",i);
		pfactor(n/i);
	}
}
int main()
{
	int n;
	printf("\nEnter number for prime factor =");
	scanf("%d",&n);
	pfactor(n);
	return 0;
}

