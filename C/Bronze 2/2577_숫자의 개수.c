#include <stdio.h>

int main(void)
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int result = A * B * C;
    int count[10] = {0}; // 최댓값이 1,000,000,000이기 때문에 크기가 10인 정수배열
    while (result > 0)
    {
        int digit = result % 10; // 현재의 자릿수를 계산
        count[digit]++; // count배열 인덱스상의 값을 증가시킴(등장 횟수가 됨!)
        result /= 10; // 다음 자릿수로 이동
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", count[i]); // 0 ~ 9까지 등장 횟수를 출력
    }
    return (0);
}