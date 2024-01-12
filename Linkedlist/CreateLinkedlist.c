#include<stdio.h>
#include<stdlib.h>
struct Node // node initialization 
{
	int data;
	struct Node* next;
};

void linkedlistTraversal(struct Node* ptr)
{
	while(ptr!=NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}
int main()
{
	struct Node* jpr;
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	
	jpr=(struct Node*)malloc(sizeof(struct Node));// yaha ye btaya gya hai ki pointer jo struct node type ka bna hai kis type ka data rakhega
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	 /* Linking Node */
	jpr->data=1;//insert in beginning
	jpr->next=head;//aur jpr k next me head ka address
	
	head->data=3;//first data insert
	head->next=second;//second data address
	
	second->data=5;
	second->next=third;
	
	third->data=7;
	third->next=fourth;
	
	fourth->data=9;
	fourth->next=NULL;
	
	linkedlistTraversal(jpr);
	
	return 0;
}
