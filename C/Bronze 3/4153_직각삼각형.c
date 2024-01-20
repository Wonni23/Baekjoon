#include <stdio.h>

int main(void)
{
    int a, b, c;

    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c ==0)
            break;
        if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
        {
            printf("right\n");
        }
        else
            printf("wrong\n");
    }
    return (0);
}

/*
    c*c뿐만 아니라 a*a와 b*b에 대해서도 동일한 검사를 했어야 했는데
    너무 대충 생각하고 넘어간 것 같다. 조건을 더 꼼꼼히 검사하자!
*/