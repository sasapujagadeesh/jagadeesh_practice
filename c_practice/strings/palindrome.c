#include<stdio.h>
#include<string.h>
void main()
{
	int i;
	char str[100];
	printf("enter a string:");
	scanf("%s",str);
	int len = strlen(str);
	for(i = 0;i<=len/2;i++)
	{
		if(str[i] == str[len-i-1])
		{
			continue;
		}
		else
		{
			break;
		}
	}
	i = i-1;
	if(i == len/2)
	{
		printf("%s is a palindrome",str);
	}
	else
	{
		printf("%s is not a palindrome",str);
	}
	printf("\n");
}	
