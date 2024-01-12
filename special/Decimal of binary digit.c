#include<stdio.h>
int main()
{
	int bit,rem,sum,i,dec;
	printf("\nEnter a binary number-:");
	scanf("%d",&bit);
	dec=0;
	i=1;
	while(bit>0)
	{
		rem=bit%10;
		sum=rem*i;
		dec=dec+sum;
		i=i*2;
		bit=bit/10;
	}
	printf("Decimal of binary number=%d",dec);
	return 0;
	//isme bit for binary number,rem for binary ka last ek digit uthane ke liye
	//sum for rem me base se multiply ke liye,i=base,dec for decimal number
}
