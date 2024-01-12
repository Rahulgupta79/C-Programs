#include<stdio.h>
void printT(int num)
{
	int i,j;
	if(num<=10)
	{
		for(i=1;i<=10;i++)
		{
			for(j=1;j<=num;j++)
	    	{	
			printf("%d *%2d=%2d",j,i,j*i);
			printf("\t");
		    }
		    printf("\n");
		}
    }
    else
    {
    	for(i=1;i<=10;i++)
		{
			for(j=11;j<=num;j++)
	    	{	
			printf("%d *%2d=%2d",j,i,j*i);
			printf("\t");
		    }
		    printf("\n");
		}
	}
	
}
int main()
{
	int num;
	printf("\nEnter number:");
	scanf("%d",&num);
	printT(num);
	return 0;
}
