#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};

struct node* head;

void traverse(struct node* ptr)
{
	if(ptr == NULL)
	{
		printf("linked list ias empty\n");
	}
	else
	{
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
	}
	
}

void add_element(struct node* ptr,int value)
{
	struct node* new_node = malloc(sizeof(struct node));
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	ptr->link = new_node;
	new_node->data = value;
	new_node->link = NULL;
}

void delete_entire_list(struct node* ptr)
{
	struct node* new_node;
	while(ptr != NULL)
	{
		new_node = ptr;
		ptr = ptr->link;
		free(new_node);
	}
	head = NULL;
}
		


void main()
{
	head = malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	add_element(head,20);

	add_element(head,30);

	add_element(head,40);

	traverse(head);

	delete_entire_list(head);

	traverse(head);
}


