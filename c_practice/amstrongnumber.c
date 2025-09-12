#include<stdio.h>
#include<math.h>
void main()
{
	int n,count = 0,result = 0;
	printf("enter n value:");
	scanf("%d",&n);
	int num = n;
	int temp = n;
	while(temp > 0)
	{
		count++;
		temp = temp /10;
	}
	while(n>0)
	{
		int rem = n%10;
		result = result + pow(rem,count);
		n = n/10;
	}
	if(num == result)
	{
		printf("%d is a amstrong number\n",num);
	}
	else
	{
		printf("%d is not a amstrong number\n",num);
	}
}

