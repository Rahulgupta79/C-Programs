#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\nEnter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
		sum=sum+i;
		if(i!=n)
		{
			printf("+");
		}
	}
	printf("=%d",sum);
	return 0;
}
