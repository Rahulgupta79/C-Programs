#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	int value;
	fp=fopen("k.txt","w");
	for(value=1;value<=30;value++)
	{
		putw(value,fp);//putw scanf ki tarah kam karta hai
	}
	for(value=1;value<=30;value++)
	{
		printf("%d ",value);
	}
	return 0;
}
