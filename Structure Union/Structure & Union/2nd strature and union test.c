#include<stdio.h>
#include<string.h>
struct student
{
	char Name[20];
	int Roll;
	int Age;
	int Mobile;
}stud1;
int main()
{
	stud1.Age=23;
	stud1.Mobile=7979759998;
	stud1.Roll=2;
	strcpy(stud1.Name,"Rahul Kumar Gupta");
	printf("\nName=%s\nMobile=%d\nAge=%d\nRoll=%d",stud1.Name,stud1.Mobile,stud1.Age,stud1.Roll);
	return 0;
}
