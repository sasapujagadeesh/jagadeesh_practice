#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* insert_at_empty(int value)
{
	struct node* ptr;
	ptr = malloc(sizeof(struct node));
	ptr->data = value;
	ptr->link = NULL;
	return ptr;
}

void insert_at_end(struct node* ptr,int value)
{
	struct node* new;
	new = malloc(sizeof(struct node));
	new->data = value;
	new->link = NULL;

	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = new;
}

void insert_at_intermediate(struct node* ptr,int pos,int value)
{
	struct node* new;
	new = malloc(sizeof(struct node));
	new->data = value;
	new->link = NULL;

	int count  = 1;
	while(count != (pos-1))
	{
		count++;
		ptr = ptr->link;
	}
	new->link = ptr->link;
	ptr->link = new;
}

void traverse(struct node* ptr)
{
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

void main()
{
	struct node* head;
	head = insert_at_empty(10);
	insert_at_end(head,30);
	insert_at_end(head,40);
	traverse(head);
	insert_at_intermediate(head,2,20);
	traverse(head);
}
