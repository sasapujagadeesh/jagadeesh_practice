#include<stdio.h>
void main()
{
	int n;
	printf("enter n value:");
	scanf("%d",&n);
	int carry = 1;
	while(n & 1)
	{
		n = n ^ carry;
		carry = carry << 1;
	}
	n = n ^ carry;
	printf("%d\n",n);
}
