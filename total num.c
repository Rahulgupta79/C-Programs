#include<stdio.h>
int main()
{
	int num,sum=0,num1;
	printf("\nEnter  Integer number:");
	scanf("%d",&num);
	do
	{
		num1=num%10;
		sum=sum+num1;
		num=num/10;
	}while(num!=0);
	printf("Total=%d",sum);
	/****************************
	long int num,num1,ar[10],i=0,ar1[10],j,k,l,p=0,m;
	printf("\nEnter number you want to know pelindrome:");
	scanf("%ld",&num);
	do
	{
		num1=num%10;
		ar[i]=num1;
		num=num/10;
		i++;
	}while(num!=0);
	for(m=0;m<=i;m++)
	{
		printf("%d",ar[m]);
	}
	for(k=0;k<=i;k++)
	{
		for(j=i;j<=0;j--)
		{
			ar1[k]=ar[j];
			break;
		}
	}
	k=0;
	for(l=0;l<=i;l++)
	{
		if(ar[l]==ar1[k])
		{
			k++;
		}
		else
		{
			p=1;
		}
	}
	if(p==0)
	{
		printf("Pelindrome");
	}
	else
	{
		printf("Not Pelindrome");
	}*/
	return 0;
}
