#include"Bank.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int choose,i;
	while(1)	
	{
		choose=intro();
		switch(choose)
		{
			case 1: system("cls");
					printf("Register system coming soon\n");
			break;
			case 2: system("cls");
						choose=language();
						switch(choose)
						{
							case 1: system("cls");
									printf("English is selected");
							break;
							case 2: system("cls");
									printf("Hindi is selected");
							break;
							case 3: system("cls");
									printf("Maratha is selected");
							break;
							case 4: system("cls");
									exit(1);
							break;
							default:system("cls");
									printf("Undeclear Option");
							break;
						}
			break;
			case 3: system("cls");
					printf("SBI app coming soon\n");
			break;
			case 9: system("cls");
					exit(1);
			break;
			default: system("cls");
					 printf("Choose in valid option\n");
			break;
		}
	}
	return 0;
}
