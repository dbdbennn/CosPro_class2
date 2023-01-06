// ������ ��� �����ϴ� �Լ� ��ĭ ä���
// �� 10�ð� �Ǿ� ��� ����
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int func_a(int a) {
	return ((a / 100) * 60) + (a % 100);
}
int solution(int arr[], int arr_len) {
	int answer = 0;
	int min_a;
	int min_b;
	min_a = func_a(2200); // �����ϴ� �ð�(���� 10��)�� �� ������ ����
	for (int i = 0; i < arr_len; ++i) {
		min_b = func_a(arr[i]); // ������ ������ ���� �ð��� �� ������ ����
		answer += 1000 + ((min_a - min_b) / 10) * 500;
		printf("%d - %d [ %d ]\n", min_a, min_b, answer);
	}
	return answer;
}

int main() {
	int arr[] = { 1400, 530, 2130 , 2100 };
	int ret = solution(arr, sizeof(arr) / sizeof(arr[0]));
	printf("%d \n", ret);
	return 0;
}