#include<stdio.h>
#include<stdlib.h>

struct Node
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

struct Node* InsertAtBegining(struct Node* head,int data)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr; 
}

struct Node* InsertAtindex(struct Node* head,int data,int index)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node* p=head;
	int i=0;
	while(i!=index-1)
	{
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}

struct Node* InsertAtEnd(struct Node* head,int data)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node* p=head;
	while(ptr->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
int main()
{
	struct Node* ptr;
	struct Node* head;
	struct Node* second;
	struct Node* third;
	struct Node* fourth;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	 /* Linking Node */
	 
	head->data=3;//first data insert
	head->next=second;//second data address
	
	second->data=5;
	second->next=third;
	
	third->data=7;
	third->next=fourth;
	
	fourth->data=9;
	fourth->next=NULL;
	
	//linkedlistTraversal(head);
	//head=InsertAtBegining(head,12);
	//head=InsertAtindex(head,124,2);
	head=InsertAtEnd(head,36);
	linkedlistTraversal(head);
	
	return 0;
}
