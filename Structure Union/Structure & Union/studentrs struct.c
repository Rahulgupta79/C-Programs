#include<stdio.h>
#include<stdlib.h>
/*void info(struct student students[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter Name[%d]:",i+1);
		scanf("%[^\n]s",students[i].Name);
		fflush(stdin);
		printf("\nEnter Roll: ");
		scanf("%d",&students[i].roll);
		for(j=0;j<n;j++)
		{
			if(students[j].roll==students[i].roll)
			printf("Roll missing");
			printf("Enter varified roll-");
			scanf("%d",&students[i].roll);
		}
		fflush(stdin);
		printf("\nEnter Age:");
		scanf("%d",&students[i].age);
		fflush(stdin);
	}
}
*/
struct student
{
	char Name[20];
	int  roll;
	int  age;
}students[50];
int main()
{
	int i,n,k,role,rol,age;
	char name[20];
	struct student students[50];
	printf("Enter how much student information you want to insert:");
	scanf("%d",&n);
//	info(students,n);
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter Name[%d]:",i+1);
		scanf("%[^\n]s",students[i].Name);
		fflush(stdin);
		printf("\nEnter Roll: ");
		scanf("%d",&students[i].roll);
		fflush(stdin);
		printf("\nEnter Age:");
		scanf("%d",&students[i].age);
		fflush(stdin);
	}
	printf("Name\tRoll\tAge\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t %d\t %d",students[i].Name,students[i].roll,students[i].age);
		printf("\n");
	}
	printf("If you want to show a particular person details press->1 & not press->any number:");
	scanf("%d",&k);
	if(k==1)
	{
		printf("By Roll you want to get details press-1\nBy Age you want to get details press-2\nBy Name you want to get details press-3");
		scanf("%d",&role);
		if(role==1)
		{
			printf("Enter Roll-");
			scanf("%d",&rol);
			for(i=0;i<n;i++)
			{
				if(rol==students[i].roll)
				{
					printf("%s\t %d\t %d",students[i].Name,students[i].roll,students[i].age);
				}
				else
				{
					printf("press valid roll");
				}
				break;
			}
		}
		else if(role==2)
		{
			printf("Enter Age-");
			scanf("%d",&age);
			for(i=0;i<n;i++)
			{
				if(age==students[i].age)
				{
					printf("%s\t %d\t %d",students[i].Name,students[i].roll,students[i].age);
				}
				else
				{
					printf("Data not found");
				}
				break;
			}
		}
		else if(role==3)
		{
			printf("Enter Name-");
			scanf("%[^\n]s",name);
			for(i=0;i<n;i++)
			{
				if(strcmp(students[i].Name,name)==0)
				{
					printf("%s\t %d\t %d",students[i].Name,students[i].roll,students[i].age);
				}
				else
				{
					printf("Data not found");
				}
			}
		}
		else
		{
			printf("press valid number");
		}
	}
	else
	{
		printf("Thank You ");
	}
	return 0;
}
