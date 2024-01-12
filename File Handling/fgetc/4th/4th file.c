#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	/*
	fp=fopen("mabc.txt","w");
	if(fp==NULL)
	{
		perror("File couldn't open'");
	}
	else
	{
		printf("\n Enter the content of the file \n(press Ctrl+z or Ctrl + d to stop)");
		//printf("\n %u",fp);
		while((ch=getchar())!=EOF)
		{
			fputc(ch,fp);
			
		}
	//	printf("\n %u",fp);
		
	}
	fclose(fp);*/
	fp=	fopen("mabc.txt","r");
		if(fp!=NULL)
		{
		
			while((ch=fgetc(fp))!=EOF)
			{
				printf("%c",ch);
			}
		}
		else
		 perror("\n Error in opening file");
	return 0;
}
