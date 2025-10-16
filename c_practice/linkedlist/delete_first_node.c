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
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->link;
	}
	printf("\n");
}

void delete_first_node(struct node* ptr)
{
	struct node* ptr1 = ptr;
	head = ptr->link;
	free(ptr1);
}

void main()
{
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = 20;
	new_node->link = NULL;
	head->link = new_node;

	new_node = malloc(sizeof(struct node));
	new_node->data = 30;
	new_node->link = NULL;
	head->link->link = new_node;

	printf("before delete first node :  ");
	traverse(head);
	printf("after delete first node  :  ");
	delete_first_node(head);
	traverse(head);
	
}



