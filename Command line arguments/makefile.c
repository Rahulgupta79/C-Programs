#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int i=1;
	FILE *fp;
	char ch;
	if(argc==3)
	{
		if(strcmp(argv[1],"-m")==0)
		{
			fp=fopen(argv[2],"w");
			if(fp==NULL)
			{
				perror("File can not be created");
			}
			else
			{
				while((ch=getchar())!=EOF)
				{
					fputc(ch,fp);			
				}
			}
			fclose(fp);
		}
		else if(strcmp(argv[1],"-r")==0)
		{
			fp=fopen(argv[2],"r");
			if(fp==NULL)
			{
				perror("File can not read");
			}
			else
			{
				while((ch=fgetc(fp))!=EOF)
				{
					printf("%c",ch);
				}
			}
			fclose(fp);
		}
		else
		{
			printf("\n Invalid syntax of makefile please type \"makefile -h\" for help");	
		}
			
	}
	else if(argc==2)
	{
		if(strcmp(argv[1],"-h")==0)
		{
			printf("help manual");
		}
		else if(strcmp(argv[1],"-m")==0)
		{
			printf("\nmissing file name");	
		}
		else if(strcmp(argv[1],"-r")==0)
		{
			printf("\nMissing filename");	
		}
	}
	else
	{
		printf("\n Invalid syntax of makefile please type \"makefile -h\" for help");
	}
	return 0;
}

