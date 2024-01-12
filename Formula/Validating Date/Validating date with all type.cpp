#include<stdio.h>
#include<stdlib.h>
//ye program validating date ko btane ke liye bnaya gya hai
int main()
{
	int dd,mm,yy;
	printf("Enter date");
	scanf("%d%d%d",&dd,&mm,&yy);
	if(dd<0&&dd>31)
		{
			printf("Not Valid Date");
		}
	else if(mm<0&&mm>12)
		{
			printf("Not Valid Month");
		}
	else if(mm==2)
		{
		{
			if(dd>0&&dd<=29)
				{
					if(yy<=1752)
						{
							if(yy%4==0)
								{
									printf("Valid with Leap");
								}
							else
								{
									printf(" Valid with not Leap");
								}
						}
					else
						{
							if(yy%100==0)
								{
									if(yy%400==0)
										{
											printf("Valid with Leap");
										}
									else
										{
											printf("Valid with not Leap");
										}
								}
							else
								{
									if(yy%4==0)
										{
											printf("Valid with Leap");
										}
									else
										{
											printf("Valid with not Leap");
										}
								}	
						}
						}
				}
		}
	else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
		{
			if(dd>0&&dd<32)
				{
					if(yy>0)
						{
							printf("Valid date");
						}
					else
						{
							printf("Not Valid");
						}
				}
			else
				{
					printf("Not Valid");
				}
		}
	else if(mm==4||mm==6||mm==11)
		{
			if(dd>0&&dd<31)
				{
					if(yy<0)
						{
							printf("Valid date");
						}
					else
						{
							printf("Not Valid");
						}
				}
			else
				{
					printf("Not Valid");
				}
		}
	else if(mm=9)
		{
			if(yy==1752)
				{
					if(dd<14&&dd>2)
						{
							printf("Not Valid");
						}
					else
						{
							printf("Valid date");
						}
				}
			else
				{
					printf("Valid date");
				}
		}
	else
		{
			printf("Not Valid date");
		}
	return 0;
}
