#include <stdio.h>

// ���� ���� �պ� ȸ�� ���ϴ� �Լ� �ۼ��ϱ�
// �� ���� �պ��ؾ��ϴ���

int solution(int student[], int apts) {
	int result = 0;
	int total = 0;

	for (int i = 0; i < apts; i++) {
		total += student[i];
	}

	result = (total / 12);
	if (total % 12)
		result++;

	return result;
}

int main() {
	int student[] = { 12,3,4,4,12,8,9 };
	int apts = sizeof(student) / sizeof(student[0]);
	int result = solution(student, apts);
	printf("�պ� Ƚ�� : %d�� \n", result);
}