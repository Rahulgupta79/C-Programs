#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fp1,*fp2;
	char ch;
	fp=fopen("c.txt","a+");
	fp1=fopen("a.txt","r");
	if(fp!=NULL)
	{
		if(fp1!=NULL)
		{
			while((ch=fgetc(fp1))!=EOF)
			{
				fputc(ch,fp);
			}
			printf("File fp1 copied");
			fclose(fp1);
			fclose(fp);
		}
	}
	fp=fopen("c.txt","a+");
	fp2=fopen("b.txt","r");
	if(fp!=NULL)
	{
		if(fp2!=NULL)
		{
			while((ch=fgetc(fp2))!=EOF)
			{
				fputc(ch,fp);
			}
			printf("File fp2 copied");
			fclose(fp2);
			fclose(fp);
		}
	}
	return 0;
}
