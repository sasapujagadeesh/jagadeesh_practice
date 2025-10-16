#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
void traverse(struct node* ptr)
{
	if(ptr == NULL)
	{
		printf("no elements in the list");
	}
	else
	{
		while(ptr != NULL)
		{
			printf("%d ",ptr->data);
			ptr = ptr->link;
		}
	}
	printf("\n");
}
void main()
{
	struct node* head;
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 10;
	head->link = NULL;

	struct node* current;
	current = (struct node*)malloc(sizeof(struct node));
	current->data = 20;
	current->link = NULL;
	head->link = current;

	current = (struct node*)malloc(sizeof(struct node));
	current->data = 30;
	current->link = NULL;
	head->link->link = current;

	printf("%d ",head->data);
	printf("%d ",head->link->data);
	printf("%d \n",head->link->link->data);
	printf("%d \n",current->data);

	printf("By using the function traverseing the linked list:");

	traverse(head);

}
