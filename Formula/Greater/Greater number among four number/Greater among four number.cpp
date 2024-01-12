#include<stdio.h>
int main()
{
	float n1,n2,n3,n4,max;
	printf("Enter any four number");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	max=n1>n2?n1>n3?n1>n4?n1:n4:n3>n4?n3:n4:n2>n4?n2:n4>n3>n4?n3:n4;
	printf("Greater number is=%f",max);
	return 0;
}
