#include<stdio.h>
int main()
{
	int choice;
	int flag=1;
	while(flag)
	{
		printf("\n1. For english Press 1 : \t\n2. Hindi ke liye 2 dabaye :\t\n3. For exit press 0   :\n4. Luck check press 3 to 9 : ");
		scanf("%d",&choice);
		switch(choice)
		{
			system("cls");
			case 1:printf("\nEnglish you select so proud of you");
			break;
			case 2:printf("\nAapne  Hindi select kiya hai garv ki bat hai");
			break;
			case 3:printf("\n\t\tToday you meet a new person");
			break;
			case 4:printf("\n\t\tYour Girlfriend cheat you for own work");
			break;
			case 5:printf("\n\t\tToday you love a angle like your sister");
			break;
			case 6:printf("\n\t\tYou eat meal sufficient by your own");
			break;
			case 7:printf("\n\t\tYour day is better than another day");
			break;
			case 8:printf("\n\t\tPlease call to your parents for know his opinin");
			break;
			case 9:printf("\n\t\tToday  is your day is so bad");
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
