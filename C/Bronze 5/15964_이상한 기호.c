#include <stdio.h>

long long ft_ft(long long a, long long b)
{
    long long res;

    res = (a + b) * (a - b);
    return (res);
}

int main(void)
{
    long long a;
    long long b;

    scanf("%lld %lld", &a, &b);
    printf("%lld\n", ft_ft(a, b));
    return 0;
}