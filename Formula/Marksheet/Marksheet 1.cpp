#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n3,n4,n5,om,fm,fm1,fm2,fm3,fm4,fm5;
	float per;
	printf("Enter F.M. and obtain marks of Physics=");
	scanf("%d%d",&fm,&n1);
	printf("Enter F.M. and obtain marks of Chemistry");
	scanf("%d%d",&fm,&n2);
	printf("Enter F.M. and obtain marks of Math");
	scanf("%d%d",&fm,&n3);
	printf("Enter F.M. and obtain marks of Hindi");
	scanf("%d%d",&fm,&n4);
	printf("Enter F.M. and obtain marks of English");
	scanf("%d%d",&fm,&n5);
	om=n1+n2+n3+n4+n5; 
	fm=fm1+fm2+fm3+fm4+fm5;
	per=(om/500)*100;
	if(n1<100&&n2<100&&n3<100&&n4<100&&n5<100)
   	 {
	    printf("====================================\n");
	    printf("Subject\t\t\t\tObtain Marks\t\t\tF.M.\n");
	    if(n1>=80)
	    {
	    	printf("Physics\t\t\t\t %dD\t\tF.M.\n",n1,fm1);
		}
		else
    	{
    		printf("Physics\t\t\t\t %d\t\tF.M.\n",n1,fm1);
		}
		if(n2>=80)
		{
			printf("Chemistry\t\t\t %dD\t\tF.M.\n",n2,fm2);	
		}
		else
		{
			printf("Chemistry\t\t\t %d\t\tF.M.\n",n2,fm2);
		}
		if(n3>=80)
		{
			printf("Math\t\t\t\t %dD\t\tF.M.\n",n3,fm3);
		}
		else
		{
			printf("Math\t\t\t\t %d\t\tF.M.\n",n3,fm3);
		}
		if(n4>=80)
		{
			printf("Hindi\t\t\t\t %dD\t\tF.M.\n",n4,fm4);
		}
		else
		{
			printf("Hindi\t\t\t\t %d\t\tF.M.\n",n4,fm4);
		}
		if(n5>=80)
		{
			printf("English\t\t\t\t %dD\t\tF.M. \n",n5,fm5);
		}
		else
		{
			printf("English\t\t\t\t %d\t\tF.M. \n",n5,fm5);
		}
    	printf("------------------------------------\n");
    	printf("Total Marks \t\t\t%d\t\tF.M.\n",om,fm);
    	printf("------------------------------------\n");
    	printf("Total Percentage\t\t%.2f",per);
    	}
	else
	{
		printf("Please give correct obtain marks");
	}
    return 0;
}
