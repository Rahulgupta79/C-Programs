#include"array.h"
int main()
{
	int choice,created=0,flag=1,loc;
	int array[SIZE],length=0,element;
	while(1)
	{
		choice=mainMenu();
		switch(choice)
		{
			case 0:system("cls");
					printf("Thankyou for visit");
					exit(0);
			case 1:system("cls");
					if(!created)
					{
						created=1;
						printf("\nArray is created successfully");
					}
					else
					{
						printf("Array is already created");
					}
					break;
			case 2:system("cls");
					if(created==1)		
					{
						if(!isFull)
						while(flag)
						{
							choice=insertMenu();
							switch(choice)
							{
								case 0:system("cls");
										printf("\nThankyou for visit");
										exit(0);
								case 1:system("cls");
										printf("\nEnter element");
										scanf("%d\t",&element);
										length=insertAtBeg(array,length,element);
										printf("Data inserted successfully");
										break;
								case 2:system("cls");
										printf("Inserted at end is coming soon");
										break;
								case 3:system("cls");
										printf("\nenter  element");
										scanf("%d\t",&element);
										printf("Enteer valid location");
										scanf("%d",&loc);
										if(loc>0 && loc<=length+1)
										{
											length=insertAtDesiredLocation(array,length,element,loc);
											printf("");
										}
										break;
								case 4:system("cls");
										printf("\nInsert at beg is coming soon");
										flag=0;
										break;
								case 5:system("cls");
										printf("\nInsert at Sorted Order is coming soon");
										break;
								default:system("cls");
										printf("\nInvalid Choice");
							}
						}
					}
					else
					{
						printf("\nArray is not created");
					}
					break;
			default:system("cls");
					printf("invalid choice");
		}
	}
	return 0;
}
