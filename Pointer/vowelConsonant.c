#include<stdio.h>
int vclength(char *str,int *vp,int *vc)
{
	int i=0;
	*vp=0;
	*vc=0;
	while(str[i]!='\0')
	{
		if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
		{
			if(str[i]=='A' || str[i]=='a'||str[i]=='E' || str[i]=='e'||str[i]=='I' || str[i]=='i'||str[i]=='O' || str[i]=='o'||str[i]=='U' || str[i]=='u')
			{
				*vp=(*vp)+1;
			}
			else
			{
				*vc=(*vc)+1;
			}		
		}
		i++;
	}
	return i;
}
int main()
{
	char str[30];
	int length,vowel,consonant;
	printf("\nEnter a string:\n");
	scanf("%[^\n]s",str);
	length=vclength(str,&vowel,&consonant);
	printf("\nLength=%d\nVowel=%d\nConsonant=%d",length,vowel,consonant);
	return 0;
}
