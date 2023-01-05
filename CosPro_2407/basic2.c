#include <stdio.h>
#include <stdlib.h>

int main() {
    // ������ ����
    int number = 5;
    int* ptr = &number; // number ������ �ּҰ��� ����Ŵ
    // *ptr = 10; //�����ͺ����� ���� ������� �� �� ����
    printf("number�� ��: %d\n", number);
    *ptr = *ptr + 5;
    printf("number�� ��: %d\n", number); // �����Ͱ� ����Ű�� �ִ� ���� ������ ����

    // ������ ������ ũ��
    // -> sizeof(������ ����): �ּҰ� ũ��
    // sizeof(*������ ����): ������ ������ ����Ű�� �ִ� ����� �ڷ���

    // �������� ǥ���� �迭 ǥ��
    int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* pArr;
    pArr = &arr2[0];
    for (int i = 0; i < 10; i++) {
        printf("%p: %d\n", &arr2[i], arr2[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%p: %d\n", pArr + i, *(pArr + i));
        // ������ ���� + ��ġ : ��ġ�� �ش��ϴ� �ּҰ�
        // *(�����ͺ��� + ��ġ) : ��ġ�� �ش��ϴ� ���� ����
    }

    // ������ �迭 : ������ �������� �迭
    const char* pStr[4] = { "red", "green", "blue", "gray" };
    printf("0�� ���ڿ� �� : %s\n", pStr[0]);
    printf("1�� ���ڿ� �� : %s\n", pStr[1]);


    // ���� �޸� �Ҵ� <stdlib.h> ��� �߰�
    int* pInt;
    pInt = (int*)malloc(sizeof(int));
    char* s = (char*)malloc(sizeof(char) * 10);

    *pInt = 4;
    printf("%d\n", pInt);

    free(pInt);
}