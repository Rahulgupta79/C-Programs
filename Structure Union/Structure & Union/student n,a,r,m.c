#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	int roll;
	int age;
	int marks;
};
int main()
{
	struct student students[20];
	int i,j;
	printf("\nEnter how much insert students:");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		fflush(stdin);
		printf("\nEnter student[%d] Name-",i+1);
		scanf("%[^\n]s",&students[i].name);
		fflush(stdin);
		printf("\nEnter student[%d] Roll-",i+1);
		scanf("%d",&students[i].roll);
		fflush(stdin);
		printf("\nEnter student[%d] Age-",i+1);
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("\nEnter student[%d] Marks-",i+1);
		scanf("%d",&students[i].marks);
	}
	for(i=0;i<j;i++)
	{
		printf("Roll-%d\tName-%s\tAge-%d\tMarks-%d",students[i].roll,students[i].name,students[i].age,students[i].marks);
		printf("\n");
	}
	return 0;
}
