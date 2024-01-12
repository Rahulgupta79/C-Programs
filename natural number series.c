#include<stdio.h>
int main()
{
	int num,i,j,result=1;
	printf("\nEnter number:");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		result=result+i;
		printf("%d\t",result);	
	}
	return 0;
}
