#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	char substring[50];
	printf("enter the sub string:");
	fgets(substring,50,stdin);
	substring[strcspn(substring,"\n")] = '\0';
	int l = strlen(substring);
	int i = 0;
	int flag = 0;
	while(str[i] != '\0')
	{
		int j = 0;
		int len = 0;
		while(substring[j] != '\0')
		{
			if(str[j+i] == substring[j])
			{
				len++;
			}
			j++;
		}
		if(len == l)
		{
			printf("the substring is present\n");
			flag = 1;
			break;
		}

		i++;
	}
	if(flag == 0)
	{
		printf("the substring is not present\n");
	}
}	
