#include <stdio.h>

// �߱� ������ �� ���� �Լ� �����ϱ�
// ���ڿ� �ڸ��� ������ ��Ʈ����ũ
// ���ڴ� ������ �ڸ��� �ٸ��� ��

int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;
	result[1] = 0;
	for (int i = 0; i < 3; i++) {
		temp = b;
		// �� �ڸ����� ��� ����
		for (int k = 0; k < 3; k++) {
			if (a % 10 == temp % 10) {
				if (i == k) result[0]++; // �ڸ� ������ ��Ʈ����ũ
				else result[1]++; // �ڸ� ���� ������ ��
			}
			temp /= 10;
		}
		a /= 10; 
		// for���� ���� 10���� ������ ���ڸ� ���� ����
	}
	return result;
}

int main() {
	int* result = solution(326, 823);
	printf("Strike: %d, Ball: %d \n", result[0], result[1]);
}