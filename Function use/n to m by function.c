#include<stdio.h>
void Print(n,m,i)
{
	printf("Number =");
	for(i=n;i<=m;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int n,m,i;
	printf("\nEnter two numbers =");
	scanf("%d%d",&n,&m);
	Print(n,m,i);
	return 0;
}
