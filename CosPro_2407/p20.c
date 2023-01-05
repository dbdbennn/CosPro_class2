#include <stdio.h>

//k번째로 작은 수를 찾는 함수 작성하기

// 최솟값을 구함
int func_a(int a[][4], int n) {
	int min = 1001;
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c]) {
				min = a[r][c];
			}
		}
	}
	return min;
}

// del로 들어온 값을 a 배열에서 삭제함
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) {
				a[r][c] = 1001; // <-- 1001은 최소값이 될 수 없다.
				return 1;
			}
		}
	}
	return 0;
}


int solution(int arr[][4], int n, int k) {
	// 3번째 것을 찾고싶으면 2번 반복해서 2번째로 작은 것까지 제거
	for (int i = 1; i < k; i++) { 
		int min = func_a(arr, n);
		func_b(arr, n, min);
	}
	// 제거한 후 최솟값을 찾음
	int answer = func_a(arr, n);
	return answer;
}

void main() {
	int ans;
	int k = 3; // 몇 번째로 작은 지
	int num[][4] = { {5,12,4,31}, {24,13,11,2},
	{43,44,19,26}, {33,65,20,21} };
	// num의 행 갯수
	int num_row_size = sizeof(num) / sizeof(num[0]);

	ans = solution(num, num_row_size, k); // k번째로 작은 수
	printf("%d번째로 작은 수 : %d", k, ans); // 5
}