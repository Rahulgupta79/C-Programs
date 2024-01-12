#include<stdio.h>
#include<math.h>
int sum(int,int);
int main()
{
	int a,b,s;
	printf("\nEnter Two numbers");
	scanf("%d%d",&a,b);
	s=sum(a,b);
	printf("Sum of %d and %d =%d",a,b,s);
	return 0;
}
int sum(int x,int y)
{
	return (x+y);
}
