#include<stdio.h>
#include<string.h>
void strrev(char *ptr)
{
	int len  = strlen(ptr);
	for(int i = len-1;i>=len/2;i--)
	{
		char temp;
		temp = *(ptr + len - 1 - i);
		*(ptr + len -1 -i) = *(ptr + i);
		*(ptr + i) = temp;
	}
}
void main()
{
	char str1[] = "tarun and ravi are friends";
	char *ptr = str1;
	strrev(ptr);
	printf("%s\n",ptr);
}
