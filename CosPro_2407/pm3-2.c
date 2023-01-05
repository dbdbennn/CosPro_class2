#include <stdio.h>
#include <stdlib.h>

// ������ ����ϱ� ���� �ݾ��� ���ϴ� �Լ� ��ĭ ä���

int func_a(int arr[], int len) {
	int total = 0;
	for (int i = 0; i < len; ++i) {
		total += arr[i];
	}
	return total;
}

// ��ü ������ �ʰ��ϴ� ���, ���Ѿ��� ��� �μ��� �����ϰ� �����մϴ�.
int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len); // �հ� ����
	if (req_total > total) { // �ִ� �ݾ׺��� �ʿ��� �ݾ��� ���� ��
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