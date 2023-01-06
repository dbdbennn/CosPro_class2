#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// 도착지까지 충전 횟수를 구하는 함수 작성하기

int solution(int arr[], int N) {
	int answer = 0;
	int energy = 40;
	for (int i = 0; i < N; i++) {
		if (energy < arr[i]) {
			energy = 40; // 부족하면 충전
			answer++; // 충전 횟수 추가
		}
		energy -= arr[i]; // 이동 거리만큼 마이너스
	}
	return answer;
}

int main() {
	int arr[] = { 20, 10, 30, 30 };
	int ret = solution(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d \n", ret);
}