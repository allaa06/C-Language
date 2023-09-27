#include <stdio.h>
typedef int (*T) (int);

int min_t(int a)
{
    --a;
    return a;
}
int max_t(int b)
{
    ++b;
    return b;
}
int mul_t(int c)
{
    c *= 2;
    return c;
}

int main()
{
    T arr[3];
    arr[0] = min_t;
    arr[1] = max_t;
    arr[2] = mul_t;

    int a1 = 2;
    int b1 = 3;
    int c1 = 4;

   int a2 = arr[0](a1);
   int b2 = arr[1](b1);
   int c2 = arr[2](c1);

    printf ("%d %d %d\n", a2, b2, c2);

    return 0;
}


