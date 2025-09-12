#include<stdio.h>
void main()
{
	char str[50];
	printf("enter a string:");
	scanf("%s",str);
	char *ptr = str;
	while(*ptr != '\0')
	{
		if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
		{
			printf("%c",*ptr);
		}
		ptr++;
	}
	printf("\n");
}
