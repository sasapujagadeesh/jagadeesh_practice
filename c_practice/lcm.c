#include<stdio.h>
void main()
{
	int n;
	printf("enter how many numbers:");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:");
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	int lcm  = arr[n-1];
        for(int i = arr[n-1];i>=arr[n-1];i+=arr[n-1])
        {
                int count = 0;
                for(int j = 0;j<n;j++)
                {
                        if(i%arr[j] == 0)
                        {
                                count++;
                        }
                }
                if(count == n)
                {
                        printf("lcm is %d",i);
                        break;
                }
        }
	printf("\n");
}
