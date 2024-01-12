#include<stdio.h>
int sum (int a,int b)//function definition
    {
        return a+b;
    }
int main()
{
    int a=5,b=7;
    int p=sum(a,b);//call function
    printf("Add=%d",p);
    return 0;
}