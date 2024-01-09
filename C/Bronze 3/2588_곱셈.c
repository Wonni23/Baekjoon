#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int onesplace;
    int tensplace;
    int hundredsplace;

    scanf("%d %d", &a, &b);
    onesplace = a * (b%10);
    tensplace = a * ((b%100)/10);
    hundredsplace = a * (b/100);
    printf("%d\n", onesplace);
    printf("%d\n", tensplace);
    printf("%d\n", hundredsplace);
    printf("%d\n", a * b);
    return (0);
}