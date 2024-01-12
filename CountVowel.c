#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char str[10];
    int vowel=0,consonant=0,i=0;
    printf("Enter a line=");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='E'|| str[i]=='i'|| str[i]=='I'|| str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
        i++;
    }
    printf("Vowel=%d\nConsonant=%d",vowel,consonant);
    return 0;
}