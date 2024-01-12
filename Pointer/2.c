#include<stdio.h>
int main()
{
	int a=5,*pa,*pb,**paa;
	pa=&a;
	pb=&a;
	paa=&pa;
	printf("%d \n%d\n%d\n%d",pa,pb,*pa,*pb);
	printf("\n%d",*paa);
	return 0;
}
