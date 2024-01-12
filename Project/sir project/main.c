#include"array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int choice,created=0, flag=1,loc;
	int array[SIZE],length=0,element;
	
	while(1)
	{
		choice=mainMenu();
		switch(choice)
		{
			case 0: system("cls");
					printf("\n Thank you visit again");
					exit(0);
			case 1: system("cls");
					if(!created)
					{
						created =1;
						printf("\n Array is created successfully");
					}
					else
					{
						printf("\n Array is already created");	
					}
					break;
			case 2: system("cls");
					if(created==1)
					{
						 
						flag=1;
						while(flag)
						{
							choice=insertMenu();
							switch(choice)
							{
								case 0: system("cls");
										printf("\n Thank you visit again");
										exit(0);
								case 1: system("cls");
										if(!isFull(array,length))
										{
											printf("\n Enter element : ");
											scanf("%d",&element);
											length=insertAtBeg(array,length,element);
											printf("\n Data inserted successfully");
										}
										else
										{
											printf("\n Array is full");
										}
										break;
								case 2: system("cls");
										if(!isFull(array,length))
										{		
											printf("\n Enter element : ");
											scanf("%d",&element);
											length=insertAtEnd(array,length,element);
											printf("\n Data inserted successfully");
										}
										else
										{
											printf("\n Array is full");
										}
										break;
								case 3: system("cls");
										if(!isFull(array,length))
										{		
											printf("\n Enter element : ");
											scanf("%d",&element);
											printf("\n Enter valid location ");
											scanf("%d",&loc);
											if(loc>0 && loc<=length+1)
											{
												length=insertAtDesiredLocation(array,length,element,loc);
												printf("\n Data inserted successfully");	
											}
											else
											{
												printf("\n Invalid location");
											}
											
										}
										else
										{
											printf("\n Array is full");
										}
										break;
								case 4: system("cls");
										if(!isFull(array,length))
										{		
											printf("\n Enter element : ");
											scanf("%d",&element);
											length=insertAtSortedOrder(array,length,element);
											printf("\n Data inserted successfully");
										}
										else
										{
											printf("\n Array is full");
										}
										break;
								case 5: system("cls");
										flag=0;
										break;
								default:system("cls");
										printf("\n Invalid choice");
									
							}
								
						}
					}
					else
					{
						printf("\n Array is not created");
					}
					break;
			case 3:	system("cls");
					if(created)
					{
						printf("\n The elements are \n ");
						display(array,length);
					}
					else
					{
						printf("\n Array is not created ");
					}
					break;
			case 4: system("cls");
					if(created)
					{
						printf("\n Enter element to search : ");
						scanf("%d",&element);
						loc= linearSearch(array,length,element);
						if(loc==-1)
						{
							printf("\n Data is not found ");
						}
						else
						{
							printf("\n %d is found at %d location ",element,loc+1);
						}
					}
					else
					{
						printf("\n Array is not created ");
					}
					break;
			case 5: system("cls");
					if(created)
					{
						printf("\n Enter element to search : ");
						scanf("%d",&element);
						loc= binarySearch(array,length,element);
						if(loc==-1)
						{
							printf("\n Data is not found ");
						}
						else
						{
							printf("\n %d is found at %d location ",element,loc+1);
						}
					}
					else
					{
						printf("\n Array is not created ");
					}
					break;
			case 6: system("cls");
					if(created)
					{
						printf("\n Enter element to be deleted : ")	;
						scanf("%d",&element);
						int l;
						l=Delete(array,length,element);
						if(l==length)
						{
							printf("\n Deletion failed");
						}
						else
						{
							length=l;
							printf("\n %d is deleted from the array successfully",element);
						}
						
					}
					else
					{
						printf("\n Array is not created ");
					}
					break;
			case 7:system("cls");
					if(created)
					{
						flag=1;
						while(flag)
						{
							choice=SortMenu();
							switch(choice)
							{
								case 0:system("cls");
									printf("\nThankyou for visit");
									exit(1);
								case 1:system("cls");
									//printf("\nSelection sort is coming soon");
									selectionSort(array,length);
									printf("\nData Sorted successfully");
									break;
								case 2:system("cls");
									//printf("\nBubble sort is coming soon");
									BubbleSort(array,length);
									printf("\nData Sorted successfully");
									break;
								case 3:system("cls");
									printf("\nInsertion sort is coming soon");
									break;
								case 4:system("cls");
									printf("\nMerge sort is coming soon");
									break;		
								case 5:system("cls");
									flag=0;
									break;
								default:system("cls");
									printf("\nInvalid Choice");
									break;
							}
						}
					}
			default:system("cls");
					printf("\n Invalid choice");
		}
	}
	return 0;
}
