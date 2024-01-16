#include <stdio.h>

int main(void)
{
    int N;
    int i;
    int j;

    i = 1;
    scanf("%d", &N);
    while (i <= N)
    {
        j = 0;
        while (j < N)
        {
            if (j >= N - i)
                printf("*");
            else
                printf(" ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

/*
    i를 습관적으로 0으로 초기화하는 바람에 출력형식이 잘못됐었다.
    0으로 초기화 할 경우 첫 줄은 공백만 있게되어 틀리다.
    문제를 꼼꼼히 잘 확인하자!
*/