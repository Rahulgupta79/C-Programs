#include"array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int choice,created=0,flag,element,loc=0;
	int array[SIZE],length=0;
	while(1)
	{
		choice=mainMenu();
		switch(choice)
		{
			case 0: system("cls");
					printf("\n Thank you for using our program visit again ");
					exit(0);
			case 1:	system("cls");
					if(!created)
					{
						created=1;
						length=0;
						printf("\nArray is created");
					}
					else
					{
						printf("\n Array is already created ");
					}
					
					break;
			case 2: system("cls");
					if(created)
					{
						printf("\n The elements are-: ");
						display(array,length);
					}
					else
					{
						printf("\n Array is not created ");
					}
					break;
			case 3: system("cls");
					if(created)
					{
						if(!isFull(array,length))
						{
							flag=1;
							while(flag)
							{
								choice=insertMenu();
								switch(choice)
								{
									case 0: system("cls");
											printf("\n Thank you for using my program \n visit again\n\n\n");
											exit(0);
									case 1: system("cls");
											printf("\n Enter a number to insert at begining:  ");
											scanf("%d",&element);
											length=insertAtBeg(array,length,element);
											printf("\n Element insert to Begining successfull");
											break;
									case 2: system("cls");
											printf("\n Inserted at end to Enter a number: ");
											scanf("%d",&element);
											length=insertAtEnd(array,length,element);
											printf("\n Element insert to Ending successfull");
											break;
									case 3: system("cls");
											printf("\n Inserted at desired location ");
											break;
									case 4: system("cls");
											printf("\n Inserted at Sorted to Enter a number: ");
											scanf("%d",&element);
											length=insertAtSorted(array,length,element);
											printf("\n Element insert to sorted successfull");
											break;
									case 5: system("cls");
											flag=0;
											break;
									default:system("cls");
											printf("\n Invalid choice ");
									
								}
							}
							printf("Inserttion done");
						}
						else
						{
							printf("\n Array is full ");
						}
					}
					else
					{
						printf("\nArray is not created");
					}
					
					break;
			case 4: system("cls");
					printf("\nArray is deleted");
					break;
			case 5: system("cls");
					if(created)
					{
						if(!isFull(array,length))
						{
							flag=1;
							while(flag)
							{
								choice=insertMenu();
								switch(choice)
								{
									case 0: system("cls");
											printf("\n Thank you for using my program \n visit again\n\n\n");
											exit(0);
									case 1: system("cls");
											printf("\nYou are choosing to LinearSearch Please enter data:");
											scanf("%d",&element);
											int index;
											index=LinearSearch(array,length,element);
											printf(" Data found at location %d",index+1);
											break;
									case 2: system("cls");
											printf("\nYou are choosing to BinarySearch Please enter data:");
											scanf("%d",&element);
											int index1;
											index1=BinarySearch(array,length,element);
											printf(" Data found at location %d",index+1);
											break;
									case 3: system("cls");
											flag=0;
											break;
									default:system("cls");
											printf("\n Invalid choice ");
									
								}
							}
							printf("Search done");
						}
						else
						{
							printf("\n Array is full ");
						}
					}
					else
					{
						printf("\nArray is not created");
					}
					
					break;
			case 6: system("cls");
					printf("\nArray is sorted");
					break;
			default:system("cls"); 
					printf("\n Invalid choice ");
		}
		
	}
	return 0;
}
