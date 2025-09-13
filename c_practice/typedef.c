#include<stdio.h>
typedef struct
{
	char name[50];
	char fuel[50];
	int price;
	int milage;
}car;
int main()
{
	car c1;
	printf("enter the details of car c1:\n");
	scanf("%s %s %d %d",c1.name,c1.fuel,&c1.price,&c1.milage);
	printf("%s %s %d %d",c1.name,c1.fuel,c1.price,c1.milage);
}
