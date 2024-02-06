#include <stdio.h>

int main(void)
{
    int A, B, V;
    int days = 0;
    
    scanf("%d %d %d", &A, &B, &V);
    days = (V - A) / (A - B) + 1;
    if ((V - A) % (A - B) != 0)
        days++;
    printf("%d\n", days);
    return 0;
}