#include<stdio.h>
int main()
{
	int n,i;
	printf("\nEnter number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d",i);
		if(i!=1)
		{
			printf("+");
		}
	}
	return 0;
}
