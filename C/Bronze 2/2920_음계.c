#include <stdio.h>

int main(void)
{
    int input[8];
    int ascending = 1;
    int descending = 1;

    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (input[i] != i + 1)
        {
            ascending = 0;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
    {
        if (input[i] != 8 - i)
        {
            descending = 0;
            break;
        }
    }
    if (ascending)
    {
        printf("ascending");
    }
    else if (descending)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}