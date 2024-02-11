#include <stdio.h>

int main(void)
{
    int pieces[6];
    int answer[6];
    int correct[] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &pieces[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        answer[i] = correct[i] - pieces[i];
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", answer[i]);
    }
    return 0;
}