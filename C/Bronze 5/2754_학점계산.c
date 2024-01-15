#include <stdio.h>

int main(void)
{
    char grade[3];
    double score;

    score = 4.0;
    scanf("%s", grade);
    if (grade[0] == 'F')
    {
        printf("0.0\n");
        return (0);
    }
    score -= grade[0] - 'A';
    if (grade[1] == '+')
        score += 0.3;
    if (grade[1] == '-')
        score -= 0.3;
    printf("%.1lf", score);
    return (0);
}

/*
기본 점수를 4.0으로 두고 아스키 코드 상의 'A'와의 차를 빼주어서
점수를 구하는 아이디어가 유효했다.
그 뒤로는 부호의 유무에 따라 점수에 0.3을 더하거나 빼면 끝!
*/