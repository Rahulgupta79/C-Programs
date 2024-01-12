#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	long size=0;
	if(argc==2)
	{
		fp=fopen(argv[1],"rb");
		if(fp!=NULL)
		{
			if(fseek(fp,0,SEEK_END)==0)
			{
				size=ftell(fp);
			}
			printf("\nSize = %ld",size);
		}
		else
		{
			perror("\n Error in opening file");
		}
	}
	else
	{
		printf("\n File name is missing");
	}
	return 0;
}
