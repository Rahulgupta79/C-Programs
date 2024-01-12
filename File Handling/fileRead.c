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
