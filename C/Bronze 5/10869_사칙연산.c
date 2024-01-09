#include <stdio.h>
int main()
{
	int a;
    int b;

    scanf("%d %d", &a, &b);
    if ((a<1) || (b>10000))
    {
        printf("error\n");
    }
    else
    {
	printf("%d\n", a+b);
	printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    }
	return 0;
}