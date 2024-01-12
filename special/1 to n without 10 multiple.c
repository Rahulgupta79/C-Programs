#include<stdio.h>
int main()
{
	int i=0,n;
	printf("\nEnter a number");
	scanf("%d",&n);
	while(i<n)
	{
		i++;
		if(i%10==0)
		{
			continue;
		}
		printf("%d\t",i);
	}
	return 0;
}
