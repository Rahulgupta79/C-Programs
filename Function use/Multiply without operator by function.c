#include<stdio.h>
void Mult(n,m,i,j)
{
	for(i=n;i<=m;i++)
	{
		j=i+i;
	}
	printf("Multiple =%d",j);
}
int main()
{
	int n,m,i,j;
	printf("\nEnter Two numbers =");
	scanf("%d%d",&n,&m);
	Mult(n,m,i,j);
	return 0;
}
