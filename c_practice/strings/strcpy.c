#include<stdio.h>
#include<string.h>
void main()
{
	char str1[] = "sai is topper";
	char str2[100];
	char *ptr = str1;
	strcpy(str2,ptr);
	printf("%s\n",str2);
}
