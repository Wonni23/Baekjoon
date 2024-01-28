#include <stdio.h>

int main(void)
{
    int N;
    int count = 0;
    
    scanf("%d", &N);
    while (N % 5 != 0 && N >= 3)  // N의 5의 배수가 아니면서 3보다 크면
    {
        N -= 3;
        count++;
    }
    if (N % 5 == 0)
    {
        count += N / 5;
    }
    else
    {
        count = -1;
    }
    printf("%d\n", count);
    return (0);
}