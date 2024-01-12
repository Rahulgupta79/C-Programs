#include<stdio.h>
void Even(int num);
int main()
{
	int num;
	printf("\nEnter number =");
	scanf("%d",&num);
	printf("Even numbers =");
	Even(num);
	return 0;
}
void Even(int num)
{
	int i;
	for(i=2;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("\t%d\t",i);
		}
	}
}
