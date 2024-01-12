#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//'r' mode file agr phle se exist karta hai tb file read hoti hai exist phle se n karta ho to open nhi hoga
int main ( )
{
	FILE *fp;
	char ch;
	if((fp=fopen("l.txt","r"))==NULL)
	{
		printf("The file doesn't exist'");
	}
	else
	{
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
	}
	fclose(fp);
	return 0;
}
