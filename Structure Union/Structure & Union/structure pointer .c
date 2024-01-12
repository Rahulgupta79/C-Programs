#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[20];
	int roll;
	int age;
	float marks;
};
void Display(struct student *sut,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Name-:%s\tRoll-:%d\tAge-:%d \tMarks-:%f",(*(sut+i)).name,(*(sut+i)).roll,(*(sut+i)).age,(*(sut+i)).marks);
		printf("\n");
	}
}
int main()
{
	struct student stu[10] ,*sut;
	sut=stu;
	int i,n;
	printf("\t\t\tEnter How many you insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Student Roll[%d]:",i+1);
		scanf("%d",&stu[i].roll);
		fflush(stdin);
		printf("Enter Student Name[%d]:",i+1);
		scanf("%[^\n]s",stu[i].name);
		printf("Enter Student Age[%d]:",i+1);
		scanf("%d",&stu[i].age);
		printf("Enter Stuednt[i] marks:",i+1);
		scanf("%f",&stu[i].marks);
		printf("\n\n");
	}
	Display(stu,n);
	/*for(i=0;i<n;i++)//without pointer
	{
		printf("Name-:%s\tRoll-:%d\tAge-:%d \tMarks-:%f",stu[i].name,stu[i].roll,stu[i].age,stu[i].marks);
		printf("\n");
	}*/
	return 0;
}
