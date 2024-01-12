#include<stdio.h>
#include<stdlib.h>
int main()
{
	char n[20],m[20];
	printf("\nEnter your name:-");
	scanf("%[^\n]s",n);
	fflush(stdin);
	printf("\nEnter your address:");
	scanf("%[^\n]s",m);
	printf("\n%s\n\n%s",n,m);
	return 0;
}
