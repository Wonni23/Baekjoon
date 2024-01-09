#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int res;

    scanf("%d %d", &a, &b);
    if (-10,000 > a || b > 10,000)
    {
        printf("error\n");
        return 0;
    }
    res = a - b;
    if (res < 0)
    {
        printf("<");
        return 0;
    }
    else if (res == 0)
    {
        printf("==");
        return 0;
    }
    else
    {
        printf(">");
        return 0;
    }
}