#include<stdio.h>
int a,i,count;
void main()
{
	printf("enter a number");
	scanf("%d",&a);
	for(i = 1;i<=a;i++)
	{
		if(a%i == 0)
		{
			count++;
		}
		else
		{
			//continue;
		}
	}
	if(count == 2)
	{
		printf("%d is a prime number",a);
	}
	else
	{
		printf("%d not a prime",a);
	}
}

