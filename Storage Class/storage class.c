/*
#include<stdio.h>
void digit()
{
	auto int a=10;
	static int b=10;
	printf("%d %d\n",a,b);
	++a;
	++b;
}
int main()
{
	digit();
	digit();
	digit();
	return 0;
}
*/
#include<stdio.h>

int a=10;//Global Variable  &&  normally declare kiya jane wala variable auto variavle hi hota hai
void digit()
{
	printf("%d\n",a);
}
int main()
{
	printf("%d\n",a);
	digit();
	if(1)
	{
		printf("%d\n",a);
	}
	return 0;
}
/*
int a;
auto int a;
register int a;
*/
