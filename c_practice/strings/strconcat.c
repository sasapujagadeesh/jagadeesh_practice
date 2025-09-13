#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100] = "mahi and sai";
	char str2[] = "are best friends";
	char *ptr1 = str1;
	char *ptr2 = str2;
	strcat(ptr1,ptr2);
	printf("%s\n",str1);
}
