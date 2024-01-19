#include <stdio.h>

int main(void)
{
    char str[1000001];
    int alphabet[26] = {0};

    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) // 소문자를 대문자로 변환
    {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
    }
    for (int i = 0; str[i] != '\0'; i++) // 문자열 str을 읽어서 정수배열 alphabet의 해당 인덱스의 값을 증가
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            int index = str[i] - 'A';
            alphabet[index]++;
        }
    }
    int max = -1;
    for (int i = 0; i < 26; i++) // 문자열 alphabet을 읽으며 최댓값을 찾음
    {
        if (alphabet[i] > max)
            max = alphabet[i];
    }
    int count = 0;
    int maxIndex = -1;
    for (int i = 0; i < 26; i++) // 최댓값이 몇 번 등장하는지 세고, 그 인덱스값을 가져옴
    {
        if (alphabet[i] == max)
        {
            count++;
            maxIndex = i;
        }
    }
    if (count == 1)
        printf("%c", maxIndex + 'A');
    else
        printf("?");
    return 0;
}