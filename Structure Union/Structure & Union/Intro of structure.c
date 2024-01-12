#include<stdio.h>
#include<string.h>

struct Student//structure name is also called structure tag.
{
    char name[25];//char type
    int age;//int type
};//semicolon is mandatory in struture.

int main()//Main function declaration
{
    struct Student s1;
    /*
        s1 is a variable of Student type and 
        age is a member of Student
    */
    s1.age = 18;//dot is also called period and member access operator
    /*
        using string function to add name
    */
    strcpy(s1.name, "Rahul Gupta");
    /*
        displaying the stored values
    */
    printf("Name of Student 1: %s\n", s1.name);
    printf("Age of Student 1: %d\n", s1.age);
    
    return 0;
}
