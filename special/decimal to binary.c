#include<stdio.h>
void binary(int n,int b)
{
	int r;
	if(n==0||n==1)
	{
		printf("%d",n);
	}
	else
	{
		if(n!=1)	
		{
			r=n%b;
			if(r>=10)
			{
				printf("%c",r+55);
			}
			else
			{
				
				n=n/b;
				binary(n,b);
				printf("%d",r);
			}
		}
	}
}
int main()
{
	int n,b;
	printf("\nEnter number and base =");
	scanf("%d%d",&n,&b);
	printf("\nBinary =");
	binary(n,b);
	return 0;
}
