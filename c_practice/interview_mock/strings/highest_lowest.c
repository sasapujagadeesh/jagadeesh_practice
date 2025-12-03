#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")] = '\0';
	int l = strlen(str);
	int arr[l];
	for(int i = 0;i<l;i++)
	{
		arr[i] = 0;
	}
	int j = 0;
	while(str[j] != '\0')
	{
		int count = 0;
		int k = 0;
		while(str[k] != '\0')
		{
			if(str[j] == str[k])
			{
				count++;
			}
			k++;
		}
		arr[j] = count;
		j++;
	}
	int max_ind = 0;
	int min_ind = 0;
	for(int i = 0;i<l;i++)
	{
		if(arr[max_ind] < arr[i])
		{
			max_ind = i;
		}
		if(arr[min_ind] > arr[i])
		{
			min_ind = i;
		}
	}

	printf("maximum occurance  %c is %d\n",str[max_ind],arr[max_ind]);
	printf("minimum occurance %c is %d\n",str[min_ind],arr[min_ind]);
}




