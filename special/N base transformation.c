//wap to convert decimal to base 9 
#include<stdio.h> 
int main()
{   
   int num,base,r,n,isStart=1,zero=0,rev=0;   
   printf("\n Enter number ");   
   scanf("%d",&num);   
   printf("\n Enter base ");   
   scanf("%d",&base);      
   n=num;      
   printf("\n Representation of %d  in base %d is ",n,base);
   while(num!=0)
   {
     r=num%base;
     if(isStart==1&&r==0)
      {
       zero++;
       }
     else
      {
      isStart=0;
      }
    rev=rev*10+r;
    num=num/base;
   }
   while(rev!=0)
     {
     printf("%d",rev%10);
     rev=rev/10;
     }
   while(zero>0)
     {
     printf("0");
     zero--;
     }
   return 0;
   }

