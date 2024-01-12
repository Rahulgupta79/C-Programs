#include<stdio.h>
#include<stdlib.h>
struct record
{
	char name[20];
	int roll;
}student;
int main()
{
	/*fwrite function hai*/
/*	int i,n;
	FILE *fp;
	fp=fopen("write1.dat","wb");
	if(fp==NULL)
	{
		perror("File doesn't exist");
	}
	else
	{
		printf("Enter numbers of records:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			fflush(stdin);
			printf("Enter name:");
			scanf("%[^\n]s",student.name);
			fflush(stdin);
			printf("Enter Roll:");
			scanf("%d",&student.roll);
			fwrite(&student,sizeof(student),1,fp);
		}
		fclose(fp);
	}
	/*Fread function hai*/
	/*int i;
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
	}*/
	/*fseek function */
/*	int i;
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
	}*/
	return 0;
}
