#include<stdio.h>
void Number(int num)
{
	if(num<1)
	{
		printf("Undefine");
	}
	else
	{
		if(num!=0)
		{
			Number(num-1);
			printf("%d\t",num);
		}
	}
}
int main()
{
	int num;
	printf("\nEnter number");
	scanf("%d",&num);
	Number(num);
	return 0;
}
