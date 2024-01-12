#include<stdio.h>
int main()
{
	int n,rev,d;
	printf("Enter a number=");
	scanf("%d",&n);
		rev=0;
		REV:d=n%10;
	    rev=rev*10+d;
		n=n/10;	
		if(n!=0)
		goto REV;
		printf("Reverse=%d",rev);
	return 0;
}

