#include<stdio.h>
void Odd(n,m,i)
{
	printf("Odd =");
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		else
		{
			printf("\t%d\t",i);
		}
	}
}
int main()
{
	int n,m,i;
	printf("\nEnter two numbers =");
	scanf("%d%d",&n,&m);
	Odd(n,m,i);
	return 0;
}
