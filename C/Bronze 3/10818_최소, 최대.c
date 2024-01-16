#include <stdio.h>

int main(void)
{
    int N;
    int tmp;
    int mmin;
    int mmax;
    int i;

    mmin = 1000000;
    mmax = -1000000;
    i = 0;
    scanf("%d", &N);
    while (i < N)
    {
        scanf("%d", &tmp);
        if (tmp > mmax)
            mmax = tmp;
        if (tmp < mmin)
            mmin = tmp;
        i++;
    }
    printf("%d %d\n", mmin, mmax);
    return (0);
}