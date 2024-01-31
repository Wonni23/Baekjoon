#include <stdio.h>

int is_groupword(char *input)
{
    int alphabet[26] = {0};

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (i > 0 && input[i] != input[i - 1] && alphabet[input[i] - 'a'])
        {
            return 0;
        }
        alphabet[input[i] - 'a'] = 1;
    }
    return 1;
}

int main(void)
{
    char input[101];
    int N;
    int count = 0;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", input);
        if (is_groupword(input))
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}