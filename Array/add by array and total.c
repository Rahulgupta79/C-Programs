#include<Stdio.h>
int main()
{
	int num[7],sum=0,i;
	for(i=0;i<7;i++)
	{
		printf("\nEnter number:");
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	for(i=0;i<7;i++)
	{
		printf("%d+",num[i]);
	}
	printf("=%d",sum);
	return 0;
}
