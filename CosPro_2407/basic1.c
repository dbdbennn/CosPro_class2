#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
    // 배열 선언과 크기 알아보기
    int arr[10]; // 자료형 배열명[크기] -> 정적 배열
    // 배열의 크기는: sizeof(배열명)
    printf("arr 배열의 크기: %d\n", sizeof(arr));
    printf("arr 배열 요소의 크기: %d\n", sizeof(arr[0]));
    printf("arr 배열의 길이: %d\n", 10);

    // 배열의 요소 사용
    arr[1] = 7;
    printf("배열 요소의 값: %d\n", arr[1]);

    // 배열 공간 벗어나는 부분 주의: 조건식을 작성할 범위
    int i;
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    for (i = 0; i < 10; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    // 다차원 배열
    int arr1[3][4] = { 1, 2, 3, 4, 5, 6,7,8, 9, 10, 11, 12 };
    int k, l;
    for (k = 0; k < 3; k++) {
        for (l = 0; l < 4; l++) {
            printf("%d", arr1[k][l]);
        }
        printf("\n");
    }

    // 배열의 크기
    printf("arr1의 크기: %d\n", sizeof(arr1)); //2차원 배열의 크기
    printf("arr1[0]의 크기: %d\n", sizeof(arr1[0])); //1차원 배열의 크기
    printf("arr1[2][3]의 크기: %d\n", sizeof(arr1[2][3])); //2행 3열의 크기   

    // 1 >> 배열 처리
       // 합계
       // 합계/최소
    int a[10] = { 1, 2, -4, 56, 8, 89, 77, 23, 4, 22 };
    int max, maxpos;
    max = a[0]; // 첫번째 배열값
    maxpos = 0; // 현재 위치값 저장

    for (int i = 1; i < 10; i++) {
        if (max < a[i]) {
            max = a[i];
            maxpos = i;
        }
    }
    printf("최대값: %d,    요소번호: %d\n", max, maxpos);

    // 배열값 찾기 -> if(찾고자하는 키 == 배열명[위치])

    // 배열의 복사 -> 복사대상배열명[] = 복사원본배열명
    int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int d[10];
    for (int m = 0; m < 10; m++) {
        d[m] = c[m];
    }

    // 문자열 -> 문자열 끝에 null값 들어옴
    // 문자열 처리 함수: 
    // 2> 문자열 길이: strlen
    // 3> 문자열 복사: strcopy
    // 4> 문자열 비교: strcmp
    // 5> 문자열 결합: strconcat

    char s1[100] = "대한민국 파이팅";
    char s2[100];
    char s3[100];

    printf("문자열 길이: %d\n", strlen(s1));
    strcpy(s2, s1);
    printf("%s\n", s2);

    strcat(s2, s1); //s1+s2
    printf("%s\n", s2);

    printf("%d\n", strcmp("school", "boy")); // 같으면: 0, 다르면: 0이 아닌 값
                                  // string1 < string2: -1, 반대: +1s
}