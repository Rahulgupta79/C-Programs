#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
	char str[30];
	int i;
	printf("\nEnter a string:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
	return 0;
}
