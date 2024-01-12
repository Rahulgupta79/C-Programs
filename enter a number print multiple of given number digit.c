#include<stdio.h>
int main()
{
	int num,rem,mul;
	printf("\nEnter number");
	scanf("%d",&num);
	mul=1;
	while(num>0)
	{
		rem=num%10;
		mul=mul*rem;
		num=num/10;
	}
	printf("\nMultiple of digit=%d",mul);
	return 0;
}
