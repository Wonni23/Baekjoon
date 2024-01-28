#include <stdio.h>

int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

int main(void)
{
    int N, K;

    scanf("%d %d", &N, &K);
    printf("%d\n", factorial(N) / (factorial(K) * factorial(N - K)));

    return 0;
}