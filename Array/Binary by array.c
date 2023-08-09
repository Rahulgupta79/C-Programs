#include<stdio.h>
int main()
{
 	long long int deci,quo;
	int bit[200],i=1,j;
	printf("\nEnter a decimal number:");
	scanf("%lld",&deci);
	quo=deci;
	while(quo!=0)
	{
		bit[i++]=quo%2;
		quo=quo/2;
	}
	printf("\n%d of binary=",deci);
	for(j=i-1;j>0;j--)
	{
		printf("%d",bit[j]);
	}
	return 0;
}
