#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int vcount(char str[])
{
	int i,vowel=0;
	for(i=0;str[i]!='\0';i++)
		{
			if((str[i]>='A' && str[i]<='Z')|| (str[i]>='a' && str[i]<='z'))
			{
				if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
				{
					vowel++;
				}
			}
		}
	return vowel;
}
int main()
{
	char str[40];
	int vc;
	printf("Enter a String:");
	scanf("%[^\n]s",str);
	vc=vcount(str);
	printf("String is:%s  Vowel=%d",str,vc);
	return 0;
}
