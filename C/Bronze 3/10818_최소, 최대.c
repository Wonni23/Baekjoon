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
/*
    문제를 잘 읽어야 한다. 조건의 최소값이 -1,000,000이므로
    비교를 위한 mmax값을 -1,000,000으로 초기화했어야 하는데
    습관적으로 0으로 초기화 해놓고 "왜 틀렸지?" 이러고 있었다 ㅋㅋ
    꼼꼼히 엄밀히 코딩하자!
*/