#include<stdio.h>
void reverse(int num)
{
	int rem;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		printf("%d",rem);
	}
}
int main()
{
	int num;
	printf("\nEnter number:");
	scanf("%d",&num);
	reverse(num);
	return 0;
}
