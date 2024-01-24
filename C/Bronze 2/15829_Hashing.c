#include <stdio.h>

unsigned long long power(int i)
{
    if (i == 0)
    {
        return 1;
    }
    else
    {
        return (31 * power(i - 1)) % 1234567891;
    }
}

int main(void)
{
    int L;
    char input[51];
    unsigned long long result = 0;

    scanf("%d %s", &L, input);

    for (int i = 0; i < L; i++)
    {
        result += ((input[i] - 'a' + 1) * power(i)) % 1234567891;
    }
    result %= 1234567891;
    printf("%llu", result);
    return 0;
}