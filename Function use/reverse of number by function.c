#include<stdio.h>
void printMessage(int num,int rev)
{
	printf("Reverse of %d = ",rev);
	while(num!=0)
	{
	printf("%d",num%10);
	num=num/10;
	}
}
int main()
{
	int num,rev;
	printf("\t\tHello Dear ");
	printf("\nEnter number which you like to Reverse =");
	scanf("%d",&num);
	rev=num;
	printMessage(rev,num);
	return 0;
}

