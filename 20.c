#include <stdio.h>
int main()
{
	int index = 0;
	printf("Pleas enter the index \n");
	scanf("%d", &index);
	char arr[index];
	printf("Pleas enter the symbols\n");
	int i = 0;
	while(i < index)
	{
		scanf(" %c", &arr[i]);
		++i;
	}
	int a = 0;
	while(a < index)
	{
		if(arr[a] > 47 && arr[a] < 58)
		{
			printf("%c = number \n", arr[a]);
		} else {
			printf("%c = not number \n", arr[a]);
		}
		++a;
	}
}
	
