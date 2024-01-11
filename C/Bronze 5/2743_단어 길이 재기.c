#include <stdio.h>

int main(void)
{
    char arr[101];
    int i;

    i = 0;
    scanf("%s", arr);
    while (arr[i] != 0)
        i++;
    printf("%d\n", i);
    return (0);
}