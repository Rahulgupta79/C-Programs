#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	
	if(argc==3)
	{
		if(strcmp(argv[1]=="-p")==0)
		{
			fp=fopen("Su.dat","w");
			if(fp==NULL)
			{
				printf("Error");
			}
			else
			{
				
			}
		}
		
		
	}
	else
	{
		perror("Undefine");
	}
	return 0;
}
