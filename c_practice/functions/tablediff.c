#include<stdio.h>
int tab(int a,int b)
{
	if(a>b)
	{
	for(int i = 1;i<=10;i++)
	{
		printf("%d ",(a*i - b*i));
	}
	}
	else
	{
		printf("a less than b");
	}
}
void main()
{
	int a,b;
	printf("enter the 2 numbers a grater than b");
	scanf("%d %d",&a,&b);
	tab(a,b);
}


