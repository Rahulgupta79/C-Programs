#include<stdio.h>
#include<stdlib.h>
int main()
{
	float num,root;
	printf("\nEnter Number for Square root:");
	scanf("%f",&num);
	root=sqrt(num);
	printf("Square root of %f =%.1f",num,root);
	return 0;
}
