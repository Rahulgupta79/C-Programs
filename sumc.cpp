#include<stdio.h>
int main()
{
	int num,i,p,j,m;
	printf("\nEnter a number");
	scanf("%d",&num);
	p=0;j=1;i=1;
	while(i<=num)
	{
		m=p+j;
		printf("%d\t",m);
		p=j;
		j=m;
		i++;
	}
	return 0;
}
