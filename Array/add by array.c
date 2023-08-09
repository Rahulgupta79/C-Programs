#include<Stdio.h>
int main()
{
	int num[7],i;
	for(i=0;i<7;i++)
	{
		printf("\nEnter number:");
		scanf("%d",&num[i]);
	}
	for(i=0;i<7;i++)
	{
		printf("%d+",num[i]);
	}
	return 0;
}
