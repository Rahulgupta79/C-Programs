#include<stdio.h>//kuchh header file ka nam likhe hai jiska program se koi taluk nhi hai 
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
	int i;
	char str1[10],str2[10];
	printf("\nEnter First Word:");
	scanf("%s",str1);
	printf("\nEnter Second Word:");
	scanf("%s",str2);
	if(strcmp(str1,str2)==0)
	{
		printf("\nWords Are same");
	}
	else
	{
		printf("\nWords Are not same");
	}
	return 0;
}
