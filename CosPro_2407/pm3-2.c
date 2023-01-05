#include <stdio.h>
#include <stdlib.h>

// 예산을 배분하기 위한 금액을 구하는 함수 빈칸 채우기

int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; ++i) {
		total += arr[i];
	}
	return total;
}

// 전체 예산을 초과하는 경우, 상한액을 모든 부서에 공평하게 배정합니다.
int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len); // 합계 구함
	if (req_total > total) { // 있는 금액보다 필요한 금액이 많은 지
		for (int i = 0; i < arr_len; ++i) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; ++i) {
			result[i] = arr[i];
		}
	}
	return result;
}

int main() {
	int req_arr[4] = { 200, 300, 200, 300 };
	int arr_len = sizeof(req_arr) / sizeof(req_arr[0]);
	int total = 1000;
	int* result = solution(total, req_arr, arr_len);
	for (int i = 0; i < arr_len; ++i) {
		printf("[%d] ", result[i]);
	}
}