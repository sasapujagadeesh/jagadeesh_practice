#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,count = 0;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	int *ptr = (int*)malloc(b*sizeof(int));
	for(int i = a;i<b;i++)
	{
		int sum = 0;
		for(int j = 1;j<i;j++)
		{
			if(i % j == 0)
			{
				sum = sum + j;
			}
		}
		if(sum == i)
		{
			*(ptr+count) = i;
			count++;
		}
	}
	for(int i = 0;i<count;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	free(ptr);
}


