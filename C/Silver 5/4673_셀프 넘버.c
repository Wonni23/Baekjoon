#include <stdio.h>

int d(int n)
{
    int sum = n;
    
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(void)
{
    const int limit = 10000;
    int is_selfnumber[limit + 1];

    for (int i = 1; i <= limit; i++)
    {
        is_selfnumber[i] = 1;
    }
    for (int i = 1; i <= limit; i++)
    {
        int next_number = d(i);
        if (next_number <= limit)
        {
            is_selfnumber[next_number] = 0;
        }
    }
    for (int i = 1; i <= limit; i++)
    {
        if (is_selfnumber[i])
        {
            printf("%d\n", i);
        }
    }
    return 0;
}