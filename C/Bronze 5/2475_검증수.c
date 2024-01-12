#include <stdio.h>

int validation(int a, int b, int c, int d, int e)
{
    long long i, j, k, l, m;
    int res;
    
    i = a*a;
    j = b*b;
    k = c*c;
    l = d*d;
    m = e*e;
    res = (i + j + k + l + m) % 10;
    return (res);
}

int main(void)
{
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d", validation(a, b, c, d, e));
    
    return (0);
}