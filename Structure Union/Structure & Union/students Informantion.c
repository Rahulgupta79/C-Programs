#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
	int dd;
	int mm;
	int yy;
};
struct student
{
	char name[20];
	int roll;
	int age;
	struct date dob;
};
void Display(struct student students[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Name-:%s\t\tRoll-:%d  Age-:%d \nDate of Birth Student[%d]\n",students[i].name,students[i].roll,students[i].age);
	}
}
int main()
{
	int i,n;
	struct student students[10];
	printf("\t\t\tEnter How many you insert:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Student Roll[%d]:",i+1);
		scanf("%d",&students[i].roll);
		fflush(stdin);
		printf("Enter Student Name[%d]:",i+1);
		scanf("%[^\n]s",students[i].name);
		fflush(stdin);
		printf("Enter Student Age[%d]:",i+1);
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("Enter Student[%d] Date of Birth:",i+1);
		scanf("%d/%d/%d",&students[i].dob.dd,&students[i].dob.mm,&students[i].dob.yy);
		fflush(stdin);
		printf("\n\n");
	}
	/*for(i=0;i<n;i++)
	{
		printf("Name-:%s\tRoll-:%d\tAge-:%d  DOB-:%d/%d/%d",students[i].name,students[i].roll,students[i].age,students[i].dob.dd,students[i].dob.mm,students[i].dob.yy);
		printf("\n");
	}*/
	Display(students,n);
	return 0;
}
