#include<stdio.h>
void main()
{
	int a;
	int b;
	printf("enter  a and b values:");
	scanf("%d %d",&a,&b);
	int *ptr1 = &a;
	int *ptr2 = &b;
	int result = *ptr1 + *ptr2;
	printf(" result = %d\n",result);
}
