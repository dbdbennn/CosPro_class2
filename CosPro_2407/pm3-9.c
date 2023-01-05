#include <stdio.h>

// 각 팀의 총 승점을 구하는 함수 수정하기
// 승점을 계산하여 담은 리스트를 return
// 이긴 팀에는 승점 2, 진 팀에는 승점 0 을 부여
// 무승부인 경우는 없음

int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);
	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int k = 0; k < 4; k++) {
			if (i != k) { // 자기 자신과 겨룰 수 없음 -> -1이 들어있는 곳은 연산 X
				result[i] += (scores[i][k] * 2); // * 2
			}
		}
	}
	return result;
}

int main() {
	int scores[4][4] = { {-1, 1, 0, 0},{ 0,-1, 0, 1},
		{ 1, 1,-1, 1}, { 1, 0, 0,-1} };
	int* result = solution(scores, 4);
	for (int i = 0; i < 4; ++i) {
		printf("[%d] ", result[i]);
	}
}