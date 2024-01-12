#include<stdio.h>
void Odd(int num);
int main()
{
	int num;
	printf("\nEnter number =");
	scanf("%d",&num);
	printf("Odd numbers =");
	Odd(num);
	return 0;
}
void Odd(int num)
{
	int i;
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			continue;
		}
		else
		{
			printf("\t%d\t",i);
		}
	}
}
