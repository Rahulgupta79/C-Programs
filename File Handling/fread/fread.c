#include<stdio.h>
#include<stdlib.h>
struct record
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
		while(fread(&student,sizeof(student),1,fp)==1)
		{
			printf("Name-%s",student.name);
			printf("Roll-%d",student.roll);
		}
		fclose(fp);
	}
	return 0;
}
