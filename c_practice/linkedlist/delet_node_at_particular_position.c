#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node* link;
};

void delete_at_particular(struct node* ptr,int pos)
{
	int count  = 1;
	while(count != (pos-1))
	{
		count++;
		ptr = ptr->link;
	}
	struct node* ptr1 = ptr->link;
	ptr->link = ptr->link->link;
	free(ptr1);
	ptr1 = NULL;
}



void add_new_node(struct node* ptr,int value)
{
        struct node* new_node = malloc(sizeof(struct node));
        new_node->data = value;
        new_node->link = NULL;
        while(ptr->link != NULL)
        {
                ptr = ptr->link;
        }

        ptr->link = new_node;
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
        struct node* head = malloc(sizeof(struct node));
        head->data = 10;
        head->link = NULL;

        add_new_node(head,20);

        add_new_node(head,30);

        add_new_node(head,40);
        printf("before delete the particular  node: ");
        traverse(head);
        
	delete_at_particular(head,2);
	printf("after delkete the particular node : ");
	traverse(head);
}

