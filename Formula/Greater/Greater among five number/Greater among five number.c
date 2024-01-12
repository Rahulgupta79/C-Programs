#include <stdio.h>
int main()
{
 float n1,n2,n3,n4,n5;
 printf("Enter any five number");
 scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
 if(n1>n2&&n1>n3&&n1>n4&&n1>n5)
 printf("Greater number=%f",n1);
 else if (n2>n1&&n2>n3&&n2>n4&&n2>n5)
 printf("Greater number=%f",n2);
 else if(n3>n1&&n3>n2&&n3>n4&&n3>n5)
 printf("Greater number=%f",n3);
 else if(n4>n1&&n4>n2&&n4>n3&&n4>n5)
 printf("Greater number=%f",n4);
 else (n5>n1&&n5>n2&&n5>n3&&n5>n4);
 printf("Greater number=%f",n5);
  return 0;
}
