#include <stdio.h>

int main(void)
{
    int input[3];
    int tmp = 0;
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &input[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (input[j] < input[i])
            {
                tmp = input[i];
                input[i] = input[j];
                input[j] = tmp;
            }
        }
    }
    printf("%d\n", input[1]);
    return 0;
}