#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100] = "yocto tutor";
	char str2[100] = "yocto tutor";
	char *ptr1 = str1;
	char *ptr2 = str2;
	if(strcmp(ptr1,ptr2))
	{
		printf("str1 is grater than str2\n");
	}
	else
	{
		printf("str1 is less than  or equal to str2\n");
	}
}
