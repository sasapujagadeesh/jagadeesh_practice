#include<stdio.h>
void main()
{
	int a;
	int b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	int *ptr1 = &a;
	int *ptr2 = &b;
	printf("before swaping\n");
	printf("a = %d\n",a);
        printf("b = %d\n",b);
	int temp = *ptr1;
	*ptr1 = b;
	*ptr2 = temp;
	printf("after swaping\n");
	printf("a = %d\n",a);
       printf("b = %d\n",b);
}       

