//This code is written for write information
#include<stdio.h>
int main()
{
	FILE *fp;
	int mo;
	char name[20];
	fp=fopen("file.txt","w");
	printf("Enter Name:");
	scanf("%[^\n]s",name);
	printf("Mobile:");
	scanf("%d",&mo);
	fprintf(fp,"Name-%s",name);
	fprintf(fp,"\nMobile-%d",mo);
	fclose(fp);
	return 0;
}

//This code is written for read data from present file
/*
#include<stdio.h>
int main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("file.txt","r");
	if(ptr==NULL)
	{
		printf("Invalid Address");
	}
	else
	{
		while(ptr!=EOF)
		{
			ch=fgetc(ptr);
			printf("%c",ch);
		}
		fclose(ptr);
	}
	return 0;
}
*/
