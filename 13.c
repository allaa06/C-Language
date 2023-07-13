#include <stdio.h>
int main()
{
	int x = 0;
	printf("Enter the year \n");
	scanf("%i", &x);
	if((x % 4 == 0) && (x % 100 != 0 || x % 400 == 0))
		printf("Nahanj \n");
	else 
		printf("No nahanj \n");
	return 0;
}
