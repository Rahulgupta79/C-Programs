#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("Enter a string1:");
	scanf("%s",str1);
	printf("\nEnter a String2:");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Same");
	}
	else
	{
		printf("Unsame");
	}
	return 0 ;
}
