#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	printf("Enter argc Value:");
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		FILE *fp;
		fp=fopen("m.txt","w+");
		if(fp==NULL)
		{
			printf("File is missing");
		}
		else
		{
			fprintf(fp,"I am Great Programmer");
		}
	}
	return 0;
}
