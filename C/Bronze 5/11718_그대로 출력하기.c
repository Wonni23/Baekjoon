#include <stdio.h>

int main(void)
{
    char a;

    while(scanf("%c", &a) != EOF)
    {
        printf("%c", a);
    }
    return (0);
}

/*
    문자 단위로 입력 받아서 (EOF 이용) 문자 그대로 출력
    문자 단위로 입력 받아서 (scanf 함수의 리턴 값 == 함수가 읽어들여 저장에 성공한 데이터 개수) 문자 그대로 출력
*/