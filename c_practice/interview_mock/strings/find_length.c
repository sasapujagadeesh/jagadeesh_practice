#include<stdio.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '\n')
		{
			str[i] = '\0';
		}
		i++;
	}
	int len = 0;
	int j = 0;
	while(str[j] != '\0')
	{
		len++;
		j++;
	}
	printf("length of the string is %d\n",len);
}

