#include<stdio.h>
#include<stdlib.h>
int main()
{
	int h,m,s,d=1000;
	printf("Set time:");
	scanf("%d%d%d",&h,&m,&s);
	if(h>12 || m>60 || s>60)
	{
		printf("Error");
	}
	else
	{
		while(1)
		{
			s++;
			if(s>59)
			{
				m++;
				s=0;
			}
			if(m>59)
			{
				h++;
				m=0;
			}
			if(h>12)
			{
				h=1;
			}
			printf("\nClock Start-");
			printf("%2d:%2d:%2d",h,m,s);
			Sleep(d);
			system("cls");
		}
	}
	return 0;
}
