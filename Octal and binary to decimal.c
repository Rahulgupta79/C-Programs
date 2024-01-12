#include<stdio.h>
int func(int num,int base)
{
	int rem,d,j=1,dec=0;
	while(num>=1)
	{
		rem=num%10;
		d=rem*j;
		dec=dec+d;
		j=j*base;
		num=num/10;
	}
	return dec;
}
int main()
{
	int num,base,result;
	char choice;
	printf("\nEnter 'b' for binary and 'o' for octal:");
	scanf("%c",&choice);
	printf("\nEnter number:");
	scanf("%d",&num);
	if(choice=='b')
	{
		base==2;
	}
	else
	{
		base==8;
	}
	result=func(num,base);
	printf("\nDecimal number =%d",result);
	return 0;
}

