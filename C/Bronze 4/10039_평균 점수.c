#include <stdio.h>

int main(void)
{
    int i;
    int total = 0;

    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &i);
        if (i < 40)
            total += 40;
        else
            total += i;
    }
    printf("%d\n", total/5);
    return 0;
}