#include<stdio.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	int i,vowel,consonant;
	printf("\nEnter a string--");
	scanf("%s",str);
	i=0;vowel=0;consonant=0;
	while(str[i]!='\0')
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
		{
			vowel++;
		}
		else
		{
			if((str[i]>'A' && str[i]<='Z') ||(str[i]>'a' && str[i]<='z'))
			consonant++;
		}
		i++;
	}
	printf("Consonant=%d",consonant);
	printf("\nVowel=%d",vowel);
	return 0;
}
