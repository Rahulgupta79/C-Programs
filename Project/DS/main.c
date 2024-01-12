#include"ds.h"
int main()
{
	int choice,created=0,flag;
	ArrayType array;
	DataType data;
	while(1)
	{
		choice=mainMenu();
		switch(choice)
		{
			case 0:Exit();
			case 1:system("cls");
				//	printf("This feature will coming soon");
				if(!created)
				{
					array=createArray();
					created=1;
					printf("\nArray is created successfully\n");
				}
				else
				{
					printf("Array is already created\n");
				}
			break;
			case 2:system("cls");
					//printf("This feature will coming soon\n");
					flag=1;
					while(flag)
					{
						choice=InsertMenu();
						switch(choice)
						{
							case 0:Exit();
							case 1:system("cls");
								    //printf("Insert at Begining is comming soon\n");
								  	if(created)
									{
										if(!isFull(array))
										{
											data=readData();
											insertAtBegining(&array,data);
											printf("\n Data inserted at Begining successfully");
										}
										else
										{
											printf("\n Array is full ");
										}
									}
									else
									{
										printf("\n Array is not created.\nPlease go back to main menu and create array first");
									}  
							break;
							case 2:system("cls");
									if(created)
									{
										if(!isFull(array))
										{
											data=readData();
											insertAtEnd(&array,data);
											printf("\n Data inserted at end successfully");
										}
										else
										{
											printf("\n Array is full ");
										}
									}
									else
									{
										printf("\n Array is not created.\nPlease go back to main menu and create array first");
									}
									//printf("Insert at End is comming soon\n");
							break;
							case 3:system("cls");
									printf("Insert at Desired Location is comming soon\n");
							break;
							case 4:system("cls");
									printf("Insert at Sorted Order is comming soon\n");
							break;
							default:system("cls");
									printf("Invalid Insert Choice\n");
						}
					}
			break;
			case 3:system("cls");
					printf("This feature will coming soon\n");
			break;
			case 4:system("cls");
					printf("This feature will coming soon\n");
			break;
			default:printf("Invalid Choice");
			
		}
	}
	return 0;
}
