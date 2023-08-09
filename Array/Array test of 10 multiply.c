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
		printf("%d *",ar[i]);
	}
	Z=ar[0]*ar[1]*ar[2]*ar[3]*ar[4]*ar[5]*ar[6]*ar[7]*ar[8]*ar[9];
	printf("\b=%ld",Z);
	return 0;
}
