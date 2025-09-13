#include<stdio.h>
#include<string.h>
void main()
{
	struct lib
	{
		char name[50];
		int price;
		int pages;
	};
	struct lib book1,book2,book3;
	struct lib *ptr1;
	ptr1 = &book1;
	printf("enter book1 details");
	fgets(ptr1->name,50,stdin);
	ptr1->name[strcspn(ptr1->name,"\n")] = '\0';
	scanf("%d %d",&ptr1->price,&ptr1->pages);
	/*printf("enter book2 details");
	scanf("%s %d %d",book2.name,&book2.price,&book2.pages);
	printf("enter book3 details");
	scanf("%s %d %d",book3.name,&book3.price,&book3.pages);
	printf("%is %d %d\n",book1.name,book1.price,book1.pages);
	printf("%s %d %d\n",book2.name,book2.price,book2.pages);
	printf("%s %d %d\n",book3.name,book3.price,book3.pages);
	printf("\n");*/
	printf("%s %d %d\n",ptr1->name,ptr1->price,ptr1->pages);
}

