#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* pre;
	int data;
	struct node* next;
};

struct node* add_at_empty(struct node* head,int value)
{
	head = malloc(sizeof(struct node));
	head->pre = NULL;
	head->data = value;
	head->next = NULL;
	return head;
}



void main()
{
	struct node* head;
	head = add_at_empty(head,10);
	printf("%d \n",head->data);
}
	
