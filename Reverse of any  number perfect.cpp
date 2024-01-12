#include<stdio.h> 
 int main() 
{ 
 int num,d,n;
 printf("\nEnter number"); 
 scanf("%d",&num); 
 n=num; 
 while(num!=0) 
 { 
	d=num%10; 
	printf("%d",d);
	num=num/10;
 } 
 printf("\nReverse of %d is",n); 
 return 0; 
}
