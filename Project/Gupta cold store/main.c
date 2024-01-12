#include"rahul.h"
int main() 
{
	int choice,registration,flag=1,aadhar,create=0,count=0,product=0,cancel=0;
	int sum=0;//aadhar for registration,create for account,count for variefy code,product for how many product you take.
	while(1)//sum for money add,choice for option.
	{
		choice=intro(choice);
		switch(choice)
		{
			case 0:system("cls");
					printf("\n\tThankYou for use this program\n\t\tPlease visit again time\n");
					exit(0);
			case 1:system("cls");
					choice=lang(choice);
					switch(choice)
					{
						case 1:system("cls");
								printf("\n\tYour Language English is selected\n");
						break;
						case 2:system("cls");
								printf("\n\tComputer se hindi bolwate ho saram nhi aata hai\n");
						break;
						case 3:system("cls");
						printf("\nplease select your language");
						flag=0;
						break;
						default:system("cls");
								printf("Please try again for select language");
						break;
					}
			break;
			case 2:system("cls");
				if(!create)
				{
					printf("\nEnter your last 4digit aadhar number:");
					scanf("%d",&aadhar);
					printf("\n\t%d-:",aadhar);
					flag=1;
					while(flag)
					{
						while(aadhar!=0)
						{
							aadhar=aadhar/10;
							count++;
						}
						if(count==4)
						{
							printf("Your registration is successfull\n\n");
							create=1;
							flag=0;
							break;
						}
						else
						{
							printf("\nplease kindly give me last 4 digit of aadhar\n");
							printf("______________________________________________");
							printf("\nEnter your last 4digit aadhar number:");
							scanf("%d",&aadhar);
							printf("\n\t%d-:Your registration is successfull\n\n",aadhar);
							create=1;
							flag=0;
							break;
						}
					}
				}
				else
				{
					printf("\n\tYou will registerd recently");
				}
			break;
			case 3:system("cls");
				flag=1;
				if(create==1)
				{
				while(flag)
				{
					choice=menu(choice);
					switch(choice)
					{
						case 0:system("cls");
								printf("\n\tThankYou For visit");
								exit(0);
						break;
						case 1:system("cls");
								choice=drinksRateSprite(choice);
								choice=itemCancel(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to Sprite 300ml");
										sum=sum+20;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to Sprite 600ml");
										sum=sum+45;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to Sprite 750ml");
										sum=sum+50;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to Sprite 1L");
										sum=sum+60;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to Sprite 2L");
										sum=sum+85;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to Sprite 2.25L");
										sum=sum+100;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to Sprite");
						break;
						case 2:system("cls");
								choice=drinksRateThumpsUp(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 300ml");
										sum=sum+20;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 600ml");
										sum=sum+45;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 750ml");
										sum=sum+50;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 1L");
										sum=sum+60;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 2L");
										sum=sum+85;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to ThumpsUp 2.25L");
										sum=sum+100;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to ThumpsUp");
						break;
						case 3:system("cls");
								choice=drinksRateMazza(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to Mazza 300ml");
										sum=sum+25;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to Mazza 600ml");
										sum=sum+45;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to Mazza 750ml");
										sum=sum+50;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to Mazza 1L");
										sum=sum+65;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to Mazza 2L");
										sum=sum+85;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to Mazza 2.25L");
										sum=sum+100;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to Mazza");
						break;
						case 4:system("cls");
								choice=drinksRateLimca(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to Limca 300ml");
										sum=sum+25;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to Limca 600ml");
										sum=sum+35;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to Limca 750ml");
										sum=sum+40;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to Limca 1L");
										sum=sum+65;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to Limca 2L");
										sum=sum+75;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to Limca 2.25L");
										sum=sum+90;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to Limca");
						break;
						case 5:system("cls");
								choice=drinksRateCocaCola(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to CocaCola 300ml");
										sum=sum+25;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to CocaCola 600ml");
										sum=sum+35;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to CocaCola 750ml");
										sum=sum+40;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to CocaCola 1L");
										sum=sum+65;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to CocaCola 2L");
										sum=sum+75;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to CocaCola 2.25L");
										sum=sum+90;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to CocaCola");
						break;
						case 6:system("cls");
								choice=drinksRateLassi(choice);
								switch(choice)
								{
									case 1:system("cls");
										printf("\n\tYou have choosen to Lassi 300ml");
										sum=sum+25;
										product++;
										break;
									case 2:system("cls");
										printf("\n\tYou have choosen to Lassi 600ml");
										sum=sum+35;
										product++;
										break;
									case 3:system("cls");
										printf("\n\tYou have choosen to Lassi 750ml");
										sum=sum+40;
										product++;
										break;
									case 4:system("cls");
										printf("\n\tYou have choosen to Lassi 1L");
										sum=sum+65;
										product++;
										break;
									case 5:system("cls");
										printf("\n\tYou have choosen to Lassi 2L");
										sum=sum+75;
										product++;
										break;
									case 6:system("cls");
										printf("\n\tYou have choosen to Lassi 2.25L");
										sum=sum+90;
										product++;
									case 7:system("cls");
										flag=0;
										break;
								}
								printf("\n\tThankYou for choosen to Lassi");
						break;
						case 7:system("cls");
						flag=0;
						break;
						default:printf("\n\tThankYou to visit me[unit=%d]",product);
						break;
					}	
				}
				}
				else
				{
					printf("\n\tPlease done your registration after you will try");
				}
				
			break;
			case 4:system("cls");
					flag=1;
				if(create==1)
				{
					while(flag)
					{
					choice=luck(choice);
					switch(choice)
					{
						case 0:system("cls");
								printf("\n\tThankYou For visit");
								exit(0);
						break;
						case 1:system("cls");
								printf("\n\tYou will get your dream");
						break;
						case 2:system("cls");
								printf("\n\tYou should care your parents");
						break;
						case 3:system("cls");
								printf("\n\tYou will be win your competition");
						break;
						case 4:system("cls");
								printf("\n\tYou should need your parents");
						break;
						case 5:system("cls");
								printf("\n\tYou get a new idea");
						break;
						case 6:system("cls");
								printf("\n\tYou miss your MOM");
						break;
						case 7:system("cls");
							printf("\n\tOye Galat fami ki dukan");
							flag=0;
						break;
						default:printf("\n\tBhoolna mt warna pitenge");
						break;
					}	
					}		
				}
				else
				{
					printf("\n\tPlease done your registration after you will try");
				}
			break;
			case 5:system("cls");
					printf("Total=%d Items=[%d]",sum,product);
			break;
			default :system("cls");
					printf("\n\tInvalid Choice\n\n");
			break;
		}
	}
	return 0;
}
