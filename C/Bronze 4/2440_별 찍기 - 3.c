#include <stdio.h>

int main(void)
{
    int N;
    int i = 0;

    scanf("%d", &N);
    while (i < N)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j <= N - i)
                printf("*");
        }
        printf("\n");
        i++;
    } 
    return 0;
}

/*
if 별 찍는 구문 다음에 불필요하게 공백을 넣는 else 구문이 붙어서
출력형식 잘못으로 두 번 틀렸다. 문제 조건을 잘 확인하자. 
*/