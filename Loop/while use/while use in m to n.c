#include<stdio.h>
int main()
{
	int num,num2;
	printf("\n Enter ster number");
	scanf("%d",&num);
	printf("\n Enter end number");
	scanf("%d",&num2);
	if(num<num2)	
		while(num<num2)
		{
			printf("%d",num);
			num++;
		}
	else if(num>num2)

		while(num>num2)
		{
			printf("%d",num2);
			num--;
		}
	else(num==num2);
	printf("%d",num);
	return 0;
}
