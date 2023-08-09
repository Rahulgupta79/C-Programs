#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ar[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nEnter Number[%d]:",i+1);
		scanf("%d",&ar[i]);
	}
	long int Z;
	for(i=0;i<10;i++)
	{
		Z=Z*ar[i];
		printf("%d *",ar[i]);
	}
	printf("\b= %ld",Z);
	return 0;
}
