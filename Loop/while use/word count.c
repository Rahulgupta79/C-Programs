#include<stdio.h>
#define SIZE 100
int main()
{
	char str[SIZE];
	int i=0,count=0;
	printf("\nEnter your string:");
	scanf("%[^\n]s",str);
	while(str[i]!='\0' && str[i]==' ')
	{
		i++;
	}
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
			while(str[i]==' ')
			{
				i++;
			}
		}
		i++;
	}
	count++;
	printf("Count=%d",count);
	return 0;
}
