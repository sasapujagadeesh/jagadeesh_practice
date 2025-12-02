#include<stdio.h>
void main()
{
	char str1[100];
	char str2[100];
	printf("enter the string1:");
        fgets(str1,100,stdin);
	int i = 0;
	while(str1[i] != '\0')
	{
		if(str1[i] == '\n')
		{
			str1[i] = '\0';
		}
		i++;
	}
	int j = 0;
	while(str1[j] != '\0')
	{
		str2[j] = str1[j];
		j++;
	}
	str2[j] = '\0';
	printf("string2:%s\n",str2);
}




