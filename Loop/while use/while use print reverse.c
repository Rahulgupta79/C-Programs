#include<stdio.h>
int main()
{
	int num,rev,rem;
	printf("\nEnter a number");
	scanf("%d",&num);
	rev=0;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("Reverse=%d",rev);
	return 0;
}
