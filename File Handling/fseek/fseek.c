#include<stdio.h>
#include<stdlib.h>
struct students
{
	char name[20];
	int roll;
}student;
int main()
{
	int i;
	FILE *fp;
	fp=fopen("write1.dat","rb");
	if(fp==NULL)
	{
		perror("File doesn't exist");
	}
	else
	{
		printf("Enter number of records:");
		scanf("%d",&i);
		fseek(fp,(i-1)*sizeof(student),0);
		fread(&student,sizeof(student),1,fp);
		printf("Name-%s",student.name);
		printf("Roll-%d",student.roll);
		fclose(fp);
	}
	return 0;
}
