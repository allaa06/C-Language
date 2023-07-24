#include <stdio.h>
int main()
{
	int index = 0;
	printf("Enter the index number \n");
	scanf("%d", &index);
	char arr[index];
	printf("Enter the symbols \n");
	int i = 0;
	while(i < index)
	{
		scanf(" %c", &arr[i]);
		++i;
	}
	printf("Result \n");
	while(index > -1)
	{
		printf(" %c\n ", arr[index]);
		--index;
	}
	return 0;
}
