#include <stdio.h>

int main(void)
{
    int a, b, c;
    int prize;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c && c == a)
    {
        prize = 10000 + a * 1000;
    }
    else if (a == b || b == c || c == a)
    {
        if (a == b)
        {
            prize = 1000 + a * 100;
        }
        else if (b == c)
        {
            prize = 1000 + b * 100;
        }
        else if (c == a)
        {
            prize = 1000 + c * 100;
        }
    }
    else
    {
        if (a > b && a > c)
            prize = a * 100;
        else if (b > a && b > c)
            prize = b * 100;
        else if (c > a && c > b)
            prize = c * 100;
    }
    printf("%d\n", prize);
    return 0;
}