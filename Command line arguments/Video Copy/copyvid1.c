#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char ch;
	FILE *fp,*fp1,*fp2;
	fp=fopen(argv[3],"ab");
	if(argc==4)
	{
			fp1=fopen(argv[1],"rb");
			//while((ch=fgetc(fp1))!=EOF)
			while(fread(&ch,1,1,fp1)==1)
			{
				//fputc(ch,fp);
				fwrite(&ch,1,1,fp);
			}
			printf("Fp1 copied\t");
			fclose(fp1);
			fp2=fopen(argv[2],"rb");
		/*	while((ch=fgetc(fp2))!=EOF)
			{
				fputc(ch,fp);
			}*/
			fseek(fp,0,SEEK_END);
			while(fread(&ch,1,1,fp2)==1)
			{
				//fputc(ch,fp);
				fwrite(&ch,1,1,fp);
			}
			printf("Fp2 copied");
			fclose(fp2);
			fclose(fp);
	}
	else
	{
		perror("File not open");
	}
	return 0;
}
