#include<stdio.h>
#include<stdlib.h>
int count = 0;
int fact(int n)
{
	int result = 1;
	for(int i =1;i<=n;i++)
	{
		result = (result*i);
	}
	return result;
}
void main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	int *ptr = (int*)calloc(b,sizeof(int));
	for(int i = a;i<=b;i++)
	{
		int result1 = 0;
	        int n = i;	
		while(n>0)
		{
			result1 = result1 + fact(n%10);
			n = n/10;
		}
		if(result1 == i)
		{
			*(ptr+count) = i;
			count++;
		}
	}
	ptr = (int*)realloc(ptr,count*sizeof(int));
	for(int i = 0;i<count;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
}

			




