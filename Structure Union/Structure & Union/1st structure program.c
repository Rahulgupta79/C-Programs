#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student//structure Name student
{
	int Roll;//structure template ki tarah kam karta hai jo koi space leta nhi hai
	char Name[30];
	int Age;
};//semicolon dena mandatory hai
int main()
{
	int i;//students yaha structure ka array name hai 
	struct student students[10]; //hme 10 students ka nam rakhna tha isliye structure ka array bnana pada
	for(i=0;i<3;i++)//ye looop  students ko access ke liye bnaya gya hai 
	{
		printf("Student[%dst] Name-:",i+1);
		scanf("%[^\n]s",students[i].Name);
		fflush(stdin);
		printf("Student[%dst] Roll-:",i+1);
		scanf("%d",&students[i].Roll);
		printf("Student[%dst] Age-:",i+1);
		scanf("%d",&students[i].Age);
		printf("\n");
	}
	for(i=0;i<3;i++)//ye loop data ko print karne ke liye hai
	{
		printf("Roll-%d Name-%s Age-%d",students[i].Roll,students[i].Name,students[i].Age);
		printf("\n");
	}
	return 0;
}
