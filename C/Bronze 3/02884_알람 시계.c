#include <stdio.h>

int main(void)
{
    int H, M;

    scanf("%d %d", &H, &M);
    if (M >= 45)
        printf("%d %d", H, M - 45);
    else
    {
        M -= 45;
        M = 60 + M; 
        H -= 1;
        if (H < 0)
        {
            H = 24 + H;
        }
        printf("%d %d", H, M);
    }
    return (0);
}