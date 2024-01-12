#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[50];
	int a,b;
	char ch;
	double d;
	/*
	printf("\n Enter string ");
	scanf("%[^\n]s",str);
	fflush(stdin);
	printf("\n Enter two int ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("\n Enter a char ");
	scanf("%c",&ch);
	printf("\n Enter a double ");
	scanf("%lf",&d);
	fp=fopen("abc.txt","w");
	if(fp!=NULL)
		fprintf(fp,"String=%s  a=%d b=%d ch= %c and d= %.2lf",str,a,b,ch,d);
	else
		perror("\n Error in opening file");
	fclose(fp);
	*/
	fp=fopen("abc.txt","r");
	if(fp!=NULL)
	{
		fscanf(fp,"String=%s  a=%d b=%d ch= %c and d= %lf",str,&a,&b,&ch,&d);
		fprintf(stdout,"String=%s  a=%d b=%d ch= %c and d= %.2lf",str,a,b,ch,d);
	}
	else
	 perror("error");
	return 0;
}
