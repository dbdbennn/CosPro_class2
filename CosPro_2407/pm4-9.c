#include <stdio.h>

// ��ü ���� ���� ���� ������ ���ϴ� �Լ� �����ϱ�
// ���� �гⳢ���� ���� �����ؾ� �ϸ� �� �ϳ��� �� �� �����ϴ� �͵� �����մϴ�. 
// �ʿ��� ���� �ּ� ������ ���Ϸ��� �մϴ�.

int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += (arr[i] / k);
		if (arr[i] % k) answer++;
	}
	return answer;
}

int main() {
	// 1 2 3 4 5 6 �г� �ο� ��
	int arr[6] = { 13, 16, 9, 2, 10, 7 };
	int result = solution(arr, sizeof(arr) / sizeof(arr[0]), 4);
	printf("%d \n", result);
}