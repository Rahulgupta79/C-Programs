#include<stdio.h>
int main()
{
	char c;
	FILE *fp,*fp1;
	fp=fopen("pic.jpg","wb");
	fp1=fopen("ps.jpg","rb");
	if(fp1!=NULL)
	{
		/*while((c=fgetc(fp1))!=EOF)
		{
			fputc(c,fp);
		}*/
		char ch;
		while(fread(&ch,1,1,fp1)==1)
		{
			fwrite(&ch,1,1,fp);
		}
		fclose(fp1);
		fclose(fp);
	}
	return 0;
}
