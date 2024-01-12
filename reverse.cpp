#include<stdio.h>
int main()
{
	int num,rem,str=0;
	printf("\nEnter number");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		str=str*10+rem;
		num=num/10;
	}
	printf("Reverse =%d",str);
	return 0;
}
