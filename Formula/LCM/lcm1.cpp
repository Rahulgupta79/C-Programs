#include<stdio.h>
int main()
{
	int n1,n2,l=2;
	printf("\nEnter two numbers ");
	scanf("%d%d",&n1,&n2);
	while(l<=(n1*n2))
	{
		if(l%n1==0&&l%n2==0)
		break;
		l++;
	}
	printf("LCM=%d",l);
	return 0;
}
