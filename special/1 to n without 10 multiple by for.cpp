#include<stdio.h>
int main()
{
	int n,i=0;
	printf("\nEnter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(i%10==0)
		continue;
	}
	printf("%d\t",i);
	return 0;
}
