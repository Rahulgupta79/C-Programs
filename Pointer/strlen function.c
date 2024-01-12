#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int length;
	printf("Enter a string:");
	scanf("%[^\n]s",str);
	length=strlen(str);
	printf("Length of string =%d",length);
	return 0;
}
