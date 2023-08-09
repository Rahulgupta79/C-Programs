#include<stdio.h>
#define SIZE 100
int main()
{
	int ar[SIZE],i,n,rev=0;
	printf("\n Enter how many numbers you read :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter number :");
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		while(ar[i]!=0)
		{
			rev=(rev*10)+(ar[i]%10);
			ar[i]=ar[i]/10;
		}
		while(rev!=0)
		{
			switch(rev%10)
			{
			case 0:printf(" Zero");
			break;
			case 1:printf(" One");
			break;
			case 2:printf(" Two");
			break;
			case 3:printf(" Three");
			break;
			case 4:printf(" Four");
			break;
			case 5:printf(" Five");
			break;
			case 6:printf(" Six");
			break;
			case 7:printf(" Seven");
			break;
			case 8:printf(" Eight");
			break;
			case 9:printf(" Nine");
			break;
			}
			rev=rev/10;
		}
		printf("\n");
	}
	return 0;
}
