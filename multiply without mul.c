#include<stdio.h>
int main()
{
	int n,m,i;
	int result=0;
	printf("\nEnterb number for multiply:");
	scanf("%d%d",&n,&m);
	for(i=1;i<=m;i++)
	{
		result=result+n;
	}
	printf("%d * %d =%d",n,m,result);
	return 0;
}
