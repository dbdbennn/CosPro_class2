#include <stdio.h>
#include <stdlib.h>

int main() {
    // 포인터 변수
    int number = 5;
    int* ptr = &number; // number 변수의 주소값을 가리킴
    // *ptr = 10; //포인터변수에 직접 상수값을 쓸 수 없다
    printf("number의 값: %d\n", number);
    *ptr = *ptr + 5;
    printf("number의 값: %d\n", number); // 포인터가 가리키고 있는 값의 연산은 가능

    // 포인터 변수의 크기
    // -> sizeof(포인터 변수): 주소값 크기
    // sizeof(*포인터 변수): 포인터 변수가 가리키고 있는 대상의 자료형

    // 포인터의 표현과 배열 표현
    int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* pArr;
    pArr = &arr2[0];
    for (int i = 0; i < 10; i++) {
        printf("%p: %d\n", &arr2[i], arr2[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%p: %d\n", pArr + i, *(pArr + i));
        // 포인터 변수 + 위치 : 위치에 해당하는 주소값
        // *(포인터변수 + 위치) : 위치에 해당하는 값을 리턴
    }

    // 포인터 배열 : 포인터 변수들의 배열
    const char* pStr[4] = { "red", "green", "blue", "gray" };
    printf("0번 문자열 값 : %s\n", pStr[0]);
    printf("1번 문자열 값 : %s\n", pStr[1]);


    // 동적 메모리 할당 <stdlib.h> 헤더 추가
    int* pInt;
    pInt = (int*)malloc(sizeof(int));
    char* s = (char*)malloc(sizeof(char) * 10);

    *pInt = 4;
    printf("%d\n", pInt);

    free(pInt);
}