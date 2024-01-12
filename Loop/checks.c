#include<stdio.h>
int main()
{
	int row,column,n;
	printf("\nEnter number");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(column=1;column<=n;column++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
