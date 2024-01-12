#include<stdio.h>
#include<stdlib.h>
int main()
{
	int pass,id;
	do
	{
		printf("\nEnter id=");
		scanf("%d",&id);
		printf("\nEnter password=");
		scanf("%d",&pass);
	}while((id!=7979759998)&&(pass!=7979));
	printf("Open to world");
	return 0;
}
