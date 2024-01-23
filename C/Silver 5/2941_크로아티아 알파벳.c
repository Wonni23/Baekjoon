#include <stdio.h>
#include <string.h>

int countCroatianAlphabets(char word[])
{
    int count = 0;
    int length = strlen(word);

    for (int i = 0; i < length; i++)
    {
        if (word[i] == 'c' && (word[i + 1] == '=' || word[i + 1] == '-'))
            i++;
        else if (word[i] == 'd')
        {
            if (word[i + 1] == 'z' && word[i + 2] == '=')
                i += 2;
            else if (word[i + 1] == '-')
                i++;
        }
        else if ((word[i] == 'l' || word[i] == 'n') && word[i + 1] == 'j')
            i++;
        else if ((word[i] == 's' || word[i] == 'z') && word[i + 1] == '=')
            i++;
        
        count++;
    }

    return count;
}

int main(void)
{
    char word[101];
    scanf("%s", word);

    int result = countCroatianAlphabets(word);
    printf("%d\n", result);

    return 0;
}