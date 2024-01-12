#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i;
	char name[20];
	printf("\nEnter how many numbers you want to print:");
	scanf("%d",&num);
	printf("\nEnter name:-");
	fflush(stdin);
	scanf("%[^\n]s",name);
	i=0;
	do
	{
		printf("%s\n",name);
		i++;
	}while(i<num);
	return 0;
}
