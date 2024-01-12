#include<stdio.h>
int main()
{
	int n,m,i,gcd;
	printf("\nEnter two number");
	scanf("%d%d",&n,&m);
	for(i=1;i<=n&&i<=m;i++)
	{
		if(n%i==0&&m%i==0)
		{
			gcd=i;
		}
	}
	printf("\nG.C.D of %d and %d:=%d",n,m,gcd);
	return 0;
}
