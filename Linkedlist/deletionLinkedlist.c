#include<stdio.h>
#inclede<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void display(struct Node* head)
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=2;
	head->next=second;
	
	second->data=3;
	second->next=third;
	
	third->data=4;
	third->next=NULL;
	
	
	display(head);
	return 0;
}
