#include<stdio.h>
#define ROW1 2
#define COL1 2
#define ROW2 COL1
#define COL2 3
int main()
{
	int mat1[ROW1][COL1],i,j,k;
	int mat2[ROW2][COL2],mat3[ROW1][COL2];
	printf("\nEnter element of Matrix[1]:");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n Enter element of matrix[2]:");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<COL2;k++)
			{
				mat3[i][j]+=mat1[i][j]+mat2[i][j];
			}
		}
	}
	printf("\n Enter Matrix[3]:");
	return 0;
}
