#include <stdio.h>
#include <stdlib.h>

/*

*/

// �� �ڿ����� �� �� �����ϴ��� ���� counter �迭 ����
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);

	// �迭 �ʱ�ȭ
	for (int i = 0; i < 1001; i++) {
		counter[i] = 0;
	}

	// �ش��ϴ� �ڿ����� index ��� ������
	// 1�� 3���� 1�� �濡 3 �����
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++;
	}
	return counter;
}

// �迭 ��� �� ���� ū ��(������ �ִ�)�� ã�� ��ȯ�ϴ� �Լ�
int func_b(int arr[], int arr_len) {
	int ret = 0;
	for (int i = 0; i < arr_len; i++) {
		if (ret < arr[i])
			ret = arr[i];
	}
	return ret;
}

// �迭 ��� �� ���� ���� ��(������ �ּڰ�)�� ã�� ��ȯ�ϴ� �Լ�
int func_c(int arr[], int arr_len) {
	const int INF = 1001;
	int ret = INF;
	for (int i = 0; i < arr_len; i++) {
		// arr[i]�� 0�� ���� �󵵰� 0�̹Ƿ� �ش� ���ڴ� ���ܽ�Ų��.
		if (arr[i] != 0 && ret > arr[i])
			ret = arr[i];
	}

	return ret;
}

int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, arr_len);
	int min_cnt = func_c(counter, arr_len);
	return max_cnt / min_cnt; // �ִ밡 �ּҿ� ��迡 �ش��ϴ���
}

void main() {
	int ans;
	int arr[10] = { 1, 2, 3, 3, 1, 3, 3, 2, 3, 2 };
	ans = solution(arr, 10);
	printf("%d", ans);
}