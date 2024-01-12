#include"Bank.h"
int intro()
{
	int choose;
	printf("****************(Welcome To SBI)****************");
	printf("\n1.Register your Self\n2.Choose a Language\n3.For SBI app\n9.For EXIT\nEnter a number to work on It-");
	scanf("%d",&choose);
	return choose;
}
int language()
{
	int choose;
	printf("1.English\n2.Hindi\n3.Maratha\n4.Exit\nEnter any Valid option- ");
	scanf("%d",&choose);
	return choose;
}

