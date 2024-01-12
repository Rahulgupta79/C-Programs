#include<stdio.h>
int main()
{
	int arr[5]={5,10,15,12,23},i;
	for(i=0;i<5;i++)
	{
		printf("\nIndex[%d]=Value[%2d] ",i,*(arr+i));
		printf("Address[%d]",&arr[i]);
		printf("Address[%d]",arr);
	}
	return 0;
}
