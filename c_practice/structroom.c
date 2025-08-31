#include<stdio.h>
struct members
{
	int num;
	char name[50];
	int rent;
};
void main()
{
	struct members m1,m2,m3;
	printf("enter the details of m1\n");
	scanf("%d %s %d",&m1.num,m1.name,&m1.rent);
	printf("enter the details of m2\n");
	scanf("%d %s %d",&m2.num,m2.name,&m2.rent);
	printf("enter the details of m3\n");
	scanf("%d %s %d",&m3.num,m3.name,&m3.rent);
	printf("%d %s %d\n",m1.num,m1.name,m1.rent);
	printf("%d %s %d\n",m2.num,m2.name,m2.rent);
	printf("%d %s %d\n",m3.num,m3.name,m3.rent);
}
