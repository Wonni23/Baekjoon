#include <stdio.h>
#include <string.h>

int main(void)
{	
	int T, R;
    int i;
    int j;
    int k;
	char S[20];

    i = 0;
    scanf("%d", &T);
	while(i < T)
    {	
		scanf("%d %s", &R, S);
        j = 0;
		while (j < strlen(S))
        {
            k = 0;
			while (k < R)
            {
                printf("%c", S[j]);
                k++;
            }
            j++;
        }
		printf("\n");
        i++;
	}
    return (0);
}