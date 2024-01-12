#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("abc.txt","w");
	if(fp==NULL)
	{
		perror("File could");
	}
	else
	{
		printf("File is opening");
	}
	return 0;
}
