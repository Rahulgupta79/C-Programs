#include<stdio.h>
int main()
{
	int num,num2;
	printf("\n Enter start number:");
	scanf("%d",&num);
	printf("\n Enter end number:");
	scanf("%d",&num2);
	if(num<num2)	
		while(num<num2)
		{
			printf("%d\t",num);
			num++;
		}
	else if(num>num2)

		while(num>num2)
		{
			printf("%d\t",num2);
			num--;
		}
	else(num==num2);
	printf("%d\t",num);
	return 0;
}
