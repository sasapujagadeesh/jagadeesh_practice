#include<stdio.h>
void main()
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int sum;
	int count = 0;
	printf("enter the sum value:");
	scanf("%d",&sum);
	for(int i = 0;i<10;i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\n");
	for(int i = 0;i<10;i++)
	{
		for(int j = (i+1);j<10;j++)
		{
			if((arr[i]+arr[j]) == sum)
			{
				if(arr[i] != arr[j])
				{

				printf(" %d + %d = %d\n",arr[i],arr[j],sum);
				count = 1;
				}
			}
		}
	}
	if(count == 0 )
	{
		printf("sum is not possible");
	}
	printf("\n");
}	
