#include<stdio.h>
int main()
{
	int num,i;
	printf("\n Enter a number");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		printf("%d\t",i);
		i++;
	}
	return 0;
}
