#include <stdio.h>

int main(void)
{
    char str[1000001];
    int i;
    int count;

    i = 0;
    count = 0;
    scanf("%[^\n]", str);
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' ||
            str[i + 1] == '\0')) // str[i]는 공백이 아니면서 그 뒤는 공백 또는 문자열의 끝일때
            count++;
        i++;
    }
    printf("%d\n", count);
    return 0;
}