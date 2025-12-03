#include<stdio.h>
#include<string.h>

void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int l = strlen(str);

	int i = 0,j;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || i == l-1)
		{
			if(i == l-1)
			{
				j = i;
			}
			else
			{
				j = i-1;
			}

			while(str[j] != ' ' && j != -1)
			{
				printf("%c",str[j]);
				j--;
			}
			printf(" ");
		}
		i++;
	}
	printf("\n");
}


