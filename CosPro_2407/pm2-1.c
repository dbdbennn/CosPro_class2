#include <stdio.h>
#include <stdlib.h>

int* func_a(int s[], int arr_size) { // 최대, 최소값 구하는 함수
	int* ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = ret[1] = s[0];
	for (int i = 1; i < arr_size; ++i) {
		if (s[i] > ret[0])
			ret[0] = s[i];
		if (s[i] < ret[1])
			ret[1] = s[i];
	}
	return ret;
}
int func_b(int s[], int arr_size) { // 총합 구하는 함수
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		ret += s[i];
	return ret;
}
int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len); // 1. 모든 점수의 합 구하기
	int* score = func_a(scores, scores_len); // 2. 최고, 최저 점수 구하기
	return sum - score[0] - score[1];// 3. 나머지 점수의 합 반환
}

int main() {
	int scores[] = { 20,50,80,30,50,80 };
	int len = sizeof(scores) / sizeof(scores[0]);
	int result = solution(scores, len);
	printf("%d \n", result);
}