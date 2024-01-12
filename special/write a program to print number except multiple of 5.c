#include<stdio.h>
int main()
{
	int a=5,i=1;
	for(i=1;i<=100;i++)
	{
		if(i%5==0)
		{
			continue;
		}
		else
		{
			printf("\t%d",i);
		}
	}
	return 0;
}
