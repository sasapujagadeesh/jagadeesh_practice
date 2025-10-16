#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node* pre;
	int data;
	struct node* next;
};

struct node* add_at_empty(int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->pre = new;
	new->data = value;
	new->next = new;
	return new;
}

struct node* tail;

void insert_at_begin(struct node* ptr,int value)
{
	struct node* first = ptr->next;
	struct node* new = malloc(sizeof(struct node));
	new->pre = first->pre;
	new->data = value;
	new->next = first;

	first->pre = new;
	ptr->next = new;
}

void insert_at_end(struct node* ptr,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->pre = ptr;
	new->data = value;
	new->next = ptr->next;

	ptr->next = new;

	tail = new;
}

void insert_at_intermediate(struct node* ptr,int pos,int value)
{
	int count = 1;
	struct node* first = ptr->next;

	while(count != (pos-1))
	{
		first = first->next;
		count++;
	}

	struct node* new = malloc(sizeof(struct node));
	new->pre = first;
	new->data = value;
	new->next = first->next;

	first->next->pre = new;
	first->next = new;
}

void delete_begin_node(struct node* ptr)
{
	struct node* delete;
	delete = ptr->next;
	ptr->next = delete->next;
	delete->next->pre = ptr;
	free(delete);
	delete = NULL;
}

void delete_end_node(struct node* ptr)
{
	ptr->next->pre = ptr->pre;
	ptr->pre->next = ptr->next;
	tail = ptr->pre;

	free(ptr);
	ptr = NULL;
}

void delete_intermediate_node(struct node* ptr,int pos)
{
	struct node* first = ptr->next;

	int count = 1;
	while(count != (pos-1))
	{
		count++;
		first = first->next;
	}

	struct node* delete = first->next;

	first->next = delete->next;
	delete->next->pre = first;

	free(delete);
	delete = NULL;
}


void traverse(struct node* ptr)
{
	struct node* temp = ptr->next;
	do
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}while(temp != ptr->next);
	printf("\n");
}


void main()
{
	tail = add_at_empty(20);

	insert_at_begin(tail,10);

	insert_at_end(tail,30);

	insert_at_intermediate(tail,2,40);

	insert_at_intermediate(tail,3,50);

	traverse(tail);

	printf("after delete operation:\n");

	delete_begin_node(tail);

	printf("after deleting the beginoing node:\n");

	traverse(tail);

	delete_end_node(tail);

	printf("after deleteing the end node:\n");

	traverse(tail);

	delete_intermediate_node(tail,2);

	printf("after deleteing the intermediate node:\n");

	traverse(tail);
}


