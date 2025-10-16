#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void add(struct node* ptr,int value)
{
	struct node* pointer = (struct node*)malloc(sizeof(struct node));
	pointer->data = value;
	pointer->link = NULL;
	while(ptr->link != NULL)
	{
		ptr = ptr->link;
	}
	ptr->link = pointer;
}
void traverse(struct node* ptr)
{
	if(ptr == NULL)
	{
		printf("Linkjed list is empty");
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
void main()
{
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 40;
	head->link = NULL;

	struct node* current;
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 50;
	current->link = NULL;
	head->link = current;

	current = (struct node*)malloc(sizeof(struct node));
	current->data = 60;
	current->link = NULL;
	head->link->link = current;
	printf("before inserting new element:  ");
	traverse(head);

	add(head,70);
	printf("elements in the linked list:  ");
	traverse(head);

}

