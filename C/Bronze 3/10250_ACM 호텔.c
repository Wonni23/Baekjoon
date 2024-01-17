#include <stdio.h>

int main(void)
{
    int T;
    int H, W, N;
    int floor, room;

    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &H, &W, &N);
        room = (N - 1) / H + 1;
        floor = N % H;
        if (floor == 0)
            floor = H;
        printf("%d%02d", floor, room);
        printf("\n");
    }
    return (0);
}

/*
    이번에도 너무 순진하게 생각해서 헤맸다.
    예제의 H가 '6'이어서 floor = 6이라고 무식하게 초기화 해서 1트.
    room을 구하는 식을 잘못 구해서 2트.
    "%02d" 이 부분은 몰랐어서 나름의 식을 세웠는데 그게 틀려서 결국 인터넷 검색으로 알아봤다. 3트.
     %: 서식 지정자의 시작을 나타냄.
     0: 필드 폭을 나타냄. 여기서는 최소 폭이 2자리이며, 부족한 자릿수는 0으로 채워짐.
     2: 최소 폭을 나타냄. 여기서는 2자리.
     d: 십진 정수를 출력하는 서식 지정자.
    예제에 사고가 매몰되면 문제를 풀기 힘들다. 꼼꼼히 풀자!
*/