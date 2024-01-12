#include<stdio.h>
int main()
{
	int n,m,i,t;
	printf("\nEnter two number");
	scanf("%d%d",&n,&m);
	i=0;
	while(i<m)
	{
		t=n+i;
		printf("\n%d",t);
		i=i+2;
	}
	return 0;
}
