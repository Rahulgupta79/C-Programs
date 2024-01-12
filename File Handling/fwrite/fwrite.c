#include<stdio.h>
#include<stdlib.h>
struct record
{
	char name[20];
	int age;
};
int main()
{
	FILE *fp;
	struct record student[10];
	int i,n;
	fp=fopen("scan.txt","w");
	if(fp==NULL)
	{
		perror("File couldn't be opened");
		exit(0);
	}
	else
	{
		printf("Enter number of records:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			fflush(stdin);
			printf("Enter name[%d]:",i+1);
			scanf("%[^\n]s",student[i].name);
			fflush(stdin);
			printf("Enter age:");
			scanf("%d",&student[i].age);
			fwrite(&student[i],sizeof(student[i]),2,fp);
		}
		fclose(fp);
	}
}
