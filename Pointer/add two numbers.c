#include<stdio.h>
void calculate(int a,int b,int *pa,int *ps,int *pm)
{
	*pa=(a+b);//pointer me hota sirf yahi hai ki koi value hm variable me assign karne nhi jate hai
	*ps=(a-b);//direct uske location pr rakhte hai 
	*pm=(a*b);//is question me add karna tha to hmne dono value ko add kiya aur 3rd variable ke address pr assign kiye
}
int main()
{
	int x,y,sum,sub,mul;
	printf("\nEnter two Number:");
	scanf("%d %d",&x,&y);
	calculate(x,y,&sum,&sub,&mul);
	printf("Sum=%d\nSub=%d\nMul=%d",sum,sub,mul);
	return 0;
}

