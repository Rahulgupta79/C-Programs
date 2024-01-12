#include<stdio.h>
int main()
{
	int c;
	c=getchar();
	if(c!=EOF)
	putchar(c+32);
	else
	printf("Not store");
	return 0;
}
