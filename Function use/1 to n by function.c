#include<stdio.h>
void Print(num,i)
{
	printf("Number =");
	for(i=1;i<=num;i++)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int num,i;
	printf("\nEnter number =");
	scanf("%d",&num);
	Print(num,i);
	return 0;
}
