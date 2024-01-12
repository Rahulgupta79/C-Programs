#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter How much table you get =");
	scanf("%d",&num);
	Table(num);
	return 0;
}
int Table(int num)
{
	int i=1,t=1,p;
	do
	{
		while(i<=10)
		{
			p=t*i;
			printf("\n%d*%d =%d",t,i,p);
			i++;
		}
		t++;
	}while(t!=num);
}
