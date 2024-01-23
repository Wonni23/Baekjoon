#include <stdio.h>

int calculate_sumofdigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findsmallestconstructor(int N)
{
    for (int candidate = 1; candidate <= N; ++candidate)
    {
        int sumofdigits = calculate_sumofdigits(candidate);
        if (candidate + sumofdigits == N)
        {
            return candidate;
        }
    }
    return 0;
}

int main(void)
{
    int N;
    int result;
    scanf("%d", &N);
    result = findsmallestconstructor(N);
    printf("%d\n", result);
    return (0);
}