//ye code integer,float me bhut se number likhe ho to unme se kuchh read karane liye 
#include<stdio.h>
int main()
{
	float num1,num2;
	printf("Enter the Number:");
	scanf("%f%f",&num1,&num2);
	if(num1<num2)
	printf("\n greter num =%2.100f",num2);
	else
	printf("\n greter num =%2.100f",num1);
	return 0;
}
