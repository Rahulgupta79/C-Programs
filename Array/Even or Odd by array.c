#include<Stdio.h>
int main()
{
	int num[7],i,j=2,flag=0;
	for(i=0;i<7;i++);
	{
		printf("\nEnter number:");
		scanf("%d",&num);
		if(num[i]%j==0)
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
		if(flag==1)
		{
			printf("Even %d",num[i]);
		}
		else
		{
			printf("Odd %d",num[i]);
		}
	}
	return 0;
}
