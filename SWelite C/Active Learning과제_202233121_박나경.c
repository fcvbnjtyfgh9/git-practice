#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int random;

    srand((unsigned int)time(NULL)); // ���α׷� ���� ������ �ٲ�� �ð����� ���� ���� ���� ������ �ٲ�� ������ �ʱ�ȭ

    random = rand() % 100; // ������ ���� ����

    if (random < 20) { //���ǹ�(����if) ���
        printf("1000 ����Ʈ ��÷!\n");
    }
    else if (random < 60) {
        printf("500 ����Ʈ ��÷!\n");
    }
    else {
        printf("200 ����Ʈ ��÷!\n");
    }
    
    return 0;
}