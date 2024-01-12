#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	if(fp==NULL)
	{
		printf("file is missing");	
	}
	else
	{
		fp=fopen("r.txt","a+");
		fprintf(fp,"I Love You");
		fscanf(fp,"r.txt");
		fclose(fp);
	}
	return 0;
}
