#include <stdio.h>

int main(void)
{
    int H, M, T;

    scanf("%d %d %d", &H, &M, &T);

    M = M + T;
    if (M >= 60)
    {
        while (M >= 59)
        {
            H += (M / 60);
            M %= 60;
        }
    }
    if (H >= 24)
    {
        H = H - 24;
    }
    printf("%d %d\n", H, M);
    return 0;
}