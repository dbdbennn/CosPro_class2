#include <stdio.h>

int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int max_score = func_a(scores, scores_len);
	int min_score = func_c(scores, scores_len);
	return sum - max_score - min_score; // 전체 - 최대 - 최소
}

int func_a(int s[], int arr_size) { // 최대값 구하는 함수
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		if (s[i] > ret)
			ret = s[i];
	return ret;
}
int func_b(int s[], int arr_size) { // 총합 구하는 함수
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		ret += s[i];
	return ret;
}
int func_c(int s[], int arr_size) { // 최소값 구하는 함수
	int ret = 101;
	for (int i = 0; i < arr_size; ++i)
		if (s[i] < ret)
			ret = s[i];
	return ret;
}

int main() {
	int ans;
	int score[] = { 50, 90, 65, 100 };
	ans = solution(score, 4);
	printf("%d", ans); //155
}