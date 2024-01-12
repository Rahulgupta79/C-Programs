#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void printmsg(int fact,int i,int num)
{
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial =%Ld",fact);
}
int main()
{
	int num,i;
	 unsigned long long int fact=1;
	printf("\nEnter Number");
	scanf("%d",&num);
	fflush(stdin);
	printmsg(fact,i,num);
	return 0;
}
