#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* pre;
	int data;
	struct node* next;
};

struct node* head;

void insert_at_begin(int value)
{
	struct node* ptr = malloc(sizeof(struct node));
	ptr->pre  = NULL;
	ptr->data = value;
	ptr->next = NULL;

	head->pre = ptr;
	ptr->next = head;

	head = ptr;
}

void insert_at_position(struct node* ptr,int pos,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->pre = NULL;
	new->data = value;
	new->next = NULL;

	int count = 1;
	while(count != (pos - 1))
	{
		count++;
		ptr = ptr->next;
	}

	new->next = ptr->next;
	ptr->next = new;
}

void insert_at_end(struct node* ptr,int value)
{
	while(ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	struct node* new = malloc(sizeof(struct node));
	new->pre = NULL;
	new->data = value;
	new->next = NULL;

	ptr->next  = new;
	new->pre   = ptr->next;

}

void reverse(struct node* ptr)
{
	struct node* ptr1 = ptr;
	struct node* ptr2 = ptr->next;

	ptr1->next = NULL;
	ptr1->pre = ptr2;

	while(ptr2 != NULL)
	{
		ptr2->pre = ptr2->next;
		ptr2->next = ptr1;
		ptr1 = ptr2;
		ptr2 = ptr2->pre;
	}
	head = ptr1;
}

void traverse(struct node* ptr)
{
	while(ptr != NULL)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void main()
{
	head = malloc(sizeof(struct node));
	head->pre = NULL;
	head->data = 20;
	head->next = NULL;

	insert_at_begin(10);

	insert_at_end(head,50);

	insert_at_position(head,3,30);

	insert_at_position(head,4,40);
	printf("before reverse :");
	traverse(head);

	reverse(head);
	printf("after reverse :");

	traverse(head);

}


