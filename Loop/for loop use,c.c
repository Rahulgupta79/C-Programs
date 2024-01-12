#include<stdio.h>
int main()
{
	int num,i;
	printf("\nEnter number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",i);
		if(i==10)
		{
			printf("\n");
		}
	}
	return 0;
}
