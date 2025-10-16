#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};

void delete_last_node(struct node* ptr)
{
	struct node* last_node;
	while(ptr->link != NULL)
	{
		last_node = ptr;
		ptr = ptr->link;
	}
	last_node->link = NULL;
	free(ptr);
	ptr = NULL;
}
void add_new_node(struct node* ptr,int value)
{
	struct node* new_node = malloc(sizeof(struct node));
	new_node->data = value;
	new_node->link = NULL;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}

	ptr->link = new_node;
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
	struct node* head = malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	add_new_node(head,20);

	add_new_node(head,30);

	add_new_node(head,40);
	printf("before delete the last node: ");
	traverse(head);
	delete_last_node(head);
	printf("after delete the last node: ");
	traverse(head);
}


