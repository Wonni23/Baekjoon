#include <stdio.h>

int main(void)
{
    char S[101];
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    int i, j;
    int found;

    scanf("%s", S);
    i = 0;
    while (alphabet[i] != '\0')
    {
        found = 0;
        j = 0;
        while (S[j] != '\0')
        {
            if (S[j] == alphabet[i])
            {
                printf("%d ", j);
                found = 1; 
                break;
            }
            j++;
        }
        if (found == 0)
        {
            printf("-1 ");
        }
        i++;
    }
    printf("\n");
    return (0);
}

/*
    배열을 선언하는데 널 값까지 고려해서 1씩 더 줬어야했다.
*/