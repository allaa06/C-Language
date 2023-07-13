#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("Enter the first number \n");
	scanf("%i", &x);
	printf("Enter the second number \n ");
	scanf("%i", &y);
	printf("Enter the third number \n");
	scanf("%i", &z);
			
	while( x != y && x != z && z != y){
		printf("Not supported \n");
		printf("Try again \n");
		scanf(" %i",&x);
		scanf(" %i", &y);
		scanf(" %i", &z);
	}
	if(x == y)
	{
		if(x > z )
			printf("Result = %i \n", x);
		else
			printf("Result = %d \n", z);
	}
	else if(x == z)
	{
		if(x > y)
			printf("Result = %d \n", x);
		else 
			printf("Result = %d \n", y);
	}
	else
	{
		if (y > x)
			printf("Result = %d \n", y);
		else
			printf("Result = %d \n", x);
	}
			return 0;

}
	
