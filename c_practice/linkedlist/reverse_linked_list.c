#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
struct node* head;
struct node* pre = NULL;
struct node* next = NULL;



void reverse_linked_list(struct node* ptr)
{
	head  = ptr;

	while(head != NULL)
	{
		next = head->link;
		head->link = pre;
		pre = head;
		head = next;
	}
	head = pre;
}

void add_new_node(struct node* ptr,int value)
{
	struct node* ptr1 = malloc(sizeof(struct node));
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = ptr1;
	ptr1->data = value;
	ptr1->link = NULL;
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
	head  = malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	add_new_node(head,20);

	add_new_node(head,30);

	add_new_node(head,40);
	
	printf("before reverse linked list  :");
	traverse(head);
	reverse_linked_list(head);
	printf("after reverse linked list   :");
	traverse(head);
}


