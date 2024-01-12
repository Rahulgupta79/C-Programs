#include<stdio.h>
int main()
{
	int num,r,x,t;
	printf("\nArmstrong nmbers");//the number which every digit of cube is digit
	for(num=1;num<=1000;num++)
	{
		r=0;
		x=num;
		while(x!=0)
		{
			t=x%10;
			r=r+t*t*t;
			x=x/10;
		}
		if(r==num)
		printf("\n %d \n",num);
		
	}
	return 0;
}

/*
#include<stdio.h>
int main()
{
	int num,rem,sum=0;
	printf("\nEnter any number");
	scanf("%d",&num);
	while(num!=0)
	{
	rem=num%10;
	sum=sum+rem*rem*rem;
	num=num/10;
	}
	if(num==sum)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
	return 0;
}
*/
