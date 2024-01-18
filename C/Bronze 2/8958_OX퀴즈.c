#include <stdio.h>

int main(void)
{
    int T;        // 테스트 케이스의 수
    int score;    // 총 점수
    int streak;   // 연속해서 'O'를 얻은 횟수
    char arr[81]; // 입력 문자열 배열

    scanf("%d", &T); // 테스트 케이스의 수 입력
    while (T--)
    {
        scanf("%s", arr); // 문자열 입력
        score = 0; // 각 테스트 케이스마다 점수 초기화
        streak = 0; // 각 테스트 케이스마다 streak 초기화
        for (int i = 0; arr[i] != '\0'; i++)
        {
            if (arr[i] == 'O')
            {
                if (i > 0 && arr[i - 1] == 'O')
                    streak += 1; // 연속해서 'O'를 얻은 경우 streak 증가
                score += 1 + streak; // 'O'를 얻을 때마다 점수 증가 및 streak 추가
            }
            else
            {
                streak = 0; // 'O'가 아닌 경우 streak 초기화
            }
        }
        printf("%d\n", score); // 각 테스트 케이스의 점수 출력
    }
    return (0);
}
