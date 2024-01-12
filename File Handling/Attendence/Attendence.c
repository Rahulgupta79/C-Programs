#include<stdio.h>
#include<stdlib.h>
FILE *fp;
struct student
{
	char name[20];
	int roll;
	int marks;
};
int main()
{
	int i,n,k;
	struct student std[50];
	while(1)
	{
		printf("\nAdmission press[1] If You try to insert some or students then press[1] or Not Press[0]");
		scanf("%d",&k);
		if(k==1)
		{
			printf("Enter how many student you have to done admission:");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				fflush(stdin);
				printf("Enter student[%d]Name:",i+1);
				scanf("%[^\n]s",std[i].name);
				fflush(stdin);
				printf("Enter Roll:");
				scanf("%d",&std[i].roll);
				printf("Enter Your marks:");
				scanf("%d",&std[i].marks);
			}
		}
		else
		{
			break;
		}
	}
	fp=fopen("std.dat","wb+");
	if(fp==NULL)
	{
		perror("File couldn't be opened");
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)	
		{
			fprintf(fp,"Name[%d]:%s\nRoll:%d\nMarks:%d\n",i+1,std[i].name,std[i].roll,std[i].marks);
		}
	}
	fclose(fp);
	return 0;
}
