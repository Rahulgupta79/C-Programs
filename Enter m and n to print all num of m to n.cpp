#include<stdio.h>
int main()
{
	int m,n;
	printf("\n Enter m and n");
	scanf("%d%d",&m,&n);
	printf("%d\t",m);
	while(m!=n)
	{
		if(m<n)
		m++;
		else
		m--;
	printf("%d\t",m);
	}
	return 0;
}
