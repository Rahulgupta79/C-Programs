#include<stdio.h>
int main()
{
	int num;
	printf("Enter Week day number");
	scanf("%d",&num);
	if(num==1)
	{
		printf("\n Monday");
	}
	else if(num==2)
	{
		printf("\n Tuesday");
	}
	else if(num==3)
	{
		printf("\n Wednesday");
	}
	else if(num==4)
	{
		printf("\n Thursday");
	}
	else if(num==5)
	{
		printf("\n Friday");
	}
	else if(num==6)
	{
		printf("\n saturday");
	}
	else if(num==7)
	{
		printf("\n Sunday");
	}
	else 
	{
		printf("Error");
	}
	return 0;
}
