#include <stdio.h>

int main(void)
{
    long long a;
    long long b;
    long long res;

    scanf("%lld %lld", &a, &b);
    res = a - b;
    if (res < 0)
    {
        res *= -1;
        printf("%lld\n", res);
    }
    else
    {
        printf("%lld\n", res);
    }
    return (0);
}