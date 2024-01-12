//ye code integer,float me bhut se number likhe ho to unme se kuchh read karane liye 
#include<stdio.h>
int main()
{
	float n1,n2,G;
	printf("Enter Two Numbers");
	scanf("%f%f",&n1,&n2);
	G=n1>n2 ? n1 : n2;
	printf("Greater number is=%f",G);
	return 0;
}
