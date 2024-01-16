#include <stdio.h>

int main(void)
{
    int arr[10];
    int i;
    int max;
    int max_index;

    i = 0;
    max = 0;
    while (scanf("%d", &arr[i]) != EOF)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i + 1;
        }
        i++;
    }
    printf("%d\n", max);
    printf("%d\n", max_index);
    return (0);
}