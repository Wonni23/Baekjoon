#include <stdio.h>

int main(void)
{
    int time;
    int a;
    int b;
    int i;
    
    i = 0;
    scanf("%d", &time);

    while (i < time)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        i++;
    }

    return 0;
}