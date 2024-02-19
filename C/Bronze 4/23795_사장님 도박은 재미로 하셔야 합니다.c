#include <stdio.h>

int main(void)
{
    int bet;
    long long totalLoss = 0;

    while (1) {
        scanf("%d", &bet);
        if (bet == -1)
        {
            break;
        }
        totalLoss += bet;
    }
    printf("%lld\n", totalLoss);
    return 0;
}