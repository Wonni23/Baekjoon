#include <stdio.h>

int main(void)
{
    char word[101];
    int alphabet_count[26] = {0};

    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        char current_char = word[i];
        if ('a' <= current_char && current_char <= 'z')
        {
            int index = current_char - 'a';
            alphabet_count[index] += 1;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet_count[i]);
    }
    return 0;
}