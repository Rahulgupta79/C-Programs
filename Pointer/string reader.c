#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<ctype.h>
int main()
{
	char str[]="Rahul",*p;
	p=str;
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;
	}
	return 0;
}
