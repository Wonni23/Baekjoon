#include <stdio.h>

int ft_factorial(int i)
{
    int res;

    res = 1;
    if (i > 0)
        {
           res = i * ft_factorial(i - 1);
        }
    return (res);
}

int main(void)
{
    int i;

    scanf("%d", &i);
    printf("%d\n", ft_factorial(i));
    return 0;
}