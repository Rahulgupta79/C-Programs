#include<stdio.h>
int main()
{
	int num;
	printf("Enter Number=");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("\tSunday");
		break;
		case 2:printf("\tMonday");
		break;
		case 3:printf("\tTuesday");
		break;
		case 4:printf("\tWednesday");
		break;
		case 5:printf("\tThrusday");
		break;
		case 6:printf("\tFriday");
		break;
		case 7:printf("\tSaturday");
		break;
		default:printf("\tPlease enter number 0 to 7");
	}
	return 0;
}
