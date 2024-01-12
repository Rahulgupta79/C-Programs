#include<stdio.h>
int Date(int dd,int mm,int yy)
{
	int valid=1;
	if(yy<1)
	{
		valid=0;
	}
	else
	{
		if(mm<1||mm>12)
		{
			valid=0;
		}
		else
		{
			if(mm==2)
			{
				if(dd<1||dd>29)
				{
					valid=0;
				}
				else
				{
					if(dd<1||dd<28)
					{
						valid=0;
					}
				}
			}
			else if(mm==4||mm==6||mm==9||mm==11)
			{
				if(dd<1||dd>30)
				{
					valid=0;
				}
				if(mm==9 && yy==1752)
				{
					if(dd>2||dd<14)
					{
						valid=0;
					}
				}
			}
			else
			{
				if(dd<1||dd>31)
				{
					valid=0;
				}
			}
		}
	}
	return valid;
}
int main()
{
	int dd,mm,yy,valid;
	printf("\nEnter dd/mm/yy =");
	scanf("%d%d%d",&dd,&mm,&yy);
	valid=Date(dd,mm,yy);
	if(valid==0)
	{
		printf("Not valid date");
	}
	else
	{
		printf("Valid date");
	}
	return 0;
}
