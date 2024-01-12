#include<stdio.h>
int main()
{
	long int decimalN,quotient;
	int binaryN[100],i=1,j;
	printf("Enter any Decimal Number");
	scanf("%ld",&decimalN);
	quotient=decimalN;
	while(quotient!=0)
	{
		binaryN[i++]=quotient%2;
		quotient=quotient/2;
	
	}
	printf("Equivalent binary value of decimal number%d:-",decimalN);
	for(j = i-1; j>0; j--)
    printf("%d",binaryN[j]);
    return 0;
}
