#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
typedef struct student
{
	int roll;
	char name[30];
	float marks;
}StudentType;
StudentType ReadStudentDetail()//function hai
{
	StudentType stud;
	printf("\n Enter roll: ");
	scanf("%d",&stud.roll);
	printf("\n Enter name: ");
	fflush(stdin);
	scanf("%[^\n]s",stud.name);
	printf("\n Enter marks: ");
	scanf("%f",&stud.marks);
	return stud;
}int menu()//function hai
{
	int choice;
	printf("\n Enter 0--->Exit\n1--->Insert\n2--->Display\n Enter your choice :");
	scanf("%d",&choice);
	return choice;
}
int main()
{
	FILE *fp;
	StudentType stud[SIZE],stud1;
	int choice,i,length;
	char ch;
	
	
		
		
		while(1)
		{
			choice = menu();
			switch(choice)
			{
				case 0: system("cls");
						printf("\n Thank you visit again");
						exit(1);
				case 1: system("cls");
						fp= fopen("studentRecord.dat","ab");
						if(fp!=NULL)
						{
							i=0;
							while(1)
							{
								printf("\n Enter new student record ");
								stud[i]=ReadStudentDetail();
								i++;
								if(i==SIZE)
								{
									if(fwrite(stud,sizeof(stud),i,fp)==i)
									{
										
										printf("\n Data saved successfully");
									}
									else
									{
										perror("\n Data can't be saved");
									}
									i=0;
								}
								printf("\n Do you want to insert again(y/n)");
								ch=getch();
								if(ch=='Y'||ch=='y')
								{
									;
								}
								else
								{
									if(fwrite(stud,sizeof(stud),i,fp)==i)
									{
										
										printf("\n Data saved successfully");
									}
									else
									{
										perror("\n Data can't be saved");
									}
									break;
								}
							}
							
							
						}
						fclose(fp);
						break;
				case 2:system("cls");
						fp= fopen("studentRecord.dat","rb");
						if(fp!=NULL)
						{
							printf("\nRoll   Name                    Marks\n");
							while((fread(&stud1,sizeof(stud),1,fp))==1)
							{
								//display(stud);
								printf("\n%4d%30s\t%.2f",stud1.roll,stud1.name,stud1.marks);
							}
							fclose(fp);
						}
						else
						 perror("\n File could not be opened");
						break;
				default:system("cls");
						printf("\n Invalid choice ");
						
			}
		}
		
	
	return 0;
}
