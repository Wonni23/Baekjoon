#include <stdio.h>

int is_prime(int num)
{
    if (num < 2)
    {
        return 0;  // 0과 1은 소수가 아님
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;  // num이 i로 나누어지면 소수가 아님
        }
    }
    return 1;
}

int main(void)
{
    int N;
    int num;
    int count = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num);
        if (is_prime(num))
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}