#include<stdio.h>
void main()
{
	int i,j;
	int arr[5][5];
	for(i = 0;i<=4;i++)
	{
		printf("enter row %d elements",i+1);
		for(j = 0;j<=4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i = 0;i<=4;i++)
        {
                for(j = 0;j<=4;j++)
                {
                        printf("%4d ",arr[i][j]);
                }
		printf("\n");
        } 
	printf("rows sum:");
	for(i = 0;i<=4;i++)
	{
		int count = 0;
		for(j =0;j<=4;j++)
		{
	
			count = count + arr[i][j];
	         }
		printf("%d ",count);
	}
	printf("\n");
	printf("coloum sum:");
	for(i = 0;i<=4;i++)
	{
		int sum = 0;
		for(j =0;j<=4;j++)
		{
			sum = sum + arr[j][i];
		}
		printf("%d ",sum);
	}
	printf("\n");

}
