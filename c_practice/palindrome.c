#include<stdio.h>
int a,rev,rem,ori;
void main()
{
	printf("enter a number\n");
	scanf("%d",&a);
	ori = a;
	while(a != 0)
	{
	rem = a%10;
	rev = rev*10+rem;
	a = a/10;
	}
	if(ori == rev)
	{
		printf("num is palindrome");
	}
	else{
		printf("num is not palindrome");
	}
}






