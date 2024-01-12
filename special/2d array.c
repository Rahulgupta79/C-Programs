#include<stdio.h>
#define ROW 2
#define COL 3
int main()
{
	int mat1[ROW][COL],i,j;
	int mat2[ROW][COL],mat3[ROW][COL];
	printf("\n Enter element for matrix[1]:");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n Enter element for matrix[2]:");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("\n\n\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
