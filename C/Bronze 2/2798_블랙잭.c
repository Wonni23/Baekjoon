#include <stdio.h>

int findsum(int cards[], int N, int M)
{
    int result = 0;
    int current;

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                current = cards[i] + cards[j] + cards[k];
                if (current <= M && current > result)
                {
                    result = current;
                }
            }
        }
    }

    return result;
}

int main(void)
{
    int N, M;
    int result;
    
    scanf("%d %d", &N, &M);
    int cards[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &cards[i]);
    }
    result = findsum(cards, N, M);
    printf("%d\n", result);

    return 0;
}