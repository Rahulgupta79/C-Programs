#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=5;//void pointer bnane ke liye void poiter create karna parta hai aur use kis form me 
	float c=9.2;//aapko chahiye ye btana parta hai
	void *vptr;// isme ye btaya gya hai ki koi ek value hm void pointer me assign karte hai aur use typecast ke through use kar lete hai 
	vptr=&a;
	//vptr=&c;
	printf("\n %d",*(int*)vptr);
	//printf("\n%f",*(float*)vptr);
	return 0;
}
