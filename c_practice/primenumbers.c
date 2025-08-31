#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c=0,d=0;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value:");
	scanf("%d",&b);
	int *ptr = (int*)calloc(b,sizeof(int));
	for(int i =a;i<=b;i++)
	{
		int count = 0;
		for(int j =2;j<i;j++)
		{
			if(i%j == 0)
			{
				count++;
			}
		}
		if(count == 0)
		{
			*(ptr+c) = i;
			c++;
			d++;
		}
	}
	ptr = (int*)realloc(ptr,d*sizeof(int));
	for(int i =0;i<d;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	return 0;
}	
