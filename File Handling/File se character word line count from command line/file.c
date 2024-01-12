#include<stdio.h>
int main(int argc, char *argv[])
{
	int i=1;
	char ch;
	FILE *fp;
	if(argc==3)
	{
		if(strcmp(argv[1],"-cr")==0)
		{
			fp=fopen(argv[2],"r");
			while((ch=fgetc(fp))!=EOF)
			{
				i++;
			}
			printf("Total Character-%d",i);
			fclose(fp);
		}
		else if(strcmp(argv[1],"-wr")==0)
		{
			fp=fopen(argv[2],"r");
			while((ch=fgetc(fp))!=EOF)
			{
				if(ch==' ')
				{
					i++;
				}
				else
				{
					continue;
				}
			}
			printf("Total Word-%d",i);
			fclose(fp);
		}
		else if(strcmp(argv[1],"-lr")==0)
		{
			fp=fopen(argv[2],"r");
			while((ch=fgetc(fp))!=EOF)
			{
				if(ch=='\n')
				{
					i++;
				}
				else
				{
					continue;
				}
			}
			printf("Total Line-%d",i);
			fclose(fp);	
		}
		else
		{
			printf("Command is not proper");
		}
	}
	else
	{
		printf("Command Not match\nCommand-:\n-cr=character count\n-wr=word count\n-lr=line count\nPlease type file command filename.extenction");
	}
	return 0;
}
