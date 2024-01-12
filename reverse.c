#include<stdio.h>
int main()
{
	int num,rev,rem,n;
	printf("\nEnter number");
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		rem=num%10;
		rev=num/10;
	}
	printf("Reverse of %d is=%d",num,rem);
	return 0;
}
