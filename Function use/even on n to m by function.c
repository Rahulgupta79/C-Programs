#include<stdio.h>
void Even(n,m,i)
{
	printf("Even =");
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			printf("\t%d\t",i);
		}
		else
		{
			continue;
		}
	}
}
int main()
{
	int n,m,i;
	printf("\nEnter two numbers =");
	scanf("%d%d",&n,&m);
	Even(n,m,i);
	return 0;
}
