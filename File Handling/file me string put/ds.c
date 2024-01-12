#include<stdio.h>
int main()
{
	FILE *fp;
	char str[50];
	fp=fopen("ds.txt","w");
	if(fp==NULL)
	{
		printf("File not found");
	}
	else
	{
		printf("Enter string:");
		scanf("%[^\n]s",str);
		fprintf(fp,"%s",str);
	}
	return 0;
}
