#include<stdio.h>
int main()
{
	float x,y,flag;
	char ch;
	printf("Enter intial amount-:");
	scanf("%f",&x);
	flag=1;
	fflush(stdin);
	while(1)
	 {	
	     printf("\nEnter for Credit-c\nEnter for Debit-d\nEnter for balance-b\nEnter for MainMenu-m");
		 scanf("%c",&ch);
	 	switch(ch)
	 	{
		 	case 'c':system("cls");
				printf("Enter Credit amount:");
				scanf("%f",&y);
				x=x+y;
				printf("New amount:%f",x);	
			 break;
		 	case 'd':system("cls");
			    	printf("\nEnter Dedit amount:");
				    scanf("%f",&y);
				    if(x>=y)
				    {
				   	 x=x-y;
					 printf("New amount:%f",x);
				    }
				    else
				    {
					 printf("Insufficient amount in your account");
			     	}
		    break;
		    case 'b':system("cls");
				    printf("Amount in your acount=%f",x);
	 	    break;
	 	    case 'm':system("cls");
	 	 		     flag=0;
		    break;
		    default:printf("Choose correct option for Operation");
		    break;
	 }
	 fflush(stdin);
	 	
    }
	 
	return 0;
}
