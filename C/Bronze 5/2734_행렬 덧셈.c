#include <stdio.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N][M];
    int B[N][M];
    int i, j = 0;

    while (i < N)
    {
        j = 0;
        while (j < M)
        {
            scanf("%d", &A[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    while (i < N)
    {
        j = 0;
        while (j < M)
        {
            scanf("%d", &B[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    while (i < N)
    {
        j = 0;
        while (j < M)
        {
            printf("%d ", A[i][j] + B[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return (0);
}

/*
    N = row, M = column으로 이중 배열을 선언한 후,
    이중 while문을 돌리며 값을 입력받고
    마지막에는 더한 값을 출력
*/