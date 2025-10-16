#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};


void insert_at_end(struct node* add,int value)
{
	struct node* ptr = add;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	ptr->link = new_node;
	new_node->data = value;
}

void insert_at_particular_position(struct node* address,int value,int pos)
{
	int count = 0;
	struct node* new_address;
	while(count != (pos-2))
	{
		count++;
		address = address->link;
	}
	
	struct node* new_node_pos = (struct node*)malloc(sizeof(struct node));
	new_node_pos->link = address->link;
	address->link = new_node_pos;
	new_node_pos->data = value;

}



void traverse(struct node* address)
{
	while( address != NULL)
	{
		printf("%d ",address->data);
	       	address = address->link;
	}
}


void main()
{
	struct node* head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	insert_at_end(head,20);

	insert_at_end(head,30);

	insert_at_end(head,40);

	insert_at_particular_position(head,50,2);

	insert_at_particular_position(head,60,3);

	traverse(head);
	printf("\n");
}

