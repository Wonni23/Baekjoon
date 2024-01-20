#include <stdio.h>

int is_pelindrom(int input)
{
    int arr[6];
    int start = 0;
    int end;
    int i= 0;

    while (input > 0)
    {
        arr[i] = input % 10;
        input /= 10;
        i++;
    }
    end = i - 1;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main(void)
{
    int input;

    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
            break;
        if (is_pelindrom(input) == 1)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return (0);
}