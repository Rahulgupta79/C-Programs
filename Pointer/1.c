#include<stdio.h>
int main()
{
	int a,b,c,*pa=&a,*pb=&b,*pc=&c;
	printf("\nEnter two number:");
	scanf("%d %d",&a,&b);
	*pc=*pa+*pb;
	printf("Sum=%d",*pc);
	return 0;
}
