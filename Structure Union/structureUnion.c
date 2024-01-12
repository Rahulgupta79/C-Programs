/*
#include<stdio.h>
struct stud//structuere ko define karne ke lia struct keyword use karte hai
{
	int	roll;//4 byte
	char name[20];//20 byte
	float marks;//4 byte
};//full memory 28 byte ka bnega kyoki structure har member ke lia alag-alag memory bnata hai
int main()
{
	struct stud s;//struct stud structure ka nam hai jiske ek member s ko janne ki kosis ki ja rahi hai
	printf("Enter students records like roll,name and marks:");
	scanf("%d %s %f",&s.roll,&s.name,&s.marks);
	printf("Student-:%d %s %f",s.roll,s.name,s.marks);
	return 0;
}
*/

#include<stdio.h>
union stud//union ko define karne ke lia union keyword use karna padta hai
{
	int roll;//4 byte
	char name[20];//20 byte(biggest of datatype union ka memory hota hai 
	float marks;//4 byte
};//full memory 20 byte ka bnega kyoki union apne andar bne sabse bade member ke lia memory occupy karta hai har ek ke lia nhi
int main()
{
	union stud s;//union stud union ka nam hai jiske ek member s ko janne ki kosis ki ja rahi hai
	/*
	printf("Enter students records like roll,name and marks:");//ye kam sahi se nhi karega kyoki union ekbar me sirf ek datatype pe work karta hai kyoki iske pas memory ki kami hoti hai 
	scanf("%d %s %f",&s.roll,&s.name,&s.marks);
	printf("Student-:%d %s %f",s.roll,s.name,s.marks);
	*/
	printf("Enter studentRoll-");
	scanf("%d",&s.roll);
	printf("%d",s.roll);
	printf("Enter studentName-");
	scanf("%s",&s.name);
	printf("%d",s.name);
	printf("Enter studentMarks-");
	scanf("%d",&s.marks);
	printf("%d",s.marks);
	return 0;
}
