#include<stdio.h>
int main()
{
	int num,i;
	printf("\nEnter a number for 1 to n:");
	scanf("%d",&num);
	if(num<0)
	{
		printf("please give vali number again");
	}
	else 
	{
		for(i=1;i<=num;i++)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
