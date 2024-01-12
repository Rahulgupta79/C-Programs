#include<stdio.h>
int main()
{
	int choice;
	int flag=1;
	while(flag)
	{
		printf("\nFor english Press 1\t\nHindi ke liye 2 dabaye\t\n0For exit ");
		scanf("%d",&choice);
		switch(choice)
		{
			system("cls");
			case 1:printf("\nEnglish you select so proud of you");
			break;
			case 2:printf("\nAapne  Hindi select kiya hai garv ki bat hai");
			break;
			case 0:printf("Jhakas babu program katna chahte ho");
			flag=0;
			break;
			default:printf("\nInvalid Choice karte ho bade bigde ho ji");
			break;
		}
	}
	return 0;
}
