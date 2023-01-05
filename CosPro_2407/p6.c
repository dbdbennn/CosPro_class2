#include <stdio.h>
#include <stdlib.h>

/*

*/

// 각 자연수가 몇 번 등장하는지 구해 counter 배열 리턴
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);

	// 배열 초기화
	for (int i = 0; i < 1001; i++) {
		counter[i] = 0;
	}

	// 해당하는 자연수를 index 삼아 저장함
	// 1이 3개면 1번 방에 3 저장됨
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++;
	}
	return counter;
}

// 배열 요소 중 가장 큰 값(개수의 최댓값)을 찾아 반환하는 함수
int func_b(int arr[], int arr_len) {
	int ret = 0;
	for (int i = 0; i < arr_len; i++) {
		if (ret < arr[i])
			ret = arr[i];
	}
	return ret;
}

// 배열 요소 중 가장 작은 값(개수의 최솟값)을 찾아 반환하는 함수
int func_c(int arr[], int arr_len) {
	const int INF = 1001;
	int ret = INF;
	for (int i = 0; i < arr_len; i++) {
		// arr[i]이 0인 경우는 빈도가 0이므로 해당 숫자는 제외시킨다.
		if (arr[i] != 0 && ret > arr[i])
			ret = arr[i];
	}

	return ret;
}

int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, arr_len);
	int min_cnt = func_c(counter, arr_len);
	return max_cnt / min_cnt; // 최대가 최소에 몇배에 해당하는지
}

void main() {
	int ans;
	int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
	ans = solution(arr, 10);
	printf("%d", ans);
}