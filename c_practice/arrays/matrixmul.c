#include<stdio.h>
void main()
{
	int arr[3][3] = {{1, 2,3},{4, 5, 6},{7, 8, 9}};
	int brr[3][3] = {{1, 2,3},{4, 5, 6},{7, 8, 9}};
	int res[3][3];
	//arr[3][3] = {{1, 2,3},{4, 5, 6},{7, 8, 9}};
	//brr[3][3] = {{1, 2,3},{4, 5, 6},{7, 8, 9}};
	int result = 0;
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			for(int k = 0;k<3;k++)
			{
				result = result + (arr[i][k]*brr[k][j]);
				res[i][j] = result;
			}
		
		result = 0;
		}
	}
	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<3;j++)
		{
			printf("%-4d ",res[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


