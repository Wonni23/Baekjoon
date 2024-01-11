#include <stdio.h>

int main(void)
{
    int N;
    int X;
    int input;
    int i;
    
    i = 0;
    scanf("%d %d", &N, &X);
    while(i < N)
    {
        scanf("%d", &input);
        if(input < X)
            printf("%d ", input);
        i++;
    }
}