#include<stdio.h>
void printN(int num)
{
	if(num!=1)
	printN(num-1)
	printf("%d\t",num);
}
int main()
{
	int num;
	printf("\nEnter number for 1 to n");
	scanf("%d",&num);
	printN(num);
	return 0;
}
