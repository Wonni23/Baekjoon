#include <stdio.h>

void countingSort(int arr[], int n)
{
    // 입력 배열의 최대값 찾기
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // 카운트 배열 생성 및 초기화
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    // 각 숫자의 개수 세기
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    // 카운트 배열을 이용해 정렬된 배열 만들기
    int index = 0;
    for (int i = 0; i <= max; i++)
    {
        while (count[i] > 0)
        {
            printf("%d\n", i);
            count[i]--;
            index++;
        }
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);
    int input[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input[i]);
    }
    countingSort(input, N);
    return 0;
}