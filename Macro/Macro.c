/*
#include<stdio.h>
#define money 100//"simple macro hai " jo sabhi ke lia use hua hai
int main()
{
	char name1[20]="ankit";
	char name2[20]="ankush";
	char name3[20]="ankushi";
	printf("%s got %d\n",name1,money);
	printf("%s got %d\n",name2,money);
	printf("%s got %d\n",name3,money);
	return 0;
}
*/
#include<stdio.h>
#define money()  (100+10)//"function macro hai " jo modify of simple macro ka hota hai
int main()
{
	char name1[20]="ankit";
	char name2[20]="ankush";
	char name3[20]="ankushi";
	printf("%s got %d\n",name1,money());
	printf("%s got %d\n",name2,money());
	printf("%s got %d\n",name3,money());
	return 0;
}

