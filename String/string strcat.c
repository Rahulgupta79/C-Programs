#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	fflush(stdin);
	printf("\nEnter first string:");
	scanf("%[^\n]s",str1);
	fflush(stdin);
	printf("\nEnter second string:");
	scanf("%[^\n]s",str2);
	fflush(stdin);
	printf("First-%s\nSecond-%s\n",str1,str2);
	strcat(str1,str2);
	printf("strcat-%s",str1);
	return 0;
}
