#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number=");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\tJanuary");
		break;
		case 2:printf("\tFebruary");
		break;
		case 3:printf("\tMarch");
		break;
		case 4:printf("\tApril");
		break;
		case 5:printf("\tMay");
		break;
		case 6:printf("\tJune");
		break;
		case 7:printf("\tJuly");
		break;
		case 8:printf("\tAugust");
		break;	
		case 9:printf("\tSeptember");
		break;
		case 10:printf("\tOctober");
		break;
		case 11:printf("\tNovember");
		break;
		case 12:printf("\tDecember");
		break;
		default:printf("\tPlease enter number 0 to 12");
	}
	return 0;
}
