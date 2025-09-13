#include<stdio.h>
void main()
{
	int n;
	struct employee
	{
		int id;
		char name[30];
		int salery;
	};
	struct employee emp[100];
	printf("enter no of employees:");
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		printf("enter employee details:\n");
		printf("enter emp id:");
		scanf("%d",&emp[i].id);
		printf("enter employee name:");
		scanf("%s",emp[i].name);
		printf("enter employee salery:");
		scanf("%d",&emp[i].salery);
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d %s %d",emp[i].id,emp[i].name,emp[i].salery);
		printf("\n");
	}
	printf("\n");
}
