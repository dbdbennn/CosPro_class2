#include <stdio.h>

int func_a(char(*p)[20], int n) { 
	// p : 배열의 위치를 가르킬 포인터 변수, n: 배열의 길이
	// n의 행의 크기
	// char p[][20]
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]); // 문자 배열 한꺼번에 출력
	}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < 20; k++) {
			printf("%c", p[i][k]);
		}
		printf("\n");
	}

	return 0;
}

int main() {
	char titles[5][20] = { "first", "seconds", "thirds", "fourth", "fifth" };
	func_a(titles, 5); // 2차원 배열 전달
}