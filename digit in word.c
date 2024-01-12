#include<stdio.h>
void printN_word(int n)
{
	if(n<0)
	{
		printf("minus");
		n=-n;
	}
	else
	{
		if(n!=0)
		{
			printN_word(n/10);
			printDigit(n%10);
		}
	}
}
int printDigit(int n)
{
		switch(n)
	{
		case 0:printf("\tZero");
		break;
		case 1:printf("\tOne");
		break;
		case 2:printf("\tTwo");
		break;
		case 3:printf("\tThree");
		break;
		case 4:printf("\tFour");
		break;
		case 5:printf("\tFive");
		break;
		case 6:printf("\tSix");
		break;
		case 7:printf("\tSeven");
		break;
		case 8:printf("\tEight");
		break;
		case 9:printf("\tNine");
		break;
	}	
}
int main()
{
	int n;
	printf("\nEnter number =");
	scanf("%d",&n);
	printN_word(n);
	return 0;
}
