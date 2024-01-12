#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	printf("%u",printf);//ye function printf ka address deta hai 
	printf("\n%u",scanf);// ye function scanf ka address deta hai 
	printf("\n%u",sum);//ye function  sum ka address deta hai
	printf("\n%u",sum(5,7));//ye function parameter 5,7 ko sum function se add karke deta hai 
	printf("\n%u",printf);
	return 0;
}
