#include <stdio.h>

int main(void)
{
    int N;
    int outer = 1;  // 현재 외곽의 마지막 방 번호
    int distance = 1;  // 지나가는 방 수
    scanf("%d", &N);
    while (N > outer)
    {
        outer += 6 * distance;
        distance++;
    }
    printf("%d\n", distance);
    return 0;
}