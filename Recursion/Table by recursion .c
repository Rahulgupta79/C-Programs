#include<stdio.h>
void printT(int n,int j)
{
	printf("%d\n",n*j);
	if(j<10)
	printT(n,++j);
}
void printTable(int n)
{
	printT(n,1);
}
int main()
{
	int n;
	printf("\nEnter number");
	scanf("%d",&n);
	printTable(n);
	return 0;
}
