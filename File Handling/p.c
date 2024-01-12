#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("ab.txt","w");
	if(fp==NULL)
	{
		printf("Error");
	}
	else
	{
		printf("File is opened");
		while((ch=fgetc(fp))!=EOF)
		{
			printf("%c",ch);
		}
		fclose(fp);
	}
	return 0;
}
