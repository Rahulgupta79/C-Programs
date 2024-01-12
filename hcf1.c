#include<stdio.h>
int Hcf(n1,n2,rev)
{
	int rem=0,rev=0;
	rev=rem;
	if(n1>n2)
	{
		rem=n2%n1==0;
		if(rem==0)
		{
			return n2;
		}
		else
		{
			while(rev!=0)
			{
				rev=rev%n2;
			}
			return rev;	
		}
	}
	else
	{
		rem=n1%n2==0;
		while(rem!=0)
		{
			
		}
		return n1;
	}
}
int main()
{
	int n1,n2,rem;
	printf("\nEnter two number for HCF =");
	scanf("%d%d",&n1,&n2);
	rem=Hcf();
	printf("HCF=%d",rem);
	return 0;
}
