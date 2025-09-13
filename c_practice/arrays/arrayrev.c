#include<stdio.h>
void main()
{
	int i,j,count  = 0;
	int a[] = {1,2,3,4,5,6,7,8,9};
	int b = sizeof(a)/sizeof(a[0]);
	int c[b];
	for(i = 0;i<b;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n");
	for(i=(b-1);i>=0;i--)
	{
		for(j=0;j<=1;j++)
		{
			c[count] = a[i];
		}
		count = count + 1;

	}
	for(i = 0;i<b;i++)
	{
		printf(" %d ",c[i]);
	}
	printf("\n");
	printf("%d\n",c[0]);
}

		
