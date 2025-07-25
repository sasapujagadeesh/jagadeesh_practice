#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d %d",&a,&b);
	while(a != 0 && b != 0)
	{
		if(a>b)
		{
			a = a%b;
		}
		else
		{
			b = b%a;
		}
	}
		if(a == 0)
		{
			printf("hcf = %d",b);
		}
		else
		{
			printf("hcf = %d",a);
		}
	
}

	

