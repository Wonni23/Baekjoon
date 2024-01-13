#include <stdio.h>

int main(void)
{
    char str[101];
    int i;

    i = 0;
    scanf("%s", str);
    while(str[i] != '\0')
    {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] -= 32;
            i++;
        }
        else if  ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] += 32;
            i++;
        }
    }
    printf("%s\n", str);
    return (0);
}