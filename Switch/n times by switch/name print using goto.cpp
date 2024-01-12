#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,n;
	char name[20];
	printf("Enter a Name=");
	scanf("%[^\n ]s",&name);
	printf("How many times");
	scanf("%d",&n);
	system("cls");
	PRINT:printf("%s",name);
			i++;
	if(i<n)
	{
		goto PRINT;
	}
	return 0;
}
