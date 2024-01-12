#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char num[20],fath[20];
	printf("\nEnter your name:-");
	scanf("%[^\n]s",num);
	fflush(stdin);
	printf("\nEnter your father name:");
	scanf("%[^\n]s",fath);
	printf("\n---------------------------------------");
	printf("\n%s",num);
	printf("\n%s",fath);
	printf("\n---------------------------------------");
	return 0;
}
