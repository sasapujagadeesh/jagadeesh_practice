#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
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
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 20;
	head->link = NULL;

	struct node* current;
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;
	head->link = current;

	printf("before inserting at first :  ");
	traverse(head);

	current = (struct node*)malloc(sizeof(struct node));
	current->data = 10;
	current->link = head;
	head = current;

	printf("after inserting at first :  ");
	traverse(head);
}

