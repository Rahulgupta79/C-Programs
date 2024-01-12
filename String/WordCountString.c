#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 100
int main()
{
	int count=0;
	char str[SIZE];
	printf("\nEnter a string :");
	scanf("%[^\n]s",str);
	while(str!='\0')
	{
		count++;
	}
	printf("\n Word %d",count);
	return 0;
}
