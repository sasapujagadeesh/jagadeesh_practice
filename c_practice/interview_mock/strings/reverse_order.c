#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int len = strlen(str);
	str[len]  = '\0';
	int flag = 0;
	for(int i = len-1;i>=0;i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				i--;
			}
			int j = i+1;
			while(str[j] != '\0' && str[j] != ' ')
			{
				printf("%c",str[j]);
				j++;
			}
			printf(" ");
		}
	}
	printf("\n");
}

