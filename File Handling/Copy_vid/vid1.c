#include<stdio.h>
int main(int argc,char *argv[])
{
	char ch;
	FILE *fp,*fp1;
	fp=fopen(argv[2],"wb");
	if(argc==3)
	{
		fp1=fopen(argv[1],"rb");
		if(fp1!=NULL)
		{
			char ch;
			while(fread(&ch,1,1,fp1)==1)
			{
				fwrite(&ch,1,1,fp);
			}
			printf("File copied");
			fclose(fp1);
			fclose(fp);
		}
		else
		{
			perror("file not be open");
		}
	}
	else
	{
		perror("command missmatch");
	}
	return 0;
}
