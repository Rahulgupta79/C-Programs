#include<stdio.h>
int main()
{
	char operator ('+' '-' '*' '/');
	float N1,N2,Sum,Sub,Mul,Div;
	printf("Enter Two Number");
	scanf("%f%f",&N1,&N2);
	Sum=N1+N2;
	Sub=N1-N2;
	Mul=N1*N2;
	Div=N1/N2;
	if '+' then 
	 printf("Sum=%f",Sum);
	end if;
	if '-' then
	 printf("Sub=%f",Sub);
	end if;
	if '*' then
	 printf("Mul=%f",Mul);
	end if;
	if '/' then 
	 printf("Div=%f".Div);
	end if;
	return 0;
}
