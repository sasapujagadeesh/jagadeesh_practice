#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cube(int n)
{
	return n*n*n;
}
void main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	int *ptr = (int*)malloc(b*sizeof(int));
	int count = 0;
	for(int i =a;i<=b;i++)
	{
		int n = i;
		int sum = 0;
		while(n>0)
		{
			sum = sum + cube(n%10);
			n = n/10;
		}
		if(sum == i)
		{
			*(ptr+count) = i;
			count++;
		}
	}
	ptr = realloc(ptr,count*sizeof(int));
	for(int i = 0;i<count;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}


