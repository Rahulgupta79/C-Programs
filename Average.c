#include<stdio.h>
int main()
{
	int num,rem,count,sum,avr;
	printf("\nEnter numbers");
	sum=0;
	count=0;
	while(num<=0)
	{
		scanf("%d",&num);
		rem=num%10;
		sum=sum+rem;
		count=count+1;
		num=num/10;
		avr=sum/count;
	}
	printf("Average=%d",avr);
	return 0;
}
/*
#include<stdio.h>
int main()
{
	int n,i=0;
	float num,sum;
	printf("\nEnter total number");
	scanf("%d",&n);
	sum=0;
	while(i<n)
	{
		printf("\nEnter numbers%d :",i+1);
		scanf("%f",&num);
		sum=sum+num;
		i++;
	}
	printf("\nAverage =%f",sum/n);
	return 0;
}*/

