#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n1,n2,n3,n4,n5,fm1,fm2,fm3,fm4,fm5,om,fm,d1,d2,d3,d4,d5,e,e1,e2,e3,e4,e5,rl;
	//n1 to n5 for obtain marks in particular subject
	//fm1 to fm5 for full marks of particular subject
	//d1 to d5 for distintion print ye obtain marks ka percentage hai 
	//e1 to e5 ye passing marks ko btata hai 
	//n,nc1,nc2,nc3-student name,scn-school name,rl-roll number
	float per;
	char n[30],scn[30];
	printf("Enter Student Name=");
	scanf("%[^\n]s",&n);
	printf("Roll Number=");
	scanf("%d",&rl);
	printf("Enter School Name=");
	scanf("%[^\n]s",&scn);
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
		e1=(fm1*30)/100;
		e2=(fm2*30)/100;
		e3=(fm3*30)/100;
		e4=(fm4*30)/100;
		e5=(fm5*30)/100;
		e=e1+e2+e3+e4+e5;
		printf("___________________________________________________________________________\n");
		printf("Schhol Name:%[^\n]s\n",scn);
		printf("Student Name:%[^\n]s\t\tRoll Number:%d\n",n,rl);
		printf("============================================================================\n");
		printf("Subject\t\tObtain Marks\t\t\tFullMarks\tPassingMarks\n");
		if(d1>=80)
		{
			printf("Physics\t\t\t%dD\t\t\t%d\t\t\t%d\n",n1,fm1,e1);
		}
		else
		{
			printf("Physics\t\t\t%d\t\t\t\t%d\t\t\t%d\n",n1,fm1,e1);
		}
		if(d2>=80)
		{
			printf("Chemistry\t\t%dD\t\t\t%d\t\t\t%d\n",n2,fm2,e2);
		}
		else
		{
			printf("Chemistry\t\t%d\t\t\t%d\t\t\t%d\n",n2,fm2,e2);
		}
		if(d3>=80)
		{
			printf("Math\t\t\t%dD\t\t\t%d\t\t\t%d\n",n3,fm3,e3);
		}
		else
		{
			printf("Math\t\t\t%d\t\t\t%d\t\t\t%d\n",n3,fm3,e3);
		}
		if(d4>=80)
		{
			printf("Hindi\t\t\t%dD\t\t\t%d\t\t\t%d\n",n4,fm4,e4);
		}
		else
		{
			printf("Hindi\t\t\t%d\t\t\t%d\t\t\t%d\n",n4,fm4,e4);
		}
		if(d5>=80)
		{
			printf("English\t\t\t%dD\t\t\t%d\t\t\t%d\n",n5,fm5,e5);
		}
		else
		{
			printf("English\t\t\t%d\t\t\t%d\t\t\t%d\n",n5,fm5,e5);
		}
		printf("__________________________________________________________________________\n");
    	printf("Total Marks \t\t%d\t\t\t%d\t\t\t%d\n",om,fm,e);
    	printf("__________________________________________________________________________\n");
    	if(per>=60)
    	{
    		printf("Total Percentage\t%.2f\t\tRemark-1st Devision",per);
		}
		else if(per>=30)
		{
			printf("Total Percentage\t\t%.2f\t\tRemark-2nd Devision",per);
		}
		else
		{
			printf("Total Percentage\t\t%.2f%\t\tRemark-Fail",per);
		}
		
	}
	return 0;
}
