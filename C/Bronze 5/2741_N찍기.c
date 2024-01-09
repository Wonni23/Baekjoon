#include <stdio.h>

int main(void) 
{
    int i;
    int goal;

    i = 1;
    scanf("%d", &goal);
    while (i <= goal)
        {
            printf("%d\n", i);
            i++;
        }
    return (0);
}