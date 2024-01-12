#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D,R1,R2;
	printf("Enter the value of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	D=b*b-4*a*c;
	if(D==0)
	{
		printf("Root1=Root2=%.2f",R1=-b/(2*a),R2=-b/(2*a));
	}
	else if(D>0)
	{
		printf("Root1=%.2f,Root2=%.2f",R1=(-b+sqrt(D))/(2*a),R2=(-b-sqrt(D))/(2*a));
   	}
   	else
   	{
   		printf("Roots are Imaginary");
	   }
	return 0;
}
