#include"rahul.h"
/*
ADT for introduction of that program
purpose-which option have you required please press
precondition-user will select the language
input-choice to press to select given option
output-display the intro of program
post condition-user will divert to next page
*/
int intro()
{
	int choice;
	printf("\n\t\t\tWelcome To Gupta Cold Store..........\n[1]-->Select Language\n[2]-->Registration your self\
	\n[3]-->Cold Drinks Menu\n[4]-->For get your luck\n[5]-->Bill Rate\n[6]-->item cancel\n0-->for Exit\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
    ADT-->Abstract Data Type
    			ADT for language
    Purpose			:To select language.
    Precondition	:if you selected language then you select language type.
    Input			:choice(int).
    Output			:Language.
    Post condition	:check another choice.
*/
int lang()
{

	int choice;
	printf("\n[1]-English\n[2]-Hindi:\n[3]-mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for Cold drinks types
purpose-to know how many types of cold drinks available
precondition-user must be registerd
input-choice to get coldrinks types
output-display the menu of cold drinks
post condition-user want buy it to press option
*/
int menu()
{
	int choice;
	printf("\n[1]-Sprite\n[2]-ThumpsUp\n[3]-Mazza\n[4]-Limca\n[5]-CocaCola\n[6]-Lassi\n[7]-mainMenu\n[0]-Exit\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for Luck
purpose-to get user luck
precondition-user not be registerd necessary
input-choice to get own luck 
output-display the luck of user
post condition-user want to know that program to register,
*/
int luck()
{
	int choice;
	printf("\n[1-6]-For show your Luck\n[7]-mainMenu\n[0]-Exit\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of Sprite
purpose-which you select item for buy
precondition-user will be registerd,select to Sprite option
input-choice to select Sprite
output-display the money of selected item
post condition-total money
*/
int drinksRateSprite()
{
	int choice;
	printf("\nSprite-:\n[1]300ml:Rs-20\n[2]600ml:Rs-45\n[3]750ml:Rs-50\n[4]1 L:Rs-60\n[5]2 L:Rs-85\n[6]2.25L:Rs-100\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of thumpsUp
purpose-which you select item for buy
precondition-user will be registerd,select to ThumpsUp option
input-choice to select ThumpsUp
output-display the money of selected item
post condition-total money
*/
int drinksRateThumpsUp()
{
	int choice;
	printf("\nThumpsUp-:\n[1]300ml:Rs-20\n[2]600ml:Rs-45\n[3]750ml:Rs-50\n[4]1 L:Rs-60\n[5]2 L:Rs-85\n[6]2.25L:Rs-100\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of Mazza
purpose-which you select item for buy
precondition-user will be registerd,select to Mazza option
input-choice to select Mazza
output-display the money of selected item
post condition-total money
*/
int drinksRateMazza()
{
	int choice;
	printf("\nMazza-:\n[1]300ml:Rs-25\n[2]600ml:Rs-45\n[3]750ml:Rs-50\n[4]1 L:Rs-65\n[5]2 L:Rs-85\n[6]2.25L:Rs-100\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of Limca
purpose-which you select item for buy
precondition-user will be registerd,select to Limca option
input-choice to select limca
output-display the money of selected item
post condition-total money
*/
int drinksRateLimca()
{
	int choice;
	printf("\nLimca-:\n[1]300ml:Rs-25\n[2]600ml:Rs-35\n[3]750ml:Rs-40\n[4]1 L:Rs-65\n[5]2 L:Rs-75\n[6]2.25L:Rs-90\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of cocacola
purpose-which you select item for buy
precondition-user will be registerd,select to cocaCola option
input-choice to select cocacola
output-display the money of selected item
post condition-total money
*/
int drinksRateCocaCola()
{
	int choice;
	printf("\nCocaCola-:\n[1]300ml:Rs-25\n[2]600ml:Rs-35\n[3]750ml:Rs-40\n[4]1 L:Rs-65\n[5]2 L:Rs-75\n[6]2.25L:Rs-90\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for drinks rate of lassi
purpose-which you select item for buy
precondition-user will be registerd,select to lassi option
input-choice to select lassi
output-display the money of selected item
post condition-total money
*/
int drinksRateLassi()
{
	int choice;
	printf("\nLassi-:\n[1]300ml:Rs-25\n[2]600ml:Rs-35\n[3]750ml:Rs-40\n[4]1 L:Rs-65\n[5]2 L:Rs-75\n[6]2.25L:Rs-90\n[7]mainMenu\nEnter-");
	scanf("%d",&choice);
	return choice;
}
/*
ADT for item cancel
purpose-to delete selected items
precondition-user registerd,item also selected by user,
input-take choice of item select
output-item will be delete
post condition-total money
*/
int itemCancel()
{
	int choice;
	printf("\n[1]-Sprite\n[2]-ThumpsUp\n[3]-Mazza\n[4]-Limca\n[5]-CocaCola\n[6]-Lassi\n[7]-mainMenu\n[0]-Exit\nEnter-");
	scanf("%d",&choice);
	return choice;
}
