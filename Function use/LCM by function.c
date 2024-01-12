#include<stdio.h>
void Lcm(int n1,int n2)
{
	int l=2;
	while(l<=(n1*n2))
	{
		if(l%n1==0 && l%n2==0)
		break;
		l++;
	}
	printf("LCM of %d and %d =%d",n1,n2,l);
}
int main()
{
	int n1,n2;
	printf("\nEnter two number to find lcm =");
	scanf("%d%d",&n1,&n2);
	Lcm(n1,n2);
	return 0;
}
