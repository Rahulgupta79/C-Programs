#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch[30];
	fp=fopen("fprintf.dat","wb");
	if(fp==NULL)
	{
		perror("File doesn't exists");
	}
	else
	{
		printf("Enter a string:");
		scanf("%[^\n]s",ch);
		fprintf(fp,"%s",ch);
	}
	return 0;
}
