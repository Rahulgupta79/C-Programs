#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen("j.txt","w");
	if(fp==NULL)
	{
		printf("Error Found in file openning");
	}
	else
	{
		fputc('a',fp);//this function is use to store a character on file
		fprintf(fp,"\nI Love You Dad");//this function is use to store a string on file
	}
	return 0;
}
