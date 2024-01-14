#include <stdio.h>
#include <string.h>

int main(void)
{
    int T;
    int len;
    char arr[1000];
    char first;
    char last;

    scanf("%d", &T);
    while (T > 0)
    {
        scanf("%s", arr);
        len = strlen(arr);
        first = arr[0];
        last = arr[len - 1];
        T--;
        printf("%c%c\n", first, last);
    }
    return (0);
}