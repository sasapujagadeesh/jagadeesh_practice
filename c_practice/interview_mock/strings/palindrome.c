#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int i = 0;
	int j = strlen(str)-1;
	while(i < j)
	{
		if(str[i] != str[j])
		{
			printf("the string is not a plaindrome\n");
			return;
		}
		i++;
		j--;
	}
	printf("the string is palindrome\n");
}

