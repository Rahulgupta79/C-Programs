#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int calculate(int a,int b,int (*fp)(int,int))
{
	return fp(a,b);//ye function do number lekar use fp ki madad se us function ko call karta hai 
}
int main()
{
	int a,b,result;
	printf("\nEnter Two numbers:");
	scanf("%d%d",&a,&b);
	result=calculate(a,b,sum);//yaha a,b ko pass kiya gya hai aur sum function ko call kiya gya hai jo
	printf("%d",result);//fp function ke andar call hota hai aur o jo bhi return kare use fp function store kar leta hai
	return 0;//jise result assign kar print kar deta hai 	
}
