#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *cp;
	char str;
	cp=fopen("cp.txt","w");
	while((str=getchar())!=EOF)
	{
		putc(str,cp);
	}
	fclose(cp);
	cp=fopen("cp.txt","r");
	while((str=getc())!=EOF)
	{
		printf("%c",str);
	}
	fclose(cp);
	return 0;
}
