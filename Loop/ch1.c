#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(i=1;i<=n;i++)
			{
			printf(" * ");
			printf("\n");
			}
		}
	printf("\n");
	}
	return 0;
}
