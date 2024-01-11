#include <stdio.h>

int main(void)
{
    int n;
    int a[100];
    int v;
    int cnt;

    cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);            
    }
    scanf("%d", &v);
    for (int j = 0; j < n; j++)
    {
        if (a[j] == v)
            cnt++;
    }
    printf("%d", cnt);
    return (0);
}

/*
42에서 for문 못 쓰게해서 최대한 안 쓰려고 했는데 귀찮아서 그냥 썼다.
cnt를 0으로 초기화 하지 않아서 두 번 틀렸다.
기본적인 실수를 줄이자.
*/