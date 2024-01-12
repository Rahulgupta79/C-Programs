#include<stdio.h>
int main()
{
	char p[200];
	printf("\t\t\tEnter a paragraph\n");
	scanf("%[^#]s",&p);
	printf("%s",p);
	return 0;
}
