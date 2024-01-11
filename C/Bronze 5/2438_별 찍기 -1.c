#include <stdio.h>

int main()
{
    int input;
    int i;
    int j;

    i = 1;
    j = 1;
    scanf("%d", &input);
    while (i <= input)
    {
        j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}