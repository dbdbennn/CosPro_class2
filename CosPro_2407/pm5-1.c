#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// ���������� ���� Ƚ���� ���ϴ� �Լ� �ۼ��ϱ�

int solution(int arr[], int N) {
	int answer = 0;
	int energy = 40;
	for (int i = 0; i < N; i++) {
		if (energy < arr[i]) {
			energy = 40; // �����ϸ� ����
			answer++; // ���� Ƚ�� �߰�
		}
		energy -= arr[i]; // �̵� �Ÿ���ŭ ���̳ʽ�
	}
	return answer;
}

int main() {
	int arr[] = { 20, 10, 30, 30 };
	int ret = solution(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d \n", ret);
}