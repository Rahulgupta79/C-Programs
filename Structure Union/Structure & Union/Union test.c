#include<stdio.h>
#include<stdlib.h>
union trp
{
	int roll;
	char channel[10];
	float reviews;
};
int main()
{
	union trp zee;
	printf("%d",sizeof(zee));
	return 0;
}
