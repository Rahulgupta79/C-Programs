#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*arr;
	printf("Enter number of element : ");
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	if(arr!=NULL)
	{
		for(i=0;i<n;i++)
		{
			printf("\nEnter %d element:",n);
			scanf("%d",(arr+i));
		}
		for(i=0;i<n;i++)
		{
			printf("%d  ",*(arr+i));
		}	
	}
	else
	{
		printf("\nArray is not Created dynamically.");
	}
	return 0;
}
