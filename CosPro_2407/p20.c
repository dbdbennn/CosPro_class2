#include <stdio.h>

//k��°�� ���� ���� ã�� �Լ� �ۼ��ϱ�

// �ּڰ��� ����
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

// del�� ���� ���� a �迭���� ������
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) {
				a[r][c] = 1001; // <-- 1001�� �ּҰ��� �� �� ����.
				return 1;
			}
		}
	}
	return 0;
}


int solution(int arr[][4], int n, int k) {
	// 3��° ���� ã������� 2�� �ݺ��ؼ� 2��°�� ���� �ͱ��� ����
	for (int i = 1; i < k; i++) { 
		int min = func_a(arr, n);
		func_b(arr, n, min);
	}
	// ������ �� �ּڰ��� ã��
	int answer = func_a(arr, n);
	return answer;
}

void main() {
	int ans;
	int k = 3; // �� ��°�� ���� ��
	int num[][4] = { {5,12,4,31}, {24,13,11,2},
	{43,44,19,26}, {33,65,20,21} };
	// num�� �� ����
	int num_row_size = sizeof(num) / sizeof(num[0]);

	ans = solution(num, num_row_size, k); // k��°�� ���� ��
	printf("%d��°�� ���� �� : %d", k, ans); // 5
}