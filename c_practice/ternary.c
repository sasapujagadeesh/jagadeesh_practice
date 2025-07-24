#include<stdio.h>
void main()
{
	int a,b,max;
	printf("enter the values of a a and b");
	scanf("%d %d",&a,&b);
	max = (a>b)?a:b;
	printf("grater value among a and b is %d",max);
}
