#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* tail;

struct node* insert_at_empty(int value)
{
	struct node* ptr = malloc(sizeof(struct node));
	ptr->data = value;
	ptr->link = ptr;
	return ptr;
}

void insert_new_node(struct node* ptr,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->data = value;
	new->link = ptr->link;
	ptr->link = new;
	tail = new;
}

void insert_at_begin(struct node* ptr,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->data = value;
	new->link = tail->link;
	tail->link = new;
}


void insert_at_end(struct node* ptr,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->data = value;
	new->link = tail->link;
	tail->link = new;
	tail = new;
}
void insert_at_intermediate(struct node* ptr,int pos,int value)
{
	struct node* new = malloc(sizeof(struct node));
	new->data = value;
	new->link = NULL;

	int count = 1;
	while(count != (pos-1))
	{
		count++;
		ptr = ptr->link;
	}

	new->link = ptr->link->link;
	ptr->link->link = new;
}

void delete_begin_node(struct node* ptr)
{
	struct node* ptr1 = ptr->link;
	ptr->link = ptr1->link;
	free(ptr1);
	ptr1 = NULL;
}

void delete_node_end(struct node* ptr)
{
	struct node* temp = ptr->link;
	while(temp->link != ptr)
	{
		temp = temp->link;
	}

	struct node* temp1 = ptr;
	temp->link = ptr->link;
	

	tail = temp;
	free(temp1);
	temp1 = NULL;
}

void delete_intermediate_node(struct node* ptr,int pos)
{
	struct node* temp = ptr->link;
	int count = 1;
	while(count != (pos-1))
	{
		temp = temp->link;
	}
	struct node* temp2 = temp->link;

	temp->link = temp2->link;
	free(temp2);
	temp2 = NULL;
}

void count_nodes(struct node* ptr)
{
	struct node* temp = ptr;
	int count = 0;
	do
	{
		count++;
		temp = temp->link;

	}
	while(temp->link != ptr->link);
	printf("number of nodes in the linked list: %d\n",count);
}

void search(struct node* ptr,int value)
{
	int index = 0;
	struct node* temp = ptr->link;

	do
	{
		if(temp->data == value)
		{
			printf("%d is present at index %d\n",value,index);
			break;
		}
		index++;
		temp = temp->link;
	}while(temp != ptr->link);
}

void traverse(struct node* ptr)
{
	int count = 0;
	struct node* new = ptr->link;
	do
	{
		count++;
		printf("%d ",new->data);
		new = new->link;
	}
	while(new != tail->link);
	printf("\n");
	printf("number of nodes in the linked list: %d\n",count);
}

void main()
{
	tail = insert_at_empty(10);

	insert_new_node(tail,20);

	insert_new_node(tail,30);

	printf("linked lsit:");

	traverse(tail);

	insert_at_begin(tail,1);

	printf("after inserting new node at begin:");

	traverse(tail);

	insert_at_end(tail,40);

	printf("after inserting new node at end:");

	traverse(tail);

	insert_at_intermediate(tail,2,5);

	printf("after inserting new node at intermediate:");

	traverse(tail);

	search(tail,5);

	search(tail,40);

	delete_begin_node(tail);

	printf("after delete node at begin:");

	traverse(tail);

	delete_node_end(tail);

	printf("after delete node at end:");

	traverse(tail);

	delete_intermediate_node(tail,2);

	printf("after delete a node at intermediate:");

	traverse(tail);

	count_nodes(tail);

}



	
