#include<stdio.h>
#include<stdlib.h>

struct Employee//structure name
{
    char ename[20];
    int sal;
};

struct Employee emp[5];
int i, j,Num=4;
//printf("\nEnter how many you want to insert:");
//scanf("%d",&Num);
void ask()
{
    for(i=0;i<Num;i++)
    {
        printf("\nEnter [%dst] Employee record:\n", i+1);
        printf("\nEmployee name: ");
        scanf("%[^\n]s", emp[i].ename);
        printf("\nEnter Salary: ");
        scanf("%d", &emp[i].sal);
        fflush(stdin);
    }
    printf("\nDisplaying Employee record:\n");
    for(i=0;i<Num;i++)
    {
        printf("\nEmployee name is %s", emp[i].ename);
        printf("\nSlary is %d", emp[i].sal);
    }
}
void main()
{
    ask();
}
