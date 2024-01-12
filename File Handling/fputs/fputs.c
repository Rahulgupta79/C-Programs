#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( )
{
	FILE *fptr;
	char str[80];
	int len;
	fptr=fopen("test.txt", "w");
	printf ( "Enter the text \n" ) ;
	printf ("To stop entering, press Ctrl+d in Unix and Ctrl+z in Dos\n");
	while ((gets (str) )!=NULL)
	{
		len=strlen(str);
		putw(len,fptr);
		fputs(str,fptr);
	}
		
	fclose(fptr); 
	
	fptr= fopen("test.txt","r");
	printf("\n The content in file test.txt is \n");
	while(1)
	{
		len=getw(fptr);
		fgets(str,len,fptr);
		if(str==NULL)
			break;
		printf("%s\n",str);
		
	}
	
	return 0;
}
