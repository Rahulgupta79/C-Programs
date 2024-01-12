#include<stdio.h>
#include<stdlib.h>
void printName(int n,char name[])
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\n%s",name);
	}
}
int main()
{
	int n;
	char name[20];
	printf("\nEnter how many times=");
	scanf("%d",&n);
	fflush(stdin);
	printf("\nEnter a name=");
	scanf("%[^\n]s",name);
	printName(n,name);
	return 0;
}
