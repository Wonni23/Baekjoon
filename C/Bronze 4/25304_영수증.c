#include <stdio.h>

int main(void)
{
    int X, N;
    int a, b;
    int total = 0;

    scanf("%d %d", &X, &N);
    while(scanf("%d %d", &a, &b) != EOF)
    {
        total += a * b;
    }
    if (total == X)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}