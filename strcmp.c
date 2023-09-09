#include <stdio.h>

int main()
{

	char arr1[20];
	char arr2[20];

    printf ("Enter the first string\n");
    scanf ("%s", arr1);

    printf ("Enter the second string\n");
    scanf ("%s", arr2);


	int sum1 = 0;
	int sum2 = 0;
	int equal = 0;
	int eq = 0;
    int eq2 = 0;

//strlen() function 
//arr1 len = sum1, arr2 len = sum2

	for (int i = 0; arr1[i] != '\0'; ++i)
	{
		sum1 += 1;
	}

	for (int i = 0; arr2[i] != '\0'; ++i)
	{
		sum2 += 1;
	}

//if sum1 <= sum2
if (sum1 <= sum2)
{
    for (int i = 0; arr1[i] != '\0'; ++i)
    {
        for (int j = 0; arr2[j] != '\0'; ++j)
        {
        
            if (arr1[i] == arr2[j])
            {
                eq += 1;

            for (int g = 1; arr2[j + g] != '\0'; ++g)
            {
                if (arr1[i + g ] == arr2[ j + g])
                {
                    eq += 1;
                }
            }
            if (eq == sum1)
            {
                printf ("Result = 0\n");
            }
            else
            {
                printf ("Result = -1\n");
            }
            return 0;
            }
        }
    }
}


// if sum 1 >= sum2

if (sum1 >= sum2)
{
    for (int i = 0; arr2[i] != '\0'; ++i)
    {
        for (int j = 0; arr1[j] != '\0'; ++j)
        {
        
            if (arr2[i] == arr1[j])
            {
                eq += 1;

            for (int g = 1; arr1[j + g] != '\0'; ++g)
            {
                if(arr1[i + g ] == arr2[ j + g])
                {
                    eq += 1;
                }
            }
            if (eq == sum2)
            {
                printf ("Result = 0\n");
            }
            else
            {
                printf ("Result = -1\n");
            }
            return 0;
            }
        }
    }
}

}







