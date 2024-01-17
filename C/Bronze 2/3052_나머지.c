#include <stdio.h>

int main(void)
{
    int arr[10] = {};
    int input;
    int result;
    int count;
    int i, j;

    i = 0;
    while (i < 10)
    {
        scanf("%d", &input);
        arr[i] = input % 42;
        i++;
    }
    i = 0;
    result = 0;
    while (i < 10)
    {
        count = 0;
        j = i + 1;
        while (j < 10)
        {
            if (arr[i] == arr[j])
                count++;
            j++;
        }
        if (count == 0)
            result++;
        i++;
    }
    printf("%d\n", result);
    return (0);
}

/*
    42경산에서 많이 했던건데 오랜만에 해서 그런지
    2중 반복문을 통해 중복검사하는 부분을 까먹어서 해멨다.
    연습을 더 많이해서 익숙해지자!
*/