#include<stdio.h>
int main()
{
	int num,d,p;
	printf("\n Enter a number");
	scanf("%d",&num);
	p=0;
	while(num!=0)
	{
		d=num%10;
		p=p+d;
		num=num/10;
	}
	printf("Add of given number=%d",p);
	return 0;
}
