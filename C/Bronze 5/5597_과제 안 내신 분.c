#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int n;
    int arr[30] = {0}; // initialize array

    i = 0;
    j = 0;
    while (i < 28)
    {
        scanf("%d", &n);
        arr[n-1]++; // array index + 1 == the number
        i++;
    }
    while (j < 30)
    {
        if(arr[j] == 0)
            printf("%d\n", j + 1);
        j++;
    }
    return (0);
}