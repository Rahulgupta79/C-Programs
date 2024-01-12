#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1;
	char ch;
	fp1=fopen("a.txt","r");
	fp=fopen("c.txt","w");
	if(fp!=NULL)
	{
		if(fp1!=NULL)
		{
			while((ch=fgetc(fp1))!=EOF)
			{
				fputc(ch,fp);
			}
			printf("File copied");
			fclose(fp1);
			fclose(fp);
		}
		else
		{
			perror("fp1 not open");
		}
	}
	else
	{
		perror("File not open");
	}
	return 0;
}
