#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age=");
	scanf("%d",&age);
	if(age<18)
	{
		printf("\n You are a Child");
	}
	else
	{
		printf("\n You are a Adult");
	}
	return 0;
}
