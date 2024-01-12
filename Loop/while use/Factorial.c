#include <stdio.h>
int main()
{
	int i,num,fact=1;
	printf("Enter a number to calculate it's factorial\n");
	scanf("%d", &num);
	for (i=1;i<=num;i++)
		fact=fact*i;
	printf("Factorial of %d = %d\n",num,fact);
	return 0;
}
