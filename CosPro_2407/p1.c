#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>

// 기출 01
int solution(char* shrit_size[], int shirt_size_len) {
	int* answer;
	// answer -> 각 셔츠 사이즈의 갯수를 계산 -> 각 작은 사이즈 별로 순서대로
	// 배열에 담아 리턴
	int i;
	// 동적할당으로 배열을 선언
	answer = (int*)malloc(sizeof(int) * 6);
	for (i = 0; i < 6; i++) {
		answer[i] = 0;
	}

	// 요청한 사이즈 별로 비교하면서 갯수 계산
	for (i = 0; i < shirt_size_len; i++) {
		if (strcmp(shrit_size[i], "XS") == 0) {
			answer[0]++;
		}
		else if (strcmp(shrit_size[i], "S") == 0) {
			answer[1]++;
		}
		else if (strcmp(shrit_size[i], "M") == 0) {
			answer[2]++;
		}
		else if (strcmp(shrit_size[i], "L") == 0) {
			answer[3]++;
		}
		else if (strcmp(shrit_size[i], "XL") == 0) {
			answer[4]++;
		}
		else if (strcmp(shrit_size[i], "XXL") == 0) {
			answer[5]++;
		}
	}

	return answer;
}

int main() {
	int *ans;
	char* shirtsize[] = { "XS", "XL", "XS", "XL", "L", "L" };
	ans = solution(shirtsize, 6);
	for (int i = 0; i < 6; i++) {
		printf("%3d", ans[i]);
	}
}
