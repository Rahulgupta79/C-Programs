#include<stdio.h>
#include<string.h>
int main()
{
	char str[20],str1[20];
	puts("Rahul is good boy");
	gets(str);
	strcpy(str1,str);
	puts(str1);//puts function strlen function ko support nhi karta hai
	
	return 0;
}
