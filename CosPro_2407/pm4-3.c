#include <stdio.h>

// 통학 버스 왕복 회수 구하는 함수 작성하기
// 몇 번을 왕복해야하는지

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;

	for (int i = 0; i < apts; i++) {
		total += student[i];
	}

	result = (total / 12);
	if (total % 12)
		result++;

	return result;
}

int main() {
	int student[] = { 12,3,4,4,12,8,9 };
	int apts = sizeof(student) / sizeof(student[0]);
	int result = solution(student, apts);
	printf("왕복 횟수 : %d번 \n", result);
}