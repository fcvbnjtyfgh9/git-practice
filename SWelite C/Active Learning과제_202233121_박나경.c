#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int random;

    srand((unsigned int)time(NULL)); // 프로그램 실행 때마다 바뀌는 시간으로 인해 난수 값과 순서도 바뀌도록 난수를 초기화

    random = rand() % 100; // 난수의 범위 설정

    if (random < 20) { //조건문(다중if) 사용
        printf("1000 포인트 당첨!\n");
    }
    else if (random < 60) {
        printf("500 포인트 당첨!\n");
    }
    else {
        printf("200 포인트 당첨!\n");
    }
    
    return 0;
}