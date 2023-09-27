#include <stdio.h>
typedef int (*T) (int, int);

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c = a - b;
    return c;
}

int mul(int a, int b)
{
    int c = a * b;
    return c;
}

int div(int a, int b)
{
    int c = a / b;
    return c;
}

int cal(T operation, int a, int b)
{
    operation(a, b);
}

int main()
{
    int a1 = 6;
    int b1 = 3;

    int c1 = cal(sub, a1, b1);
    int d1 = cal(mul, a1, b1);
    int e1 = cal(add, a1, b1);
    int g1 = cal(div, a1, b1);
    //output- 3 18 9 2

    printf ("%d %d %d %d\n", c1, d1, e1, g1);

    return 0;
}

