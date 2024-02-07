#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);
    printf("%d\n", gcd(num1, num2));
    printf("%d\n", lcm(num1, num2));
    return 0;
}