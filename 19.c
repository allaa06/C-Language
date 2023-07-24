#include <stdio.h>

int main()
{ 
int index = 0;
printf("Enter the index number \n");
scanf("%d", &index);
int arr[index];
printf("Enter the numbers\n");
int i = 0;
while(i < index)
{
	scanf("%d",&arr[i]);
	++i;
}
int a = 0;
while(a < index)
{
	printf("number = %d\n", arr[a]);
	++a;
}
}
