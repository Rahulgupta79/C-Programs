#include<stdio.h>
int main()
{
	int num,count=0;
	printf("\nEnter number:");
	scanf("%d",&num);
	/*do
	{
		num=num/10;				//	do while loop
		count++;
	}while(num!=0);*/
	
/*	while(num!=0)
	{							//	while loop
		num=num/10;
		count++;
	}*/
	for(;num!=0;num=num/10)
	{								//	for loop
		count++;
	}
	printf("Digit=%d",count);
	return 0;
}
