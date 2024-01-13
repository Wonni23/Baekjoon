#include <stdio.h>

int main(void)
{
    char arr[101];
    int N;
    int i;
    int res;

    i = 0;
    res = 0;
    scanf("%d", &N);
    scanf("%s", arr);
    while (i < N && arr[i] != '\0')
    {
        res += arr[i] - 48;
        i++;
    }
    printf("%d\n", res);
    return (0);
}

/*
문자열로 숫자를 받아서 반복을 통해 각 배열을 순회하며
아스키 코드 값 상 48을 빼주어 문자형을 정수형의 값으로 변환한다.
*/