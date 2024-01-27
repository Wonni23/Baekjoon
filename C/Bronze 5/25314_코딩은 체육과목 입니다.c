#include <stdio.h>

int main(void)
{
    int N;
    int i;

    scanf("%d", &N);
    i = N / 4;
    while (i > 0)
    {
        printf("long ");
        i--;
    }
    printf("int\n");
    return (0);
}