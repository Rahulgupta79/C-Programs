#include<stdio.h>
int main()
{
	float n1,n2,n3;
	printf("Enter any three number");
	scanf("%f%f%f",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
     	{
			printf("Greater number is=%.2f",n1);
	    }
	else if(n2>n1&&n2>n3)
		{
			printf("Grater number is=%.2f",n2);
		}
	else if(n3>n1&&n3>n2)
		{
			printf("Greater number is=%.2f",n3);
		}
	return 0;
}
