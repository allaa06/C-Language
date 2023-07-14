#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;
	printf("Enter the first number \n");
	scanf("%i", &x);
	printf("Enter the second number \n");
	scanf("%i", &y);
	printf("Enter the third number \n");
	scanf("%i", &z);

if((y < x) && (y < z))
{
if((x % y == 0) && (z % y == 0))
printf("Result = %i \n", y);
else if(y % 2 == 0){
	int dev = y;
	while((x % dev != 0) && (z % dev != 0))
{		dev = dev / 2;
}
if((x % dev == 0) && (z % dev == 0))
			printf("Result = %i\n", dev);
			else if((x % 2 == 0) && (z % 2 == 0))
			printf("Result = 2 \n");
}
else if(y % 3 == 0){
	int a = y;
	while((x % a != 0) && ( z % a != 0))
	{
		a = a /3;
	}
	if((x % a == 0) && (z % a == 0))
	       printf("result = %i \n", a);
	else if((x % 3 == 0) && (z % 3 == 0))
	printf("Result = 3 \n");	
}
else if((y % 5 == 0) && ( y % 2 != 0) && (y % 3 != 0)){
	int b = y;
	while((x % b != 0) && (z % b != 0))
	{
	b = b / 5;
	}
	if((x % b == 0) && (z % b == 0))
printf("Result = %i \n", b);
	else if((x % 5 == 0) && (z % 5 == 0))
		printf("Result = 5 \n");
}
else
printf("Result = 1 \n");
}

if((x < y) && ( x < z))
{
	if((y % x == 0) && ( z % x == 0))
		printf("Result = %i \n", x);
	else if(x % 2 == 0){
		int c = x;
		while((y % c != 0) && (z % c != 0))
		{
			c = c / 2;
		}
		if((y % c == 0) && ( z % c == 0))
		printf("Result = %i \n", c);
		else if((y % 2 == 0) && (z % 2 == 0))
			printf("Result = 2 \n");
	} else if(x % 3 == 0) {
		int d = x;
		while((y % d != 0) && ( z % d != 0))
		{
			d = d / 3;
		}
		if((y % d == 0) && (z % d == 0))
		printf("Result = %i \n", d);
		else if((y % 3 == 0) && (x % 3 == 0))
			printf("Result = 3 \n");
	}
	else if((x % 5 == 0) && (x % 2 != 0) && ( x % 3 != 0)){
		int e = x;
		while((y % e != 0) && ( z % e != 0)){
			e = e /5;
		}
		if((y % e == 0) && (z % e == 0))
		printf("Result = %i \n", e);
		else if((y % 5 == 0) && (x % 5 == 0))
			printf("Result = 5 \n");
	}
	else
		printf("Result = 1 \n");
}
if((z < y) && (z < x))
{
	if((y % z == 0) && (x % z == 0))
		printf("Result = %i \n", z);
	else if(z % 2 == 0){
		int f = z;
		while((x % f != 0) && (y % f != 0))
		{
			f = f / 2;
		}
		if((x % f == 0) && (y % f == 0))
			printf("Result = %i \n", f);
		else if((x % 2 == 0) && (y % 2 == 0))
			printf("Result = 2 \n");
	}
	else if(z % 3 == 0){
		int g = z;
		while((x % g != 0) && (y % g != 0))
		{
			g = g / 3;
		}
		if((x % g == 0) && (y % g == 0))
			printf("Result = %i \n", g);
		else if((x % 3 == 0) && (y % 3 == 0))
			printf("Result = 3 \n");
	}
	else if((z % 5 == 0) && ( z % 2 != 0) && (z % 3 != 0)){
		int s = z;
		while((x % s != 0) && (y % s != 0))
		{
			s = s / 5;
		}
		if((x % s == 0) && ( y % s == 0))
			printf("Result = %i \n", s);
		else if((x % 5 == 0) && (y % 5 == 0))
			printf("Result = 5 \n");
	}
	else
		printf("Result = 1 \n");
}

	return 0;
}

