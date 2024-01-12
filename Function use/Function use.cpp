#include<stdio.h>
void printintro();//Declaration
int sum(int,int);//Declaration
int main()
{
	int a,b,s;
	printintro();//call of printintro
	printf("\nEnter two numbers");
	scanf("%d%d",&a,&b);
	s=sum(a,b);//call of sum
	printf("\nSum of %d and %d =%d",a,b,s);
	return 0;
}
int sum(int x,int y)//definition of sum
{
	return (x+y);
}
void printintro()//definition of printrointro
{
	printf("Hello Dear Welcome to my world");
}
  	

