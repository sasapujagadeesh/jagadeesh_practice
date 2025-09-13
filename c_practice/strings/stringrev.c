#include<stdio.h>
#include<string.h>
void main()
{
	printf("enter the string:");
	char str[200];
	scanf("%[^\n]",str);
	int len = strlen(str);
	for(int i =len;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}

