#include<stdio.h>
int main()
{
	int i=1;
	if(i++ && i==1)
	{
		printf("T");
	}
	else
	{
		printf("F");
	}
	return 0;
}
