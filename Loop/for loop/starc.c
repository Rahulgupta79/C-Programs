#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	printf("Enter number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i!=n)
		{
			for(j=0;j<i;j++)
			{
				printf(" ");
			}
			printf("*");
			printf("\n");
		}
		
	}
	return 0;
}/*This progran run perfectly how much star you want to print
									*
								   **
								  ***
							     ****
								*****
*/
