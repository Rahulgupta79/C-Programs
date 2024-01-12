#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,fm1,fm2,fm3,fm4,fm5,om,fm,d1,d2,d3,d4,d5,rl;
	//n1 to n5 for obtain marks
	//fm1 to fm5 for full marks
	//d1 to d5 for distintion
	//ye program marksheet me rl,stn,sn print karane ke liye
	float per;
	char name [30],school_name[30];
	printf("Enter your Roll number\n");
	scanf("%d",&rl);
	printf("Enter Your Name\n");
	scanf("%s",&name);
	printf("Enter Your School Name\n");
	scanf("%s",&school_name);
	printf("Enter Your Standard\n");
	printf("Enter F.M. and obtain marks of Physics=");
	scanf("%d%d",&fm1,&n1);
	if(fm1<n1)
	{
		printf("Please Enter correct obtain marks of Physics=");
	}
	else
	{
		printf("Enter F.M. and obtain marks of Chemistry=");
	    scanf("%d%d",&fm2,&n2);
	}
	if(fm2<n2)
	{
		printf("Please Enter correct obtain marks Chemistry=");
	}
	else
	{
		printf("Enter F.M. and obtain marks of Math=");
	    scanf("%d%d",&fm3,&n3);
	}
	if(fm3<n3)
	{
		printf("Please Enter correct obtain marks Math=");
	}
	else
	{
		printf("Enter F.M. and obtain marks of Hindi=");
	    scanf("%d%d",&fm4,&n4);
	}
	if(fm4<n4)
	{
		printf("Please Enter correct obtain marks Hindi=");
	}
	else
	{
		printf("Enter F.M. and obtain marks of English=");
    	scanf("%d%d",&fm5,&n5);
	}
	if(fm5<n5)
	{
		printf("Please Enter correct obtain marks English=");
	}
	else
	{
		om=n1+n2+n3+n4+n5;
	    fm=fm1+fm2+fm3+fm4+fm5;
		per=(om*100/fm);
		d1=(n1*100)/fm1;
		d2=(n2*100)/fm2;
		d3=(n3*100)/fm3;
		d4=(n4*100)/fm4;
		d5=(n5*100)/fm5;
		printf("========================================================\n");
		printf("SCHOOL NAME%s\n",school_name);
		printf("Student Name:\tRoll number:%s%d\n",name,rl);
		printf("Subject\t\tObtain Marks\t\t\tFullMarks\n");
		if(d1>=80)
		{
			printf("Physics\t\t\t%dD\t\t\t%d\n",n1,fm1);
		}
		else
		{
			printf("Physics\t\t\t%d\t\t\t\t%d\n",n1,fm1);
		}
		if(d2>=80)
		{
			printf("Chemistry\t\t%dD\t\t\t%d\n",n2,fm2);
		}
		else
		{
			printf("Chemistry\t\t%d\t\t\t%d\n",n2,fm2);
		}
		if(d3>=80)
		{
			printf("Math\t\t\t%dD\t\t\t%d\n",n3,fm3);
		}
		else
		{
			printf("Math\t\t\t%d\t\t\t%d\n",n3,fm3);
		}
		if(d4>=80)
		{
			printf("Hindi\t\t\t%dD\t\t\t%d\n",n4,fm4);
		}
		else
		{
			printf("Hindi\t\t\t%d\t\t\t%d\n",n4,fm4);
		}
		if(d5>=80)
		{
			printf("English\t\t\t%dD\t\t\t%d\n",n5,fm5);
		}
		else
		{
			printf("English\t\t\t%d\t\t\t%d\n",n5,fm5);
		}
		printf("-------------------------------------------------------\n");
    	printf("Total Marks \t\t\t%d\t\t%d\n",om,fm);
    	printf("--------------------------------------------------------\n");
    	if(per>=60)
    	{
    		printf("Total Percentage\t\t%.2f\t\t1st Devision",per);
		}
		else if(per>=30)
		{
			printf("Total Percentage\t\t%.2f\t\t2nd Devision",per);
		}
		else
		{
			printf("Total Percentage\t\t%.2f\t\tFail",per);
		}
		
	}
	return 0;
}
